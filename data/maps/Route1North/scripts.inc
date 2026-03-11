Route1North_MapScripts::
	.byte 0


Route1N_EventScript_OldMan::
# 4 "data/maps/Route1North/scripts.pory"
	lock
# 5 "data/maps/Route1North/scripts.pory"
	faceplayer
# 6 "data/maps/Route1North/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route1N_EventScript_OldMan_1
# 11 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_OldMan_Text_1
# 12 "data/maps/Route1North/scripts.pory"
	release
	return

Route1N_EventScript_OldMan_1:
# 7 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_OldMan_Text_0
# 8 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Sign1::
# 17 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Sign1_Text_0
# 18 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Sign2::
# 22 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Sign2_Text_0
# 23 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_Arnie::
# 27 "data/maps/Route1North/scripts.pory"
	lock
# 28 "data/maps/Route1North/scripts.pory"
	faceplayer
# 29 "data/maps/Route1North/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 3
# 30 "data/maps/Route1North/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1N_EventScript_Arnie_1
# 35 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Arnie_Text_1
# 36 "data/maps/Route1North/scripts.pory"
	release
	return

Route1N_EventScript_Arnie_1:
# 31 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_Arnie_Text_0
# 32 "data/maps/Route1North/scripts.pory"
	release
	return


Route1N_EventScript_ArnieEventA::
# 41 "data/maps/Route1North/scripts.pory"
	lockall
# 42 "data/maps/Route1North/scripts.pory"
	playse 21
# 43 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov1
# 44 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 45 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 46 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 47 "data/maps/Route1North/scripts.pory"
	delay 15
# 48 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 49 "data/maps/Route1North/scripts.pory"
	closemessage
# 50 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 51 "data/maps/Route1North/scripts.pory"
	delay 30
# 52 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 53 "data/maps/Route1North/scripts.pory"
	closemessage
# 54 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 55 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventB::
# 59 "data/maps/Route1North/scripts.pory"
	lockall
# 60 "data/maps/Route1North/scripts.pory"
	playse 21
# 61 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov3
# 62 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 63 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 64 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 65 "data/maps/Route1North/scripts.pory"
	delay 15
# 66 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 67 "data/maps/Route1North/scripts.pory"
	closemessage
# 68 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 69 "data/maps/Route1North/scripts.pory"
	delay 30
# 70 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 71 "data/maps/Route1North/scripts.pory"
	closemessage
# 72 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 73 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventC::
# 77 "data/maps/Route1North/scripts.pory"
	lockall
# 78 "data/maps/Route1North/scripts.pory"
	playse 21
# 79 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov4
# 80 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 81 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 82 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 83 "data/maps/Route1North/scripts.pory"
	delay 15
# 84 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 85 "data/maps/Route1North/scripts.pory"
	closemessage
# 86 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 87 "data/maps/Route1North/scripts.pory"
	delay 30
# 88 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 89 "data/maps/Route1North/scripts.pory"
	closemessage
# 90 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 91 "data/maps/Route1North/scripts.pory"
	releaseall
	return


Route1N_EventScript_ArnieEventD::
# 95 "data/maps/Route1North/scripts.pory"
	lockall
# 96 "data/maps/Route1North/scripts.pory"
	playse 21
# 97 "data/maps/Route1North/scripts.pory"
	applymovement LOCALID_ARNIE, Rt1mov5
# 98 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route1North/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Rt1mov2
# 100 "data/maps/Route1North/scripts.pory"
	waitmovement 0
# 101 "data/maps/Route1North/scripts.pory"
	delay 15
# 102 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_0
# 103 "data/maps/Route1North/scripts.pory"
	closemessage
# 104 "data/maps/Route1North/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ArnieDefeated
# 105 "data/maps/Route1North/scripts.pory"
	delay 30
# 106 "data/maps/Route1North/scripts.pory"
	msgbox Route1N_EventScript_ArnieEventA_Text_1
# 107 "data/maps/Route1North/scripts.pory"
	closemessage
# 108 "data/maps/Route1North/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 3
# 109 "data/maps/Route1North/scripts.pory"
	releaseall
	return


# 116 "data/maps/Route1North/scripts.pory"
Rt1mov1:
# 117 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
	step_end

# 120 "data/maps/Route1North/scripts.pory"
Rt1mov2:
# 121 "data/maps/Route1North/scripts.pory"
	face_left
	step_end

# 124 "data/maps/Route1North/scripts.pory"
Rt1mov3:
# 125 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 126 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

# 129 "data/maps/Route1North/scripts.pory"
Rt1mov4:
# 130 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 131 "data/maps/Route1North/scripts.pory"
	walk_right
# 131 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

# 134 "data/maps/Route1North/scripts.pory"
Rt1mov5:
# 135 "data/maps/Route1North/scripts.pory"
	emote_exclamation_mark
# 136 "data/maps/Route1North/scripts.pory"
	walk_right
# 136 "data/maps/Route1North/scripts.pory"
	walk_right
# 136 "data/maps/Route1North/scripts.pory"
	walk_right
	step_end

Route1N_EventScript_OldMan_Text_0:
# 7 "data/maps/Route1North/scripts.pory"
	.string "Old Man Arnold: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pMy grandson was inspired by you to\ntake on the Nexar League Challenge.\p…Which leaves me with most of the\nwork around here nowadays.$"

Route1N_EventScript_OldMan_Text_1:
# 11 "data/maps/Route1North/scripts.pory"
	.string "Old Man Arnold: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pIf you're heading down to the woods, you\nshould be careful.\pSome hooligans are up to no good!\nDon't say I didn't warn you!$"

Route1N_EventScript_Sign1_Text_0:
# 17 "data/maps/Route1North/scripts.pory"
	.string "Palmer's Family Farm\nWe have Berries for sale!$"

Route1N_EventScript_Sign2_Text_0:
# 22 "data/maps/Route1North/scripts.pory"
	.string "Route 1 - Sapphire Path\pJames Woods to the south.\nSapphire Village to the north.$"

Route1N_EventScript_Arnie_Text_0:
# 31 "data/maps/Route1North/scripts.pory"
	.string "We got a lot of training to do for next\ntime. I'll make Meemaw proud!$"

Route1N_EventScript_Arnie_Text_1:
# 35 "data/maps/Route1North/scripts.pory"
	.string "Arnie: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pI'm trying to catch a Pokémon so I can\nleave the farm. Wish me luck!$"

Route1N_EventScript_ArnieEventA_Text_0:
# 48 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Arnie: Howdy, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nI just caught my first Pokémon!\pI heard you chased off some goons\nin the woods not too long ago.\pYou must be plenty strong, so how's\nabout a battle?$"

Route1N_EventScript_ArnieEventA_Text_1:
# 52 "data/maps/Route1North/scripts.pory"
	.string "{COLOR BLUE}Wow! You really are strong!\nYou know, I saw Alex pass by.\pHe went into the woods, and he\nwas mighty happy at that.\lHe must've got a new Pokémon too!$"

ArnieDefeated::
# 112 "data/maps/Route1North/scripts.pory"
	.string "So strong!$"
