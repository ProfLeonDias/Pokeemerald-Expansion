Route29_MapScripts::
	.byte 0


Route29_EventScript_Sign1::
# 4 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Sign1_Text_0
# 5 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Sign2::
# 9 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Sign2_Text_0
# 10 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Woman1::
# 14 "data/maps/Route29/scripts.pory"
	lock
# 15 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Woman1_Text_0
# 16 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_OldWoman::
# 20 "data/maps/Route29/scripts.pory"
	lock
# 21 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_OldWoman_Text_0
# 22 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Tuber::
# 26 "data/maps/Route29/scripts.pory"
	lock
# 27 "data/maps/Route29/scripts.pory"
	faceplayer
# 28 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Tuber_Text_0
# 29 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Sailor1::
# 33 "data/maps/Route29/scripts.pory"
	lock
# 34 "data/maps/Route29/scripts.pory"
	faceplayer
# 35 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Sailor1_Text_0
# 36 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_DragonTamer::
# 40 "data/maps/Route29/scripts.pory"
	lock
# 41 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_DragonTamer_Text_0
# 42 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Maniac::
# 46 "data/maps/Route29/scripts.pory"
	lock
# 47 "data/maps/Route29/scripts.pory"
	faceplayer
# 48 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Maniac_Text_0
# 49 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Captain::
# 53 "data/maps/Route29/scripts.pory"
	lock
# 54 "data/maps/Route29/scripts.pory"
	faceplayer
# 55 "data/maps/Route29/scripts.pory"
	compare VAR_ASPEN_EVENTS, 5
	goto_if_eq Route29_EventScript_Captain_1
# 59 "data/maps/Route29/scripts.pory"
	compare VAR_POKEMART_MACK_EVENT, 1
	goto_if_eq Route29_EventScript_Captain_2
# 70 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Captain_Text_3
# 71 "data/maps/Route29/scripts.pory"
	release
	return

Route29_EventScript_Captain_1:
# 56 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Captain_Text_0
# 57 "data/maps/Route29/scripts.pory"
	release
	return

Route29_EventScript_Captain_2:
# 60 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Captain_Text_1
# 61 "data/maps/Route29/scripts.pory"
	closemessage
# 62 "data/maps/Route29/scripts.pory"
	giveitem ITEM_OAKS_PARCEL
# 63 "data/maps/Route29/scripts.pory"
	delay 30
# 64 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Captain_Text_2
# 65 "data/maps/Route29/scripts.pory"
	closemessage
# 66 "data/maps/Route29/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 5
# 67 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_ManiacBlockA::
# 76 "data/maps/Route29/scripts.pory"
	lockall
# 77 "data/maps/Route29/scripts.pory"
	playse 21
# 78 "data/maps/Route29/scripts.pory"
	applymovement LOCALID_MANIAC, Rt29mov1
# 79 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 80 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_ManiacBlockA_Text_0
# 81 "data/maps/Route29/scripts.pory"
	closemessage
# 82 "data/maps/Route29/scripts.pory"
	delay 15
# 83 "data/maps/Route29/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt29mov2
# 84 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route29/scripts.pory"
	applymovement LOCALID_MANIAC, Rt29mov3
# 86 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route29/scripts.pory"
	releaseall
	return


Route29_EventScript_ManiacBlockB::
# 91 "data/maps/Route29/scripts.pory"
	lockall
# 92 "data/maps/Route29/scripts.pory"
	playse 21
# 93 "data/maps/Route29/scripts.pory"
	applymovement LOCALID_MANIAC, Rt29mov1x
# 94 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_ManiacBlockA_Text_0
# 96 "data/maps/Route29/scripts.pory"
	closemessage
# 97 "data/maps/Route29/scripts.pory"
	delay 15
# 98 "data/maps/Route29/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt29mov2
# 99 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 100 "data/maps/Route29/scripts.pory"
	applymovement LOCALID_MANIAC, Rt29mov3x
# 101 "data/maps/Route29/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route29/scripts.pory"
	releaseall
	return


# 105 "data/maps/Route29/scripts.pory"
Rt29mov1:
# 106 "data/maps/Route29/scripts.pory"
	emote_exclamation_mark
# 107 "data/maps/Route29/scripts.pory"
	face_left
# 108 "data/maps/Route29/scripts.pory"
	walk_left
	step_end

# 111 "data/maps/Route29/scripts.pory"
Rt29mov1x:
# 112 "data/maps/Route29/scripts.pory"
	emote_exclamation_mark
# 113 "data/maps/Route29/scripts.pory"
	walk_down
# 114 "data/maps/Route29/scripts.pory"
	face_left
# 115 "data/maps/Route29/scripts.pory"
	walk_left
	step_end

# 118 "data/maps/Route29/scripts.pory"
Rt29mov2:
# 119 "data/maps/Route29/scripts.pory"
	face_left
# 120 "data/maps/Route29/scripts.pory"
	walk_left
	step_end

# 123 "data/maps/Route29/scripts.pory"
Rt29mov3:
# 124 "data/maps/Route29/scripts.pory"
	walk_right
