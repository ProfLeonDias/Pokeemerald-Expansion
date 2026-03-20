Route1North_MapScripts::
# 2 "data/maps/Route1North/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route1N_MapScriptArnie
	.byte 0


Route1N_MapScriptArnie::
# 6 "data/maps/Route1North/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route1N_MapScriptArnie_1
	return

Route1N_MapScriptArnie_1:
# 7 "data/maps/Route1North/scripts.pory"
	removeobject LOCALID_ARNIE
	return


Route1N_EventScript_OldMan::
# 13 "data/maps/Route1North/scripts.pory"
	lock
# 14 "data/maps/Route1North/scripts.pory"
	faceplayer
# 15 "data/maps/Route1North/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route1N_EventScript_OldMan_1
# 20 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_OldMan_Text_1
# 21 "data/maps/Route1North/scripts.pory"
	release
	return

Route1N_EventScript_OldMan_1:
# 16 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_OldMan_Text_0
# 17 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Sign1::
# 26 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Sign1_Text_0
# 27 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Sign2::
# 31 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Sign2_Text_0
# 32 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Arnie::
# 36 "data/maps/Route1North/scripts.pory"
	lock
# 37 "data/maps/Route1North/scripts.pory"
	faceplayer
# 38 "data/maps/Route1North/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 3
# 39 "data/maps/Route1North/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1N_EventScript_Arnie_1
# 44 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Arnie_Text_1
# 45 "data/maps/Route1North/scripts.pory"
	release
	return

Route1N_EventScript_Arnie_1:
# 40 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Arnie_Text_0
# 41 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_ArnieEventA::
# 50 "data/maps/Route1North/scripts.pory"
	lockall
# 51 "data/maps/Route1North/scripts.pory"
	playse 21
# 52 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov1
# 53 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 54 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 55 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route1North/scripts.pory"
	delay 15
# 57 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 58 "data/maps/Route1North/scripts.pory"
	closemessage
# 59 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 60 "data/maps/Route1North/scripts.pory"
	delay 30
# 61 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 62 "data/maps/Route1North/scripts.pory"
	closemessage
# 63 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 64 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventB::
# 68 "data/maps/Route1North/scripts.pory"
	lockall
# 69 "data/maps/Route1North/scripts.pory"
	playse 21
# 70 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov3
# 71 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 72 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 73 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 74 "data/maps/Route1North/scripts.pory"
	delay 15
# 75 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 76 "data/maps/Route1North/scripts.pory"
	closemessage
# 77 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 78 "data/maps/Route1North/scripts.pory"
	delay 30
# 79 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 80 "data/maps/Route1North/scripts.pory"
	closemessage
# 81 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 82 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventC::
# 86 "data/maps/Route1North/scripts.pory"
	lockall
# 87 "data/maps/Route1North/scripts.pory"
	playse 21
# 88 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov4
# 89 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 91 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 92 "data/maps/Route1North/scripts.pory"
	delay 15
# 93 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 94 "data/maps/Route1North/scripts.pory"
	closemessage
# 95 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 96 "data/maps/Route1North/scripts.pory"
	delay 30
# 97 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 98 "data/maps/Route1North/scripts.pory"
	closemessage
# 99 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 100 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventD::
# 104 "data/maps/Route1North/scripts.pory"
	lockall
# 105 "data/maps/Route1North/scripts.pory"
	playse 21
# 106 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov5
# 107 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 108 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 109 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 110 "data/maps/Route1North/scripts.pory"
	delay 15
# 111 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 112 "data/maps/Route1North/scripts.pory"
	closemessage
# 113 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 114 "data/maps/Route1North/scripts.pory"
	delay 30
# 115 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 116 "data/maps/Route1North/scripts.pory"
	closemessage
# 117 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 118 "data/maps/Route1North/scripts.pory"
	releaseall
	return


# 125 "data/maps/Route1North/scripts.pory"
Rt1mov1:
# 126 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
	step_end

# 129 "data/maps/Route1North/scripts.pory"
Rt1mov2:
# 130 "data/maps/Route1North/scripts.pory"
	face_left
	step_end

# 133 "data/maps/Route1North/scripts.pory"
Rt1mov3:
# 134 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 135 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

# 138 "data/maps/Route1North/scripts.pory"
Rt1mov4:
# 139 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 140 "data/maps/Route1North/scripts.pory"
	walk_right
# 140 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

# 143 "data/maps/Route1North/scripts.pory"
Rt1mov5:
# 144 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 145 "data/maps/Route1North/scripts.pory"
	walk_right
# 145 "data/maps/Route1North/scripts.pory"
	walk_right
# 145 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

Route1N_EventScript_OldMan_Text_0:
# 16 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Old Man Arnold: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pMy grandson was inspired by you to\ntake on the Nexar League Challenge.\p…Which leaves me with most of the\nwork around here nowadays.$"

Route1N_EventScript_OldMan_Text_1:
# 20 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Old Man Arnold: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pIf you're heading down to the woods,\nyou should be careful.\pSome hooligans are up to no good!\nDon't say I didn't warn you!$"

Route1N_EventScript_Sign1_Text_0:
# 26 "data/maps/Route1North/scripts.pory"
	.string "Palmer's Family Farm\nWe have Berries for sale!$"

Route1N_EventScript_Sign2_Text_0:
# 31 "data/maps/Route1North/scripts.pory"
	.string "Route 1 - Sapphire Path\pJames Woods to the south.\nSapphire Village to the north.$"

Route1N_EventScript_Arnie_Text_0:
# 40 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}We got a lot of training to do for next\ntime. I'll make Meemaw proud!$"

Route1N_EventScript_Arnie_Text_1:
# 44 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Arnie: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pI'm trying to catch a Pokémon so I can\nleave the farm. Wish me luck!$"

Route1N_EventScript_ArnieEventA_Text_0:
# 57 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Arnie: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nI just caught my first Pokémon!\pI heard you chased off some goons\nin the woods not too long ago.\pYou must be plenty strong, so how's\nabout a battle?$"

Route1N_EventScript_ArnieEventA_Text_1:
# 61 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Wow! You really are strong!\nYou know, I saw Alex pass by.\pHe went into the woods, and he\nwas mighty happy at that.\lHe must've got a new Pokémon too!$"

ArnieDefeated::
# 121 "data/maps/Route1North/scripts.pory"
	.string "So strong!$"
