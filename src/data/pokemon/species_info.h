#include "constants/abilities.h"
#include "species_info/shared_dex_text.h"
#include "species_info/shared_front_pic_anims.h"

// Macros for ease of use.

#define EVOLUTION(...) (const struct Evolution[]) { __VA_ARGS__, { EVOLUTIONS_END }, }
#define CONDITIONS(...) ((const struct EvolutionParam[]) { __VA_ARGS__, {CONDITIONS_END} })

#define ANIM_FRAMES(...) (const union AnimCmd *const[]) { sAnim_GeneralFrame0, (const union AnimCmd[]) { __VA_ARGS__ ANIMCMD_END, }, }

#if P_FOOTPRINTS
#define FOOTPRINT(sprite) .footprint = gMonFootprint_## sprite,
#else
#define FOOTPRINT(sprite)
#endif

#if B_ENEMY_MON_SHADOW_STYLE >= GEN_4 && P_GBA_STYLE_SPECIES_GFX == FALSE
#define SHADOW(x, y, size)  .enemyShadowXOffset = x, .enemyShadowYOffset = y, .enemyShadowSize = size,
#define NO_SHADOW           .suppressEnemyShadow = TRUE,
#else
#define SHADOW(x, y, size)  .enemyShadowXOffset = 0, .enemyShadowYOffset = 0, .enemyShadowSize = 0,
#define NO_SHADOW           .suppressEnemyShadow = FALSE,
#endif

#define SIZE_32x32 1
#define SIZE_64x64 0

// Set .compressed = OW_GFX_COMPRESS
#define COMP OW_GFX_COMPRESS

#if OW_POKEMON_OBJECT_EVENTS
#if OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE
#define OVERWORLD_PAL(...)                                  \
    .overworldPalette = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPalette = DEFAULT_2(NULL, __VA_ARGS__),
#if P_GENDER_DIFFERENCES
#define OVERWORLD_PAL_FEMALE(...)                                 \
    .overworldPaletteFemale = DEFAULT(NULL, __VA_ARGS__),         \
    .overworldShinyPaletteFemale = DEFAULT_2(NULL, __VA_ARGS__),
#else
#define OVERWORLD_PAL_FEMALE(...)
#endif //P_GENDER_DIFFERENCES
#else
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_PKMN_OBJECTS_SHARE_PALETTES == FALSE

#define OVERWORLD_DATA(picTable, _size, shadow, _tracks, _anims)                                                                     \
{                                                                                                                                       \
    .tileTag = TAG_NONE,                                                                                                                \
    .paletteTag = OBJ_EVENT_PAL_TAG_DYNAMIC,                                                                                            \
    .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,                                                                                     \
    .size = (_size == SIZE_32x32 ? 512 : 2048),                                                                                         \
    .width = (_size == SIZE_32x32 ? 32 : 64),                                                                                           \
    .height = (_size == SIZE_32x32 ? 32 : 64),                                                                                          \
    .paletteSlot = PALSLOT_NPC_1,                                                                                                       \
    .shadowSize = shadow,                                                                                                               \
    .inanimate = FALSE,                                                                                                                 \
    .compressed = COMP,                                                                                                                 \
    .tracks = _tracks,                                                                                                                  \
    .oam = (_size == SIZE_32x32 ? &gObjectEventBaseOam_32x32 : &gObjectEventBaseOam_64x64),                                             \
    .subspriteTables = (_size == SIZE_32x32 ? sOamTables_32x32 : sOamTables_64x64),                                                     \
    .anims = _anims,                                                                                                                    \
    .images = picTable,                                                                                                                 \
    .affineAnims = gDummySpriteAffineAnimTable,                                                                                         \
}

#define OVERWORLD(objEventPic, _size, shadow, _tracks, _anims, ...)                                 \
    .overworldData = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),                   \
    OVERWORLD_PAL(__VA_ARGS__)

