JasperVillage_MapScripts::
# 2 "data/maps/JasperVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionJasperTown
	.byte 0


OnTransitionJasperTown::
# 6 "data/maps/JasperVillage/scripts.pory"
	setflag FLAG_VISITED_OLDALE_TOWN
	return


JasperTown_EventScript_Mailbox::
# 10 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Mailbox_Text_0
# 11 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_Sign1::
# 15 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Sign1_Text_0
# 16 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_Sign2::
# 20 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Sign2_Text_0
# 21 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_Girl::
# 25 "data/maps/JasperVillage/scripts.pory"
	lock
# 26 "data/maps/JasperVillage/scripts.pory"
	faceplayer
# 27 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Girl_Text_0
# 28 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_OldLady::
# 32 "data/maps/JasperVillage/scripts.pory"
	lock
# 33 "data/maps/JasperVillage/scripts.pory"
	faceplayer
# 34 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldLady_Text_0
# 35 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_Sailor1::
# 39 "data/maps/JasperVillage/scripts.pory"
	lock
# 40 "data/maps/JasperVillage/scripts.pory"
	faceplayer
# 41 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Sailor1_Text_0
# 42 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_Sailor2::
# 46 "data/maps/JasperVillage/scripts.pory"
	lock
# 47 "data/maps/JasperVillage/scripts.pory"
	faceplayer
# 48 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_Sailor2_Text_0
# 49 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_OldMan::
# 53 "data/maps/JasperVillage/scripts.pory"
	lock
# 54 "data/maps/JasperVillage/scripts.pory"
	faceplayer
# 55 "data/maps/JasperVillage/scripts.pory"
	compare VAR_JASPER_TOWN_STATE, 1
	goto_if_eq JasperTown_EventScript_OldMan_1
# 60 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_1
# 61 "data/maps/JasperVillage/scripts.pory"
	release
	return

JasperTown_EventScript_OldMan_1:
# 56 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_0
# 57 "data/maps/JasperVillage/scripts.pory"
	release
	return


JasperTown_EventScript_OldManEventA::
# 66 "data/maps/JasperVillage/scripts.pory"
	lockall
# 67 "data/maps/JasperVillage/scripts.pory"
	playse 21
# 68 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov1
# 69 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 70 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov2
# 71 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 72 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_1
# 73 "data/maps/JasperVillage/scripts.pory"
	closemessage
# 74 "data/maps/JasperVillage/scripts.pory"
	delay 15
# 75 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov3
# 76 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 77 "data/maps/JasperVillage/scripts.pory"
	releaseall
	return


JasperTown_EventScript_OldManEventB::
# 81 "data/maps/JasperVillage/scripts.pory"
	lockall
# 82 "data/maps/JasperVillage/scripts.pory"
	playse 21
# 83 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov1x
# 84 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 85 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov2
# 86 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 87 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_1
# 88 "data/maps/JasperVillage/scripts.pory"
	closemessage
# 89 "data/maps/JasperVillage/scripts.pory"
	delay 15
# 90 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov3
# 91 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 92 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov4
# 93 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 94 "data/maps/JasperVillage/scripts.pory"
	releaseall
	return


JasperTown_EventScript_OldManEventC::
# 98 "data/maps/JasperVillage/scripts.pory"
	lockall
# 99 "data/maps/JasperVillage/scripts.pory"
	playse 21
# 100 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov1xx
# 101 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 102 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov2
# 103 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 104 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_1
# 105 "data/maps/JasperVillage/scripts.pory"
	closemessage
# 106 "data/maps/JasperVillage/scripts.pory"
	delay 15
# 107 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov3
# 108 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 109 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov4x
# 110 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 111 "data/maps/JasperVillage/scripts.pory"
	releaseall
	return


JasperTown_EventScript_OldManEventD::
# 115 "data/maps/JasperVillage/scripts.pory"
	lockall
# 116 "data/maps/JasperVillage/scripts.pory"
	playse 21
# 117 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov1xxx
# 118 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 119 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov2
# 120 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 121 "data/maps/JasperVillage/scripts.pory"
	msgbox JasperTown_EventScript_OldMan_Text_1
# 122 "data/maps/JasperVillage/scripts.pory"
	closemessage
# 123 "data/maps/JasperVillage/scripts.pory"
	delay 15
