SapphireVillage_PlayerHouse2F_MapScripts::
	.byte 0


SapphireVillage_PlayerHouse2F_Alex1::
# 4 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	lock
# 5 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse2F_Alex1_Text_0
# 6 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 7 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 8 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 21
# 9 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Housemov1
# 10 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 11 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 12 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 13 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	addobject SVAlexHouse
# 14 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxy SVAlexHouse, 18, 2
# 15 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov2
# 16 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 17 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 18 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 19 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse2F_Alex1_Text_1
# 20 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 21 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 22 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 23 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	checkplayergender
# 24 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVLHouseScript1
# 25 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVLHouseScript2
	return


SapphireVillage_PlayerHouse2F_Alex2::
# 29 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	lock
# 30 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse2F_Alex1_Text_0
# 31 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 32 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 33 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 21
# 34 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Housemov1
# 35 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 36 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 37 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 38 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	addobject SVAlexHouse
# 39 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxy SVAlexHouse, 18, 2
# 40 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov2x
# 41 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 42 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 43 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 44 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse2F_Alex1_Text_1
# 45 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 46 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 47 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 48 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	checkplayergender
# 49 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVLHouseScript3
# 50 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVLHouseScript4
	return


SVLHouseScript1::
# 54 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 55 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_0
# 56 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 57 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 58 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 59 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 60 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_1
# 61 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 62 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 63 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 64 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 65 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_0
# 66 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 67 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 68 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 69 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 70 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_2
# 71 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 72 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 73 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 74 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov3
# 75 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 76 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 77 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removeobject SVAlexHouse
# 78 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxyperm SVAlexHouse, 24, 13
# 79 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_RG_PALLET, FALSE
# 80 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 90
# 81 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setvar VAR_GAME_INTRO, 4
# 82 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setflag FLAG_ALEX_CONVO
# 83 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	release
	return


SVLHouseScript2::
# 87 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 88 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript2_Text_0
# 89 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 90 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 91 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 92 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 93 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_1
# 94 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 95 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 96 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 97 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 98 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript2_Text_0
# 99 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 100 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 101 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 102 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 103 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_2
# 104 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 105 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 106 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 107 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov3
# 108 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 109 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 110 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removeobject SVAlexHouse
# 111 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxyperm SVAlexHouse, 24, 13
# 112 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_RG_PALLET, FALSE
# 113 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 90
# 114 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setvar VAR_GAME_INTRO, 4
# 115 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setflag FLAG_ALEX_CONVO
# 116 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	release
	return


SVLHouseScript3::
# 120 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 121 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_0
# 122 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 123 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 124 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 125 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 126 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_1
# 127 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 128 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 129 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 130 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 131 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_0
# 132 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 133 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 134 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 135 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 136 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_2
# 137 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 138 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 139 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 140 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov3x
# 141 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 142 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 143 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removeobject SVAlexHouse
# 144 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxyperm SVAlexHouse, 24, 13
# 145 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_RG_PALLET, FALSE
# 146 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 90
# 147 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setvar VAR_GAME_INTRO, 4
# 148 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setflag FLAG_ALEX_CONVO
# 149 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	release
	return


SVLHouseScript4::
# 153 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 154 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript2_Text_0
# 155 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 156 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 157 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 158 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 159 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript1_Text_1
# 160 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 161 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 162 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 163 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 164 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript2_Text_0
# 165 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 166 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 167 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 168 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 169 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	msgbox SVLHouseScript4_Text_0
# 170 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	closemessage
# 171 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removefieldmugshot
# 172 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 30
# 173 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	applymovement SVAlexHouse, Housemov3x
# 174 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	waitmovement 0
# 175 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playse 9
# 176 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	removeobject SVAlexHouse
# 177 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setobjectxyperm SVAlexHouse, 24, 13
# 178 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	playbgm MUS_RG_PALLET, FALSE
# 179 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay 90
# 180 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setvar VAR_GAME_INTRO, 4
# 181 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	setflag FLAG_ALEX_CONVO
# 182 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	release
	return


# 185 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
Housemov1:
# 186 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	emote_exclamation_mark
# 187 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_up
	step_end

# 190 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
Housemov2:
# 191 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_right
# 192 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay_4
# 193 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_down
	step_end

# 196 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
Housemov2x:
# 197 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_right
# 198 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	walk_right
# 199 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	delay_4
# 200 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_down
	step_end

# 203 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
Housemov3:
# 204 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_left
# 205 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	walk_left
	step_end

# 208 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
Housemov3x:
# 209 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	face_left
# 210 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	walk_left
# 210 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	walk_left
	step_end

SapphireVillage_PlayerHouse2F_Alex1_Text_0:
# 5 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR BLUE}Alex: I'M COMING UP!$"

SapphireVillage_PlayerHouse2F_Alex1_Text_1:
# 19 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR BLUE}Alex: Hey, we were supposed to be at\nProfessor Aspen's Lab today.\pDon't tell me you forgot!\nWait... Hold up.\pYou're looking pretty rough, bruh.\nHaving weird dreams again?$"

SVLHouseScript1_Text_0:
# 55 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: …$"

SVLHouseScript1_Text_1:
# 60 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR BLUE}Alex: Well, wake up sleepy-head!\pWe're supposed to get our starter\nPokémon today!\pEr… Well…\nI actually went a little earlier.\pI got so excited that I knocked over a\nmachine and broke it.\pThe Professor was so mad that he\nkicked me out.\pSo, could you do me a favor and pick out\nan extra Pokémon for me?$"

SVLHouseScript1_Text_2:
# 70 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR BLUE}Alex: Pretty please?\pAlright, fine.\nI'll get a Pokémon somehow.\pYou should hurry though, the Professor\nis already pissed!\pI'll catch up with ya later,{COLOR GREEN}{PLAYER}{COLOR BLUE}!$"

SVLHouseScript2_Text_0:
# 88 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: …$"

SVLHouseScript4_Text_0:
# 169 "data/maps/SapphireVillage_PlayerHouse2F/scripts.pory"
	.string "{COLOR BLUE}Alex: Pretty please?\pAlright, fine.\nI'll get a Pokémon somehow.\pYou should hurry though, the Professor\nis already pissed!\pI'll catch up with ya later, {COLOR GREEN}{PLAYER}{COLOR BLUE}!$"