# 125 "data/maps/Route29/scripts.pory"
	face_down
	step_end

# 128 "data/maps/Route29/scripts.pory"
Rt29mov3x:
# 129 "data/maps/Route29/scripts.pory"
	walk_right
# 130 "data/maps/Route29/scripts.pory"
	walk_up
# 131 "data/maps/Route29/scripts.pory"
	face_down
	step_end

Route29_EventScript_Shop1::
# 135 "data/maps/Route29/scripts.pory"
	lock
# 136 "data/maps/Route29/scripts.pory"
	faceplayer
# 137 "data/maps/Route29/scripts.pory"
	message Route29_EventScript_Shop1_Text_0
# 138 "data/maps/Route29/scripts.pory"
	waitmessage
# 139 "data/maps/Route29/scripts.pory"
	pokemart MartItems1
# 140 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Shop1_Text_1
# 141 "data/maps/Route29/scripts.pory"
	release
	return


Route29_EventScript_Shop2::
# 145 "data/maps/Route29/scripts.pory"
	lock
# 146 "data/maps/Route29/scripts.pory"
	faceplayer
# 147 "data/maps/Route29/scripts.pory"
	message Route29_EventScript_Shop2_Text_0
# 148 "data/maps/Route29/scripts.pory"
	waitmessage
# 149 "data/maps/Route29/scripts.pory"
	pokemart MartItems2
# 150 "data/maps/Route29/scripts.pory"
	msgbox Route29_EventScript_Shop1_Text_1
# 151 "data/maps/Route29/scripts.pory"
	release
	return


	.align 2
# 154 "data/maps/Route29/scripts.pory"
MartItems1:
# 155 "data/maps/Route29/scripts.pory"
	.2byte ITEM_BLACK_APRICORN
# 156 "data/maps/Route29/scripts.pory"
	.2byte ITEM_BLUE_APRICORN
# 157 "data/maps/Route29/scripts.pory"
	.2byte ITEM_GREEN_APRICORN
# 158 "data/maps/Route29/scripts.pory"
	.2byte ITEM_PINK_APRICORN
# 159 "data/maps/Route29/scripts.pory"
	.2byte ITEM_RED_APRICORN
# 160 "data/maps/Route29/scripts.pory"
	.2byte ITEM_WHITE_APRICORN
# 161 "data/maps/Route29/scripts.pory"
	.2byte ITEM_YELLOW_APRICORN
	.2byte ITEM_NONE

	.align 2
# 164 "data/maps/Route29/scripts.pory"
MartItems2:
# 165 "data/maps/Route29/scripts.pory"
	.2byte ITEM_FULL_INCENSE
# 166 "data/maps/Route29/scripts.pory"
	.2byte ITEM_PURE_INCENSE
# 167 "data/maps/Route29/scripts.pory"
	.2byte ITEM_ROCK_INCENSE
# 168 "data/maps/Route29/scripts.pory"
	.2byte ITEM_ROSE_INCENSE
# 169 "data/maps/Route29/scripts.pory"
	.2byte ITEM_SEA_INCENSE
	.2byte ITEM_NONE

Route29_EventScript_Kindler::
# 173 "data/maps/Route29/scripts.pory"
	trainerbattle_single TRAINER_02, Rt29KindlerIntro, Rt29KindlerDefeated
# 174 "data/maps/Route29/scripts.pory"
	msgbox Rt29KindlerPostBattle, MSGBOX_AUTOCLOSE
# 175 "data/maps/Route29/scripts.pory"
	waitmessage
	return


Route29_EventScript_SailorBattle::
# 179 "data/maps/Route29/scripts.pory"
	trainerbattle_single TRAINER_03, Rt29SailorIntro, Rt29SailorDefeated
# 180 "data/maps/Route29/scripts.pory"
	msgbox Rt29SailorPostBattle, MSGBOX_AUTOCLOSE
# 181 "data/maps/Route29/scripts.pory"
	waitmessage
	return


Route29_EventScript_SwimmerM::
# 185 "data/maps/Route29/scripts.pory"
	trainerbattle_single TRAINER_200, Rt29SwimmerMIntro, Rt29SwimmerMDefeated
# 186 "data/maps/Route29/scripts.pory"
	msgbox Rt29SwimmerMPostBattle, MSGBOX_AUTOCLOSE
# 187 "data/maps/Route29/scripts.pory"
	waitmessage
	return


Route29_EventScript_SwimmerF::
# 191 "data/maps/Route29/scripts.pory"
	trainerbattle_single TRAINER_200, Rt29SwimmerFIntro, Rt29SwimmerFDefeated
# 192 "data/maps/Route29/scripts.pory"
	msgbox Rt29SwimmerFPostBattle, MSGBOX_AUTOCLOSE
# 193 "data/maps/Route29/scripts.pory"
	waitmessage
	return


Route29_EventScript_Triathlete::
# 197 "data/maps/Route29/scripts.pory"
	trainerbattle_single TRAINER_200, Rt29TriathleteIntro, Rt29TriathleteDefeated