# 124 "data/maps/JasperVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Jaspermov3
# 125 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 126 "data/maps/JasperVillage/scripts.pory"
	applymovement LOCALID_OLDMAN, Jaspermov4xx
# 127 "data/maps/JasperVillage/scripts.pory"
	waitmovement 0
# 128 "data/maps/JasperVillage/scripts.pory"
	releaseall
	return


# 131 "data/maps/JasperVillage/scripts.pory"
Jaspermov1:
# 132 "data/maps/JasperVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 135 "data/maps/JasperVillage/scripts.pory"
Jaspermov1x:
# 136 "data/maps/JasperVillage/scripts.pory"
	emote_exclamation_mark
# 137 "data/maps/JasperVillage/scripts.pory"
	walk_down
	step_end

# 140 "data/maps/JasperVillage/scripts.pory"
Jaspermov1xx:
# 141 "data/maps/JasperVillage/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/JasperVillage/scripts.pory"
	walk_down
# 142 "data/maps/JasperVillage/scripts.pory"
	walk_down
	step_end

# 145 "data/maps/JasperVillage/scripts.pory"
Jaspermov1xxx:
# 146 "data/maps/JasperVillage/scripts.pory"
	emote_exclamation_mark
# 147 "data/maps/JasperVillage/scripts.pory"
	walk_down
# 147 "data/maps/JasperVillage/scripts.pory"
	walk_down
# 147 "data/maps/JasperVillage/scripts.pory"
	walk_down
	step_end

# 150 "data/maps/JasperVillage/scripts.pory"
Jaspermov2:
# 151 "data/maps/JasperVillage/scripts.pory"
	face_up
	step_end

# 154 "data/maps/JasperVillage/scripts.pory"
Jaspermov3:
# 155 "data/maps/JasperVillage/scripts.pory"
	walk_right
	step_end

# 158 "data/maps/JasperVillage/scripts.pory"
Jaspermov4:
# 159 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 160 "data/maps/JasperVillage/scripts.pory"
	face_down
	step_end

# 163 "data/maps/JasperVillage/scripts.pory"
Jaspermov4x:
# 164 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 164 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 165 "data/maps/JasperVillage/scripts.pory"
	face_down
	step_end

# 168 "data/maps/JasperVillage/scripts.pory"
Jaspermov4xx:
# 169 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 169 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 169 "data/maps/JasperVillage/scripts.pory"
	walk_up
# 170 "data/maps/JasperVillage/scripts.pory"
	face_down
	step_end

JasperTown_EventScript_Mailbox_Text_0:
# 10 "data/maps/JasperVillage/scripts.pory"
	.string "????'s House\nThe name is scraped off…$"

JasperTown_EventScript_Sign1_Text_0:
# 15 "data/maps/JasperVillage/scripts.pory"
	.string "Jasper Beach Ahead$"

JasperTown_EventScript_Sign2_Text_0:
# 20 "data/maps/JasperVillage/scripts.pory"
	.string "Jasper Town\nThe Gateway to the sea.$"

JasperTown_EventScript_Girl_Text_0:
# 27 "data/maps/JasperVillage/scripts.pory"
	.string "I tan at the beach every day!\nHow do I look?$"

JasperTown_EventScript_OldLady_Text_0:
# 34 "data/maps/JasperVillage/scripts.pory"
	.string "A young man lives across this pond.\pHe always seems to be searching for\nsomeone, but I don't know who or why.$"

JasperTown_EventScript_Sailor1_Text_0:
# 41 "data/maps/JasperVillage/scripts.pory"
	.string "I must head out to sea again, but every\ntime I go, I miss my wife.$"

JasperTown_EventScript_Sailor2_Text_0:
# 48 "data/maps/JasperVillage/scripts.pory"
	.string "At the docks, you could buy some neat\nstuff from other regions.\pBut I heard the government will start\ncracking down imports soon.$"

JasperTown_EventScript_OldMan_Text_0:
# 56 "data/maps/JasperVillage/scripts.pory"
	.string "Hello, young sprout.\nYou have a good day now, y'hear?$"

JasperTown_EventScript_OldMan_Text_1:
# 60 "data/maps/JasperVillage/scripts.pory"
	.string "Hold on there, young sprout!\pYou look like you need to be somewhere\nelse. Why not take care of that first?$"