#if P_GENDER_DIFFERENCES
#define OVERWORLD_FEMALE(objEventPic, _size, shadow, _tracks, _anims, ...)                          \
    .overworldDataFemale = OVERWORLD_DATA(objEventPic, _size, shadow, _tracks, _anims),             \
    OVERWORLD_PAL_FEMALE(__VA_ARGS__)
#else
#define OVERWORLD_FEMALE(...)
#endif //P_GENDER_DIFFERENCES

#else
#define OVERWORLD(...)
#define OVERWORLD_FEMALE(...)
#define OVERWORLD_PAL(...)
#define OVERWORLD_PAL_FEMALE(...)
#endif //OW_POKEMON_OBJECT_EVENTS

// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

#define MON_TYPES(type1, ...) { type1, DEFAULT(type1, __VA_ARGS__) }
#define MON_EGG_GROUPS(group1, ...) { group1, DEFAULT(group1, __VA_ARGS__) }

#define FLIP    0
#define NO_FLIP 1

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] =
    {
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = gFallbackPokedexText,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(40, 40),
        .frontPicYOffset = 12,
        .frontAnimFrames = sAnims_TwoFramePlaceHolder,
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(40, 40),
        .backPicYOffset = 12,
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        FOOTPRINT(QuestionMark)
        SHADOW(-1, 0, SHADOW_SIZE_M)
    #if OW_POKEMON_OBJECT_EVENTS
        .overworldData = {
            .tileTag = TAG_NONE,
            .paletteTag = OBJ_EVENT_PAL_TAG_SUBSTITUTE,
            .reflectionPaletteTag = OBJ_EVENT_PAL_TAG_NONE,
            .size = 512,
            .width = 32,
            .height = 32,
            .paletteSlot = PALSLOT_NPC_1,
            .shadowSize = SHADOW_SIZE_M,
            .inanimate = FALSE,
            .compressed = COMP,
            .tracks = TRACKS_FOOT,
            .oam = &gObjectEventBaseOam_32x32,
            .subspriteTables = sOamTables_32x32,
            .anims = sAnimTable_Following,
            .images = sPicTable_Substitute,
            .affineAnims = gDummySpriteAffineAnimTable,
        },
    #endif
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .eggMoveLearnset = sNoneEggMoveLearnset,
    },

    #include "species_info/gen_1_families.h"
    #include "species_info/gen_2_families.h"
    #include "species_info/gen_3_families.h"
    #include "species_info/gen_4_families.h"
    #include "species_info/gen_5_families.h"
    #include "species_info/gen_6_families.h"
    #include "species_info/gen_7_families.h"
    #include "species_info/gen_8_families.h"
    #include "species_info/gen_9_families.h"

    [SPECIES_EGG] =
    {
        .frontPic = gMonFrontPic_Egg,
        .frontPicSize = MON_COORDS_SIZE(24, 24),
        .frontPicYOffset = 20,
        .backPic = gMonFrontPic_Egg,
        .backPicSize = MON_COORDS_SIZE(24, 24),
        .backPicYOffset = 20,
        .palette = gMonPalette_Egg,
        .shinyPalette = gMonPalette_Egg,
        .iconSprite = gMonIcon_Egg,
        .iconPalIndex = 1,
    },

    [SPECIES_BUNEARY_STARTER] =
    {
        .baseHP        = 64,
        .baseAttack    = 75,
        .baseDefense   = 56,
        .baseSpeed     = 85,
        .baseSpAttack  = 44,
        .baseSpDefense = 56,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 190,
        .expYield = 84,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SCRAPPY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Buneary"),
        .cryId = CRY_BUNEARY,
        .natDexNum = NATIONAL_DEX_BUNEARY,
        .categoryName = _("Rabbit"),
        .height = 4,
        .weight = 55,
        .description = COMPOUND_STRING(
            "You can tell how it feels by the way\n"
            "it rolls its ears. When it's scared,\n"
            "both ears are rolled up. When it senses\n"
            "danger, it perks them up."),
        .pokemonScale = 491,
        .pokemonOffset = 16,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_BunearyStarter,
        .frontPicSize = MON_COORDS_SIZE(32, 64),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 35),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_H_JUMPS_V_STRETCH,
        .backPic = gMonBackPic_BunearyStarter,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_SMALL,
        .palette = gMonPalette_BunearyStarter,
        .shinyPalette = gMonShinyPalette_BunearyStarter,
        .iconSprite = gMonIcon_BunearyStarter,
        .iconPalIndex = 2,
        SHADOW(1, 7, SHADOW_SIZE_S)
        FOOTPRINT(Buneary)
        OVERWORLD(
            sPicTable_BunearyStarter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_BunearyStarter,
            gShinyOverworldPalette_BunearyStarter
        )
        .levelUpLearnset = sBunearyStarterLevelUpLearnset,
        .teachableLearnset = sBunearyTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 30, SPECIES_LOPUNNY_STARTER}),
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_LOPUNNY_STARTER] =
    {
        .baseHP        = 75,
        .baseAttack    = 94,
        .baseDefense   = 96,
        .baseSpeed     = 105,
        .baseSpAttack  = 44,
        .baseSpDefense = 96,
        .types = MON_TYPES(TYPE_NORMAL),
        .catchRate = 60,
        .expYield = 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SCRAPPY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
        .cryId = CRY_LOPUNNY,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 12,
        .weight = 333,
        .description = COMPOUND_STRING(
            "An extremely cautious Pokémon.\n"
            "It is very conscious of its looks and\n"
            "never fails to groom its ears.\n"
            "It runs with sprightly jumps."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LopunnyStarter,
        .frontPicSize = MON_COORDS_SIZE(56, 56),
        .frontPicYOffset = 4,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_SHRINK_GROW,
        .backPic = gMonBackPic_LopunnyStarter,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_LopunnyStarter,
        .shinyPalette = gMonShinyPalette_LopunnyStarter,
        .iconSprite = gMonIcon_LopunnyStarter,
        .iconPalIndex = 2,
        SHADOW(0, 9, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
        OVERWORLD(
            sPicTable_LopunnyStarter,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_LopunnyStarter,
            gShinyOverworldPalette_LopunnyStarter
        )
        .levelUpLearnset = sLopunnyStarterLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyStarterFormSpeciesIdTable,
        .formChangeTable = sLopunnyStarterFormChangeTable,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_LOPUNNY_STARTER_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 140,
        .baseDefense   = 108,
        .baseSpeed     = 135,
        .baseSpAttack  = 44,
        .baseSpDefense = 108,
        .types = MON_TYPES(TYPE_NORMAL, TYPE_FIGHTING),
        .catchRate = 60,
        .expYield = 178,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(100),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SCRAPPY, ABILITY_SCRAPPY, ABILITY_SCRAPPY },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Lopunny"),
        .cryId = CRY_LOPUNNY_MEGA,
        .natDexNum = NATIONAL_DEX_LOPUNNY,
        .categoryName = _("Rabbit"),
        .height = 13,
        .weight = 283,
        .description = COMPOUND_STRING(
            "Mega Evolution awakens its combative\n"
            "instincts. It has shed any fur that got in\n"
            "the way of its attacks.\n"
            "crescent."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LopunnyStarterMega,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LopunnyStarterMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LopunnyStarterMega,
        .shinyPalette = gMonShinyPalette_LopunnyStarterMega,
        .iconSprite = gMonIcon_LopunnyStarterMega,
        .iconPalIndex = 2,
        SHADOW(0, 12, SHADOW_SIZE_S)
        FOOTPRINT(Lopunny)
        .levelUpLearnset = sLopunnyStarterLevelUpLearnset,
        .teachableLearnset = sLopunnyTeachableLearnset,
        .formSpeciesIdTable = sLopunnyStarterFormSpeciesIdTable,
        .formChangeTable = sLopunnyStarterFormChangeTable,
        .isMegaEvolution = TRUE,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_RIOLU_STARTER] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_FIGHTING),
        .catchRate = 75,
        .expYield = 72,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Riolu"),
        .cryId = CRY_RIOLU,
        .natDexNum = NATIONAL_DEX_RIOLU,
        .categoryName = _("Emanation"),
        .height = 7,
        .weight = 202,
        .description = COMPOUND_STRING(
            "It can discern the physical and emotional\n"
            "states of people, Pokémon, and other\n"
            "natural things from the shape of their\n"
            "aura waves."),
        .pokemonScale = 365,
        .pokemonOffset = 13,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Riolu,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 10,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 3),
            ANIMCMD_FRAME(1, 50),
            ANIMCMD_FRAME(1, 28),
            ANIMCMD_FRAME(0, 5),
        ),
        .frontAnimId = ANIM_RAPID_H_HOPS,
        .backPic = gMonBackPic_Riolu,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 8,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_Riolu,
        .shinyPalette = gMonShinyPalette_Riolu,
        .iconSprite = gMonIcon_Riolu,
        .iconPalIndex = 2,
        FOOTPRINT(QuestionMark)
        FOOTPRINT(Riolu)
        OVERWORLD(
            sPicTable_Riolu,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Riolu,
            gShinyOverworldPalette_Riolu
        )
        .levelUpLearnset = sRioluLevelUpLearnset,
        .teachableLearnset = sRioluTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 0, SPECIES_LUCARIO_STARTER, CONDITIONS({IF_MIN_FRIENDSHIP, FRIENDSHIP_EVO_THRESHOLD},{IF_NOT_TIME, TIME_NIGHT})}),
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_LUCARIO_STARTER] =
    {
        .baseHP        = 75,
        .baseAttack    = 115,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 115,
        .baseSpDefense = 75,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_JUSTIFIED, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
        .cryId = CRY_LUCARIO,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 12,
        .weight = 540,
        .description = COMPOUND_STRING(
            "It understands human speech.\n"
            "It is said that no foe can remain invisible\n"
            "to Lucario, since it can detect Auras.\n"
            "Even foes it could not otherwise see."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Lucario,
        .frontPicSize = MON_COORDS_SIZE(48, 56),
        .frontPicYOffset = 7,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 40),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_V_STRETCH,
        .backPic = gMonBackPic_Lucario,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_V_SHAKE_H_SLIDE,
        .palette = gMonPalette_Lucario,
        .shinyPalette = gMonShinyPalette_Lucario,
        .iconSprite = gMonIcon_Lucario,
        .iconPalIndex = 2,
        FOOTPRINT(Lucario)
        OVERWORLD(
            sPicTable_Lucario,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Lucario,
            gShinyOverworldPalette_Lucario
        )
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioStarterFormSpeciesIdTable,
        .formChangeTable = sLucarioStarterFormChangeTable,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_LUCARIO_STARTER_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 145,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = MON_TYPES(TYPE_FIGHTING, TYPE_STEEL),
        .catchRate = 45,
        .expYield = 204,
        .evYield_Attack = 1,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_ADAPTABILITY, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BLUE,
        .speciesName = _("Lucario"),
        .cryId = CRY_LUCARIO_MEGA,
        .natDexNum = NATIONAL_DEX_LUCARIO,
        .categoryName = _("Aura"),
        .height = 13,
        .weight = 575,
        .description = COMPOUND_STRING(
            "It readies itself to face its enemies by\n"
            "focusing its mental energies. Its fighting\n"
            "style can be summed up in a single word:\n"
            "heartless."),
        .pokemonScale = 282,
        .pokemonOffset = 4,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_LucarioMega,
        .frontPicSize = MON_COORDS_SIZE(48, 64),
        .frontPicYOffset = 2,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_LucarioMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 0,
        .backAnimId = BACK_ANIM_CONCAVE_ARC_LARGE,
        .palette = gMonPalette_LucarioMega,
        .shinyPalette = gMonShinyPalette_LucarioMega,
        .iconSprite = gMonIcon_LucarioMega,
        .iconPalIndex = 2,
        FOOTPRINT(Lucario)
        .levelUpLearnset = sLucarioLevelUpLearnset,
        .teachableLearnset = sLucarioTeachableLearnset,
        .formSpeciesIdTable = sLucarioStarterFormSpeciesIdTable,
        .formChangeTable = sLucarioStarterFormChangeTable,
        .isMegaEvolution = TRUE,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_RALTS_STARTER] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 235,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Ralts"),
        .cryId = CRY_RALTS,
        .natDexNum = NATIONAL_DEX_RALTS,
        .categoryName = _("Feeling"),
        .height = 4,
        .weight = 66,
        .description = COMPOUND_STRING(
            "A Ralts has the power to sense the\n"
            "emotions of people and Pokémon with the\n"
            "horns on its head. It takes cover if it\n"
            "senses any hostility."),
        .pokemonScale = 457,
        .pokemonOffset = -3,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Ralts,
        .frontPicSize = MON_COORDS_SIZE(24, 40),
        .frontPicYOffset = P_GBA_STYLE_SPECIES_GFX ? 15 : 12,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 8),
            ANIMCMD_FRAME(1, 25),
            ANIMCMD_FRAME(0, 8),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE_SLOW,
        .backPic = gMonBackPic_Ralts,
        .backPicSize = MON_COORDS_SIZE(32, 40),
        .backPicYOffset = 13,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Ralts,
        .shinyPalette = gMonShinyPalette_Ralts,
        .iconSprite = gMonIcon_Ralts,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(0, 1, SHADOW_SIZE_S)
        FOOTPRINT(Ralts)
        OVERWORLD(
            sPicTable_Ralts,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Ralts,
            gShinyOverworldPalette_Ralts
        )
        .levelUpLearnset = sRaltsLevelUpLearnset,
        .teachableLearnset = sRaltsTeachableLearnset,
        .eggMoveLearnset = sRaltsEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 20, SPECIES_KIRLIA_STARTER}),
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_KIRLIA_STARTER] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FAIRY),
        .catchRate = 120,
        .expYield = 140,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_TRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Kirlia"),
        .cryId = CRY_KIRLIA,
        .natDexNum = NATIONAL_DEX_KIRLIA,
        .categoryName = _("Emotion"),
        .height = 8,
        .weight = 202,
        .description = COMPOUND_STRING(
            "A Kirlia has the psychic power to create \n"
            "a rip in the dimensions and see into the\n"
            "future. It is said to dance with pleasure\n"
            "on sunny mornings."),
        .pokemonScale = 354,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Kirlia,
        .frontPicSize = MON_COORDS_SIZE(32, 56),
        .frontPicYOffset = 6,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 10),
            ANIMCMD_FRAME(1, 39),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_Kirlia,
        .backPicSize = P_GBA_STYLE_SPECIES_GFX ? MON_COORDS_SIZE(40, 56) : MON_COORDS_SIZE(48, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Kirlia,
        .shinyPalette = gMonShinyPalette_Kirlia,
        .iconSprite = gMonIcon_Kirlia,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NORMAL,
        SHADOW(-2, 7, SHADOW_SIZE_S)
        FOOTPRINT(Kirlia)
        OVERWORLD(
            sPicTable_Kirlia,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Kirlia,
            gShinyOverworldPalette_Kirlia
        )
        .levelUpLearnset = sKirliaLevelUpLearnset,
        .teachableLearnset = sKirliaTeachableLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_DAWN_STONE, SPECIES_GALLADE_STARTER, CONDITIONS({IF_GENDER, MON_MALE})}),
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_GALLADE_STARTER] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 105,
        .baseSpAttack  = 50,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SHARPNESS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 520,
        .description = COMPOUND_STRING(
            "A master of courtesy and swordsmanship,\n"
            "it fights using extending swords on its\n"
            "elbows when trying to protect someone.\n"
            "It can sense what its foe is thinking."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_Gallade,
        .frontPicSize = MON_COORDS_SIZE(56, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 20),
            ANIMCMD_FRAME(0, 20),
        ),
        .frontAnimId = ANIM_H_VIBRATE,
        .backPic = gMonBackPic_Gallade,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_Gallade,
        .shinyPalette = gMonShinyPalette_Gallade,
        .iconSprite = gMonIcon_Gallade,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(4, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        OVERWORLD(
            sPicTable_Gallade,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Gallade,
            gShinyOverworldPalette_Gallade
        )
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_GALLADE_STARTER_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 135,
        .baseSpAttack  = 50,
        .baseSpDefense = 115,
        .types = MON_TYPES(TYPE_PSYCHIC, TYPE_FIGHTING),
        .catchRate = 45,
        .expYield = 208,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SHARPNESS, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_WHITE,
        .speciesName = _("Gallade"),
        .cryId = CRY_GALLADE_MEGA,
        .natDexNum = NATIONAL_DEX_GALLADE,
        .categoryName = _("Blade"),
        .height = 16,
        .weight = 564,
        .description = COMPOUND_STRING(
            "Mega Gallade has a knightly appearance.\n"
            "It can use its psychic power to reshape\n"
            "both arms into blades simultaneously and\n"
            "fight using a dual-wielding style."),
        .pokemonScale = 259,
        .pokemonOffset = 1,
        .trainerScale = 296,
        .trainerOffset = 1,
        .frontPic = gMonFrontPic_GalladeMega,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_GalladeMega,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 3,
        .backAnimId = BACK_ANIM_SHRINK_GROW_VIBRATE,
        .palette = gMonPalette_GalladeMega,
        .shinyPalette = gMonShinyPalette_GalladeMega,
        .iconSprite = gMonIcon_GalladeMega,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-2, 13, SHADOW_SIZE_L)
        FOOTPRINT(Gallade)
        .isMegaEvolution = TRUE,
        .levelUpLearnset = sGalladeLevelUpLearnset,
        .teachableLearnset = sGalladeTeachableLearnset,
        .formSpeciesIdTable = sGalladeFormSpeciesIdTable,
        .formChangeTable = sGalladeFormChangeTable,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    [SPECIES_PHANTUMP_STARTER] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HARVEST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Phantump"),
        .cryId = CRY_PHANTUMP,
        .natDexNum = NATIONAL_DEX_PHANTUMP,
        .categoryName = _("Stump"),
        .height = 4,
        .weight = 70,
        .description = COMPOUND_STRING(
            "According to legend, medicine to cure\n"
            "any illness can be made by plucking the\n"
            "green leaves on its head, brewing them,\n"
            "and boiling down the liquid."),
        .pokemonScale = 491,
        .pokemonOffset = 12,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Phantump,
        .frontPicSize = MON_COORDS_SIZE(48, 48),
        .frontPicYOffset = 11,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(0, 20),
            ANIMCMD_FRAME(1, 10),
            ANIMCMD_FRAME(0, 10),
        ),
        .frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .enemyMonElevation = 5,
        .backPic = gMonBackPic_Phantump,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 9,
        .backAnimId = BACK_ANIM_CIRCLE_COUNTERCLOCKWISE,
        .palette = gMonPalette_Phantump,
        .shinyPalette = gMonShinyPalette_Phantump,
        .iconSprite = gMonIcon_Phantump,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 5, SHADOW_SIZE_S)
        FOOTPRINT(Phantump)
        OVERWORLD(
            sPicTable_Phantump,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Phantump,
            gShinyOverworldPalette_Phantump
        )
        .levelUpLearnset = sPhantumpLevelUpLearnset,
        .teachableLearnset = sPhantumpTeachableLearnset,
        .eggMoveLearnset = sPhantumpEggMoveLearnset,
        .evolutions = EVOLUTION({EVO_ITEM, ITEM_LINKING_CORD, SPECIES_TREVENANT_STARTER}),
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_TREVENANT_STARTER] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = MON_TYPES(TYPE_GHOST, TYPE_GRASS),
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(0),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_HARVEST, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_BROWN,
        .speciesName = _("Trevenant"),
        .cryId = CRY_TREVENANT,
        .natDexNum = NATIONAL_DEX_TREVENANT,
        .categoryName = _("Elder Tree"),
        .height = 15,
        .weight = 710,
        .description = COMPOUND_STRING(
            "Through its roots, it exerts control over\n"
            "other trees. A deadly curse falls upon\n"
            "anyone cutting down trees in forests\n"
            "where Trevenant dwell."),
        .pokemonScale = 268,
        .pokemonOffset = 2,
        .trainerScale = 271,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_Trevenant,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 1,
        .frontAnimFrames = ANIM_FRAMES(
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
            ANIMCMD_FRAME(1, 15),
            ANIMCMD_FRAME(0, 15),
        ),
        .frontAnimId = ANIM_H_SLIDE_SLOW,
        .backPic = gMonBackPic_Trevenant,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 5,
        .backAnimId = BACK_ANIM_V_SHAKE_LOW,
        .palette = gMonPalette_Trevenant,
        .shinyPalette = gMonShinyPalette_Trevenant,
        .iconSprite = gMonIcon_Trevenant,
        .iconPalIndex = 1,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(-1, 13, SHADOW_SIZE_M)
        FOOTPRINT(Trevenant)
        OVERWORLD(
            sPicTable_Trevenant,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_FOOT,
            sAnimTable_Following,
            gOverworldPalette_Trevenant,
            gShinyOverworldPalette_Trevenant
        )
        .levelUpLearnset = sTrevenantLevelUpLearnset,
        .teachableLearnset = sTrevenantTeachableLearnset,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },

    [SPECIES_JIRACHI_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 125,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 125,
        .types = MON_TYPES(TYPE_STEEL, TYPE_PSYCHIC),
        .catchRate = 3,
        .expYield = 255,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_SERENE_GRACE, ABILITY_NONE, ABILITY_NONE },
        .bodyColor = BODY_COLOR_YELLOW,
        .speciesName = _("Jirachi"),
        .cryId = CRY_JIRACHI,
        .natDexNum = NATIONAL_DEX_JIRACHI,
        .categoryName = _("Wish"),
        .height = 3,
        .weight = 11,
        .description = COMPOUND_STRING(
            "Jirachi is said to make wishes come true.\n"
            "While it sleeps, a tough crystalline shell\n"
            "envelops the body to protect it from\n"
            "enemies."),
        .pokemonScale = 608,
        .pokemonOffset = -8,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_JirachiMega,
        .frontPicSize = MON_COORDS_SIZE(56, 48),
        .frontPicYOffset = 8,
        .frontAnimFrames = sAnims_SingleFramePlaceHolder,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_JirachiMega,
        .backPicSize = MON_COORDS_SIZE(64, 56),
        .backPicYOffset = 6,
        .backAnimId = BACK_ANIM_CONVEX_DOUBLE_ARC,
        .palette = gMonPalette_JirachiMega,
        .shinyPalette = gMonShinyPalette_JirachiMega,
        .iconSprite = gMonIcon_JirachiMega,
        .iconPalIndex = 0,
        .pokemonJumpType = PKMN_JUMP_TYPE_NONE,
        SHADOW(0, 5, SHADOW_SIZE_S)
        FOOTPRINT(Jirachi)
        OVERWORLD(
            sPicTable_Jirachi,
            SIZE_32x32,
            SHADOW_SIZE_M,
            TRACKS_NONE,
            sAnimTable_Following,
            gOverworldPalette_Jirachi,
            gShinyOverworldPalette_Jirachi
        )
        .isMythical = TRUE,
        .isFrontierBanned = TRUE,
        .levelUpLearnset = sJirachiLevelUpLearnset,
        .teachableLearnset = sJirachiTeachableLearnset,
        .formSpeciesIdTable = sJirachiFormSpeciesIdTable,
        .formChangeTable = sJirachiFormChangeTable,
        .isMegaEvolution = TRUE,
        .cannotBeTraded = TRUE,
        .perfectIVCount = NUM_STATS,
    },
    
    /* You may add any custom species below this point based on the following structure: */

    /*
    [SPECIES_NONE] =
    {
        .baseHP        = 1,
        .baseAttack    = 1,
        .baseDefense   = 1,
        .baseSpeed     = 1,
        .baseSpAttack  = 1,
        .baseSpDefense = 1,
        .types = MON_TYPES(TYPE_MYSTERY),
        .catchRate = 255,
        .expYield = 67,
        .evYield_HP = 1,
        .evYield_Defense = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = MON_EGG_GROUPS(EGG_GROUP_NO_EGGS_DISCOVERED),
        .abilities = { ABILITY_NONE, ABILITY_CURSED_BODY, ABILITY_DAMP },
        .bodyColor = BODY_COLOR_BLACK,
        .speciesName = _("??????????"),
        .cryId = CRY_NONE,
        .natDexNum = NATIONAL_DEX_NONE,
        .categoryName = _("Unknown"),
        .height = 0,
        .weight = 0,
        .description = COMPOUND_STRING(
            "This is a newly discovered Pokémon.\n"
            "It is currently under investigation.\n"
            "No detailed information is available\n"
            "at this time."),
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
        .frontPic = gMonFrontPic_CircledQuestionMark,
        .frontPicSize = MON_COORDS_SIZE(64, 64),
        .frontPicYOffset = 0,
        .frontAnimFrames = sAnims_None,
        //.frontAnimId = ANIM_V_SQUISH_AND_BOUNCE,
        .backPic = gMonBackPic_CircledQuestionMark,
        .backPicSize = MON_COORDS_SIZE(64, 64),
        .backPicYOffset = 7,
#if P_GENDER_DIFFERENCES
        .frontPicFemale = gMonFrontPic_CircledQuestionMark,
        .frontPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .backPicFemale = gMonBackPic_CircledQuestionMarkF,
        .backPicSizeFemale = MON_COORDS_SIZE(64, 64),
        .paletteFemale = gMonPalette_CircledQuestionMarkF,
        .shinyPaletteFemale = gMonShinyPalette_CircledQuestionMarkF,
        .iconSpriteFemale = gMonIcon_QuestionMarkF,
        .iconPalIndexFemale = 1,
#endif //P_GENDER_DIFFERENCES
        .backAnimId = BACK_ANIM_NONE,
        .palette = gMonPalette_CircledQuestionMark,
        .shinyPalette = gMonShinyPalette_CircledQuestionMark,
        .iconSprite = gMonIcon_QuestionMark,
        .iconPalIndex = 0,
        FOOTPRINT(QuestionMark)
        .levelUpLearnset = sNoneLevelUpLearnset,
        .teachableLearnset = sNoneTeachableLearnset,
        .evolutions = EVOLUTION({EVO_LEVEL, 100, SPECIES_NONE},
                                {EVO_ITEM, ITEM_MOOMOO_MILK, SPECIES_NONE}),
        //.formSpeciesIdTable = sNoneFormSpeciesIdTable,
        //.formChangeTable = sNoneFormChangeTable,
        //.perfectIVCount = NUM_STATS,
    },
    */
};
