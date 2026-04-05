SapphireVillage_House2_MapScripts::
	.byte 0


SapphireVillage_House2_EventScript_Nina::
# 4 "data/maps/SapphireVillage_House2/scripts.pory"
	lock
# 5 "data/maps/SapphireVillage_House2/scripts.pory"
	faceplayer
# 6 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SapphireVillage_House2_EventScript_Nina_1
# 11 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Nina_Text_1
# 12 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return

SapphireVillage_House2_EventScript_Nina_1:
# 7 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Nina_Text_0
# 8 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


SapphireVillage_House2_EventScript_Amber::
# 17 "data/maps/SapphireVillage_House2/scripts.pory"
	lock
# 18 "data/maps/SapphireVillage_House2/scripts.pory"
	faceplayer
# 19 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SapphireVillage_House2_EventScript_Amber_1
# 68 "data/maps/SapphireVillage_House2/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq SapphireVillage_House2_EventScript_Amber_2
# 73 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, SapphireVillage_House2_EventScript_Amber_3
# 94 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_8
# 95 "data/maps/SapphireVillage_House2/scripts.pory"
	closemessage
# 96 "data/maps/SapphireVillage_House2/scripts.pory"
	applymovement SapphAmber, Ambermov1
# 97 "data/maps/SapphireVillage_House2/scripts.pory"
	waitmovement 0
# 98 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return

SapphireVillage_House2_EventScript_Amber_1:
# 20 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_0, MSGBOX_YESNO
# 21 "data/maps/SapphireVillage_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireVillage_House2_EventScript_Amber_9
# 47 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_4
# 48 "data/maps/SapphireVillage_House2/scripts.pory"
	special ChoosePartyMon
# 49 "data/maps/SapphireVillage_House2/scripts.pory"
	waitstate
# 50 "data/maps/SapphireVillage_House2/scripts.pory"
	lock
# 51 "data/maps/SapphireVillage_House2/scripts.pory"
	faceplayer
# 52 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, Amber9
# 53 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
# 54 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_eq VAR_RESULT, SPECIES_EGG, Amber10
# 55 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_5
# 56 "data/maps/SapphireVillage_House2/scripts.pory"
	closemessage
# 57 "data/maps/SapphireVillage_House2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/SapphireVillage_House2/scripts.pory"
	playse MUS_RG_HEAL
# 59 "data/maps/SapphireVillage_House2/scripts.pory"
	waitse
# 60 "data/maps/SapphireVillage_House2/scripts.pory"
	special DaisyMassageServices
# 61 "data/maps/SapphireVillage_House2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 62 "data/maps/SapphireVillage_House2/scripts.pory"
	special BufferMonNickname
# 63 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_6
# 64 "data/maps/SapphireVillage_House2/scripts.pory"
	setvar VAR_TEMP_1, 1
# 65 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	end

SapphireVillage_House2_EventScript_Amber_2:
# 69 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_7
# 70 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	end

SapphireVillage_House2_EventScript_Amber_3:
# 74 "data/maps/SapphireVillage_House2/scripts.pory"
	special DaisyMassageServices
# 75 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Amber1
# 76 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_3
# 77 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 78 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_NONE, Amber2
# 79 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 80 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_1_TO_49, Amber3
# 81 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 82 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, Amber4
# 83 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 84 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_100_TO_149, Amber5
# 85 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 86 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, Amber6
# 87 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 88 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_200_TO_254, Amber7
# 89 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 90 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_MAX, Amber8
	end

SapphireVillage_House2_EventScript_Amber_9:
# 22 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_1, MSGBOX_YESNO
# 23 "data/maps/SapphireVillage_House2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SapphireVillage_House2_EventScript_Amber_12
# 28 "data/maps/SapphireVillage_House2/scripts.pory"
	special DaisyMassageServices
# 29 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_eq VAR_RESULT, 2, Amber1
# 30 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_3
# 31 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 32 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_NONE, Amber2
# 33 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 34 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_1_TO_49, Amber3
# 35 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 36 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_50_TO_99, Amber4
# 37 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 38 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_100_TO_149, Amber5
# 39 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 40 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_150_TO_199, Amber6
# 41 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 42 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_200_TO_254, Amber7
# 43 "data/maps/SapphireVillage_House2/scripts.pory"
	specialvar VAR_RESULT, GetLeadMonFriendshipScore
# 44 "data/maps/SapphireVillage_House2/scripts.pory"
	goto_if_ge VAR_RESULT, FRIENDSHIP_MAX, Amber8
	end

SapphireVillage_House2_EventScript_Amber_12:
# 24 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Amber_Text_2
# 25 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	end


Amber9::
# 103 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber9_Text_0
# 104 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber10::
# 108 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber10_Text_0
	return


Amber1::
# 112 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber2::
# 116 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber2_Text_0
# 117 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber3::
# 121 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber3_Text_0
# 122 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber4::
# 126 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber4_Text_0
# 127 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber5::
# 131 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber5_Text_0
# 132 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber6::
# 136 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber6_Text_0
# 137 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber7::
# 141 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber7_Text_0
# 142 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


Amber8::
# 146 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox Amber8_Text_0
# 147 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


