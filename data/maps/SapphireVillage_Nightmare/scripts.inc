SapphireVillage_Nightmare_MapScripts::
	.byte 0


SapphireVillage_Nightmare_Event1::
# 4 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	lock
# 5 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 6 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playse 21
# 7 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream1
# 8 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 9 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 50
# 10 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream2
# 11 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 12 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 50
# 13 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream3
# 14 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 15 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	checkplayergender
# 16 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Event1ContM
# 17 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Event1ContF
	return


Event1ContM::
# 21 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 22 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event1ContM_Text_0
# 23 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 24 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 25 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 1
# 26 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	release
	return


Event1ContF::
# 30 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 31 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event1ContF_Text_0
# 32 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 33 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 34 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 1
# 35 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	release
	return


SapphireVillage_Nightmare_Event2::
# 39 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	lock
# 40 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 41 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox SapphireVillage_Nightmare_Event2_Text_0
# 42 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 43 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 44 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	checkplayergender
# 45 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Event2ContM
# 46 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Event2ContF
	return


Event2ContM::
# 50 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 51 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event2ContM_Text_0
# 52 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 53 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 54 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 55 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 2
# 56 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	release
	return


Event2ContF::
# 60 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 61 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event2ContF_Text_0
# 62 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 63 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 64 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 65 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 2
# 66 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	release
	return


SapphireVillage_Nightmare_Event3::
# 70 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	lock
# 71 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 72 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special SpawnCameraObject
# 73 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam1
# 74 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 75 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 75
# 76 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_JIRACHI_SHADOW, 0
# 77 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox SapphireVillage_Nightmare_Event3_Text_0
# 78 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 79 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 80 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 45
# 81 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
# 82 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmoncry
# 83 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	fadescreen FADE_TO_BLACK
# 84 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removeobject DreamJirachi
# 85 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 86 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 87 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam2
# 88 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 89 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special RemoveCameraObject
# 90 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 75
# 91 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	checkplayergender
# 92 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Event3ContM
# 93 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Event3ContF
	return


Event3ContM::
# 97 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 98 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContM_Text_0
# 99 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 100 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 101 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 102 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream4
# 103 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 104 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 105 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream5
# 106 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 107 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 108 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream6
# 109 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 110 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 111 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream7
# 112 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 113 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 114 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 115 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContM_Text_1
# 116 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 117 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 118 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 119 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playse 21
# 120 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream8
# 121 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 122 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 123 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 124 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContM_Text_2
# 125 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 126 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 127 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 45
# 128 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playse 21
# 129 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream9
# 130 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 131 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 132 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 133 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContM_Text_3
# 134 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 135 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 136 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 137 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special SpawnCameraObject
# 138 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam3
# 139 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 140 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 45
# 141 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam4
# 142 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 143 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special RemoveCameraObject
# 144 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 145 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 146 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContM_Text_4
# 147 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 148 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 149 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 3
# 150 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	releaseall
	return


Event3ContF::
# 154 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 155 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContF_Text_0
# 156 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 157 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 158 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 159 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream4
# 160 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 161 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 162 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream5
# 163 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 164 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 165 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream6
# 166 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 167 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 168 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream7
# 169 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 170 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 171 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContF_Text_1
# 172 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 173 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 174 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 175 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playse 21
# 176 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream8
# 177 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 178 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 179 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 180 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContF_Text_2
# 181 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 182 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 183 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 45
# 184 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	playse 21
# 185 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movdream9
# 186 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 187 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 188 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 189 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContF_Text_3
# 190 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 191 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	removefieldmugshot
# 192 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 193 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special SpawnCameraObject
# 194 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam3
# 195 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 196 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 45
# 197 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	applymovement LOCALID_CAMERA, DreamCam4
# 198 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	waitmovement 0
# 199 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	special RemoveCameraObject
# 200 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 201 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 202 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	msgbox Event3ContF_Text_4
# 203 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	closemessage
# 204 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	delay 30
# 205 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	setvar VAR_GAME_INTRO, 3
# 206 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	releaseall
	return


# 209 "data/maps/SapphireVillage_Nightmare/scripts.pory"
DreamCam1:
# 210 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
# 210 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
# 210 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
	step_end

# 213 "data/maps/SapphireVillage_Nightmare/scripts.pory"
DreamCam2:
# 214 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
# 214 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
# 214 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
	step_end

# 217 "data/maps/SapphireVillage_Nightmare/scripts.pory"
DreamCam3:
# 218 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
# 218 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
# 218 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_up
	step_end

# 221 "data/maps/SapphireVillage_Nightmare/scripts.pory"
DreamCam4:
# 222 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
# 222 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
# 222 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	walk_down
	step_end

# 225 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream1:
# 226 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	emote_question_mark
# 227 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_right
	step_end

# 230 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream2:
# 231 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_left
	step_end

# 234 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream3:
# 235 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_up
	step_end

# 238 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream4:
# 239 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_left
	step_end

# 242 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream5:
# 243 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_right
	step_end

# 246 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream6:
# 247 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_down
	step_end

# 250 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream7:
# 251 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_up
	step_end

# 254 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream8:
# 255 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	emote_exclamation_mark
	step_end

# 258 "data/maps/SapphireVillage_Nightmare/scripts.pory"
movdream9:
# 259 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	emote_x
# 260 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	jump_in_place_down
# 261 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	face_up
	step_end

Event1ContM_Text_0:
# 22 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: Woah…\nWhere am I…?$"

Event1ContF_Text_0:
# 31 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: Woah…\nWhere am I…?$"

SapphireVillage_Nightmare_Event2_Text_0:
# 41 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "???: {COLOR GREEN}{PLAYER}{COLOR DARK_GRAY}…$"

Event2ContM_Text_0:
# 51 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: Hello?\nIs someone there?$"

Event2ContF_Text_0:
# 61 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: I-Is someone there?\nHello?$"

SapphireVillage_Nightmare_Event3_Text_0:
# 77 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "???: {COLOR GREEN}{PLAYER}{COLOR DARK_GRAY}, I need your…\nH…e…l…p…$"

Event3ContM_Text_0:
# 98 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: What the heck?\nWhat was that?$"

Event3ContM_Text_1:
# 115 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: This is just a weird dream…\nYeah! That's it!\nJust a dumb dream!$"

Event3ContM_Text_2:
# 124 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: I almost forgot!\pProfessor Aspen wanted me to come over\nto his Lab tomorrow!\pI need to wake up, but how…?$"

Event3ContM_Text_3:
# 133 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR BLUE}YEOWCH!\pOkay, pinching myself didn't work…$"

Event3ContM_Text_4:
# 146 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR BLUE}Maybe if I go through there, I can get\nout of this crazy dream…$"

Event3ContF_Text_0:
# 155 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: W-What was that?\nThis is too weird!$"

Event3ContF_Text_1:
# 171 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: This is just a weird dream…\nYeah! That's it!\nJust a dumb dream!$"

Event3ContF_Text_2:
# 180 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: I almost forgot!\pProfessor Aspen wanted me to come over\nto his Lab tomorrow!\pI need to wake up, but how…?$"

Event3ContF_Text_3:
# 189 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR RED}YEOWCH!\pOkay, pinching myself didn't work…$"

Event3ContF_Text_4:
# 202 "data/maps/SapphireVillage_Nightmare/scripts.pory"
	.string "{COLOR RED}Maybe if I go through there, I can get\nout of this crazy dream…$"