# 198 "data/maps/Route29/scripts.pory"
	msgbox Rt29TriathletePostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route29/scripts.pory"
	waitmessage
	return


Route29_EventScript_Sign1_Text_0:
# 4 "data/maps/Route29/scripts.pory"
	.string "Route 29- Jasper Beach\pJasper Town to the west.\nLumina Island to the east.$"

Route29_EventScript_Sign2_Text_0:
# 9 "data/maps/Route29/scripts.pory"
	.string "Jasper Market\nGoods from far off regions!$"

Route29_EventScript_Woman1_Text_0:
# 15 "data/maps/Route29/scripts.pory"
	.string "Ah, how relaxing…$"

Route29_EventScript_OldWoman_Text_0:
# 21 "data/maps/Route29/scripts.pory"
	.string "Don't worry about me, dearie.\nI'm keeping these old bones warm.$"

Route29_EventScript_Tuber_Text_0:
# 28 "data/maps/Route29/scripts.pory"
	.string "I wanna go swimming!$"

Route29_EventScript_Sailor1_Text_0:
# 35 "data/maps/Route29/scripts.pory"
	.string "The harbor is just up ahead.$"

Route29_EventScript_DragonTamer_Text_0:
# 41 "data/maps/Route29/scripts.pory"
	.string "No one can ever know what I've just\ndone…$"

Route29_EventScript_Maniac_Text_0:
# 48 "data/maps/Route29/scripts.pory"
	.string "I dropped something in the sand.\nBut then, I found it!$"

Route29_EventScript_Captain_Text_0:
# 56 "data/maps/Route29/scripts.pory"
	.string "I don't know you, kid. Beat it.$"

Route29_EventScript_Captain_Text_1:
# 60 "data/maps/Route29/scripts.pory"
	.string "Captain: I got a message from Mack.\nYou the kid that Allen sent?\p…\nAlright, I got the goods right here.$"

Route29_EventScript_Captain_Text_2:
# 64 "data/maps/Route29/scripts.pory"
	.string "If the cops ask, I don't know you.\nKeep that thing in your bag, got it?$"

Route29_EventScript_Captain_Text_3:
# 70 "data/maps/Route29/scripts.pory"
	.string "Yeah kid, I run this harbor. So what?$"

Route29_EventScript_ManiacBlockA_Text_0:
# 80 "data/maps/Route29/scripts.pory"
	.string "Wait!\pSorry, but I dropped something in the\nsand. Can you come back later? $"

Route29_EventScript_Shop1_Text_0:
# 137 "data/maps/Route29/scripts.pory"
	.string "Ahoy!\nI've got Apricorns for sale!$"

Route29_EventScript_Shop1_Text_1:
# 140 "data/maps/Route29/scripts.pory"
	.string "Come back any time.$"

Route29_EventScript_Shop2_Text_0:
# 147 "data/maps/Route29/scripts.pory"
	.string "Ahoy!\nI've got Incense for sale!$"

Rt29TriathleteIntro::
# 202 "data/maps/Route29/scripts.pory"
	.string "What do you want?\nI'm training my endurance.$"

Rt29TriathleteDefeated::
# 206 "data/maps/Route29/scripts.pory"
	.string "Sheesh…$"

Rt29TriathletePostBattle::
# 210 "data/maps/Route29/scripts.pory"
	.string "Can you leave?\nI need to get back to my regimen.$"

Rt29SwimmerFIntro::
# 214 "data/maps/Route29/scripts.pory"
	.string "Isn't this just relaxing?$"

Rt29SwimmerFDefeated::
# 218 "data/maps/Route29/scripts.pory"
	.string "Good job!$"

Rt29SwimmerFPostBattle::
# 222 "data/maps/Route29/scripts.pory"
	.string "I can just drift here forever.$"

Rt29SwimmerMIntro::
# 226 "data/maps/Route29/scripts.pory"
	.string "SPLASH!\nLet's get to it!$"

Rt29SwimmerMDefeated::
# 230 "data/maps/Route29/scripts.pory"
	.string "Wicked…$"

Rt29SwimmerMPostBattle::
# 234 "data/maps/Route29/scripts.pory"
	.string "I wake up every morning to go for a swim\neach and every day.$"

Rt29SailorIntro::
# 238 "data/maps/Route29/scripts.pory"
	.string "Hic…\nWhat are you lookin' at?$"

Rt29SailorDefeated::
# 242 "data/maps/Route29/scripts.pory"
	.string "Blegh…$"

Rt29SailorPostBattle::
# 246 "data/maps/Route29/scripts.pory"
	.string "Mind yer own business, kid!\nHic…$"

Rt29KindlerIntro::
# 250 "data/maps/Route29/scripts.pory"
	.string "Do you know about fire safety?$"

Rt29KindlerDefeated::
# 254 "data/maps/Route29/scripts.pory"
	.string "Doused!$"

Rt29KindlerPostBattle::
# 258 "data/maps/Route29/scripts.pory"
	.string "This is a great spot to start a fire pit!$"