# 150 "data/maps/SapphireVillage_House2/scripts.pory"
Ambermov1:
# 151 "data/maps/SapphireVillage_House2/scripts.pory"
	face_original_direction
	step_end

SapphireVillage_House2_EventScript_Tile::
# 155 "data/maps/SapphireVillage_House2/scripts.pory"
	lock
# 156 "data/maps/SapphireVillage_House2/scripts.pory"
	applymovement SVNina, SVHouse2Ninamov1
# 157 "data/maps/SapphireVillage_House2/scripts.pory"
	msgbox SapphireVillage_House2_EventScript_Tile_Text_0
# 158 "data/maps/SapphireVillage_House2/scripts.pory"
	closemessage
# 159 "data/maps/SapphireVillage_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SVHouse2Playermov1
# 160 "data/maps/SapphireVillage_House2/scripts.pory"
	waitmovement 0
# 161 "data/maps/SapphireVillage_House2/scripts.pory"
	applymovement SVNina, SVHouseNinamov2
# 162 "data/maps/SapphireVillage_House2/scripts.pory"
	waitmovement 0
# 163 "data/maps/SapphireVillage_House2/scripts.pory"
	release
	return


# 166 "data/maps/SapphireVillage_House2/scripts.pory"
SVHouse2Playermov1:
# 167 "data/maps/SapphireVillage_House2/scripts.pory"
	walk_down
	step_end

# 170 "data/maps/SapphireVillage_House2/scripts.pory"
SVHouse2Ninamov1:
# 171 "data/maps/SapphireVillage_House2/scripts.pory"
	face_up
	step_end

# 174 "data/maps/SapphireVillage_House2/scripts.pory"
SVHouseNinamov2:
# 175 "data/maps/SapphireVillage_House2/scripts.pory"
	face_original_direction
	step_end

SapphireVillage_House2_EventScript_Nina_Text_0:
# 7 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Nina: I can't believe Jade was alive this\nwhole time!\pOur family is reunited again, and we owe\nit all to you and Lyon!$"

SapphireVillage_House2_EventScript_Nina_Text_1:
# 11 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Nina: Hey, {COLOR GREEN}{PLAYER}{COLOR RED}!\nYou're looking great!\pCould you get Alex to come by more?\nAmber never shuts up about him.$"

SapphireVillage_House2_EventScript_Amber_Text_0:
# 20 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Amber: Hi, {COLOR GREEN}{PLAYER}{COLOR RED}!\nGood timing.\pI was just about to sit down and watch\nanime. Wanna join me?\pWait. Hold on…\pYour Pokémon smells kinda weird.\nWant me to groom it?$"

SapphireVillage_House2_EventScript_Amber_Text_1:
# 22 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Your Pokémon don't need any grooming?\pDid you at least want me to see how\nwell-bonded your Pokémon is with you?$"

SapphireVillage_House2_EventScript_Amber_Text_2:
# 24 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}That's cool.\nWe can just hang out instead!$"

SapphireVillage_House2_EventScript_Amber_Text_3:
# 30 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Amber: Your Pokémon bond with you the\nmore you give them love.\pCan I see your first Pokémon?$"

SapphireVillage_House2_EventScript_Amber_Text_4:
# 47 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Which one should I groom?$"

SapphireVillage_House2_EventScript_Amber_Text_5:
# 55 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Leave it to the master!$"

SapphireVillage_House2_EventScript_Amber_Text_6:
# 63 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR DARK_GRAY}{STR_VAR_1} looks dreamily content…\p{COLOR RED}Amber: There you go! All done.\nSee, doesn't it look nice?\pTeehee…\nNow it looks and smells better!$"

SapphireVillage_House2_EventScript_Amber_Text_7:
# 69 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Amber: Pokémon have feelings too!\nGive them the love they deserve!$"

SapphireVillage_House2_EventScript_Amber_Text_8:
# 94 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Amber: Hi, {COLOR GREEN}{PLAYER}{COLOR RED}!\nHave you seen Alex anywhere?\pWe were supposed to hang out before\nhe left…$"

Amber9_Text_0:
# 103 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Your Pokémon don't need any grooming?$"

Amber10_Text_0:
# 108 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Uh…\nThat's an Egg.$"

Amber2_Text_0:
# 116 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}…Um, this is awkward.\nYour Pokémon doesn't really trust you.$"

Amber3_Text_0:
# 121 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}I can tell your Pokémon isn't used to\npeople just yet.$"

Amber4_Text_0:
# 126 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Give it some time.\nYour Pokémon is just getting used to\lyou is all.$"

Amber5_Text_0:
# 131 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Its getting used to you.\nYou two must be hanging out more often.$"

Amber6_Text_0:
# 136 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Aw, it's pretty friendly.\nKeep it up!$"

Amber7_Text_0:
# 141 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}It looks very happy!\nI'm kind of jealous!$"

Amber8_Text_0:
# 146 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}You two have an unbreakable bond!\nIt loves you!$"

SapphireVillage_House2_EventScript_Tile_Text_0:
# 157 "data/maps/SapphireVillage_House2/scripts.pory"
	.string "{COLOR RED}Nina: HEY!\nIt's rude to sneak into a girl's room!$"
