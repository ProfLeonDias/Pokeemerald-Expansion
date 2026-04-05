SapphireVillage_Lab_MapScripts::
# 2 "data/maps/SapphireVillage_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OnLoadSVLab
# 3 "data/maps/SapphireVillage_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, OnFrameSVLab
# 4 "data/maps/SapphireVillage_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionSVLab
# 5 "data/maps/SapphireVillage_Lab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, OnWarpTableSVLab
	.byte 0


OnFrameSVLab::
# 9 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 10 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab5
# 11 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 12 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabAspen
# 13 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabAspen, 6, 3
# 14 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabAspen, MOVEMENT_TYPE_FACE_DOWN
# 15 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_HIDE_LAB_ASPEN
# 16 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movlabmoveup
# 17 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 18 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 19 "data/maps/SapphireVillage_Lab/scripts.pory"
	savebgm MUS_DUMMY
# 20 "data/maps/SapphireVillage_Lab/scripts.pory"
	fadedefaultbgm
# 21 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 22 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVLMapScriptX
# 23 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVLMapScriptY
	return


SVLMapScriptX::
# 28 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 29 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_0
# 30 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 31 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 32 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 33 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 34 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_1
# 35 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 36 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 37 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 60
# 38 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 39 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_2
# 40 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 41 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 42 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 43 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab7
# 44 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 45 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 46 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 47 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_3
# 48 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 49 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 50 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 51 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 52 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 53 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 54 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 55 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 56 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_1
# 57 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 58 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 59 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 60 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 61 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_4
# 62 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 63 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 64 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 65 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab9
# 66 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 67 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 68 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 69 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_5
# 70 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 71 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 72 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 73 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 74 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 75 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 76 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 77 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 78 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_1
# 79 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 80 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 81 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 82 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 83 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_6
# 84 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 85 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 86 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 87 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab9
# 88 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 89 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 90 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 91 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_7
# 92 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 93 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 94 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 95 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 96 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 97 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 98 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 99 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 100 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_1
# 101 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 102 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 103 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 104 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab10
# 105 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 106 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 107 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 108 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_8
# 109 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 110 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 111 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 112 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan3
# 113 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 114 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 115 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab11
# 116 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 117 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 118 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_9
# 119 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 120 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 1
# 121 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_10
# 122 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 123 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 124 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_11
# 125 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 126 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 127 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 128 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_12
# 129 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 130 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 131 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_13
# 132 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 133 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 134 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab12
# 135 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 136 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 137 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 138 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_14
# 139 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 140 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 141 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 142 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 143 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_1
# 144 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 145 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 146 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 147 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab11
# 148 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 149 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 150 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_15
# 151 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 152 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 153 "data/maps/SapphireVillage_Lab/scripts.pory"
	giveitem ITEM_LETTER, 1
# 154 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 155 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan4
# 156 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 157 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 158 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 159 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 160 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 1
# 161 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 4
# 162 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 163 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


SVLMapScriptY::
# 167 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 168 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_0
# 169 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 170 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 171 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 172 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptY_Text_0
# 173 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 174 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 175 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 60
# 176 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 177 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_2
# 178 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 179 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 180 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 181 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab7
# 182 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 183 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 184 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 185 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_3
# 186 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 187 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 188 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 189 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 190 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 191 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 192 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 193 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 194 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptY_Text_0
# 195 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 196 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 197 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 198 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 199 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_4
# 200 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 201 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 202 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 203 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab9
# 204 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 205 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 206 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 207 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_5
# 208 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 209 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 210 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 211 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 212 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 213 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 214 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 215 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 216 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptY_Text_0
# 217 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 218 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 219 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 220 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 221 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_6
# 222 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 223 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 224 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 225 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab9
# 226 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 227 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 228 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 229 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_7
# 230 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 231 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 232 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 233 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 22
# 234 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab8
# 235 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 236 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 237 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 238 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptY_Text_0
# 239 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 240 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 241 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 242 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab10
# 243 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 244 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 245 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 246 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_8
# 247 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 248 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 249 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 250 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan3
# 251 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 252 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 253 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab11
# 254 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 255 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 256 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_9
# 257 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 258 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 1
# 259 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_10
# 260 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 261 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 262 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_11
# 263 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 264 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 265 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 266 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_12
# 267 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 268 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 269 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_13
# 270 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 271 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 272 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab12
# 273 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 274 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 275 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 276 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_14
# 277 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 278 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 279 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 280 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 281 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptY_Text_0
# 282 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 283 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 284 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 285 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab11
# 286 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 287 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 288 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SVLMapScriptX_Text_15
# 289 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 290 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 291 "data/maps/SapphireVillage_Lab/scripts.pory"
	giveitem ITEM_LETTER, 1
# 292 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 293 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan4
# 294 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 295 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 296 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 297 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 298 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 1
# 299 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 4
# 300 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 301 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


# 304 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabjonathan3:
# 305 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
# 306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 307 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
# 308 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 308 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 308 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 308 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 309 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 309 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 309 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 309 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 309 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 312 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabjonathan4:
# 313 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
# 314 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 314 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 314 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 314 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 314 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 315 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
# 316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 317 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
# 318 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 321 "data/maps/SapphireVillage_Lab/scripts.pory"
movAspenlab5:
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 322 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 325 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabmoveup:
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 326 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 329 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab7:
# 330 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
# 331 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 332 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
# 333 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 333 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 333 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 334 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 337 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab8:
# 338 "data/maps/SapphireVillage_Lab/scripts.pory"
	emote_x
	step_end

# 341 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab9:
# 342 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
# 343 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 344 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 347 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab10:
# 348 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
# 349 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 349 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 349 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 349 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 349 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 350 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
# 351 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 354 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab11:
# 355 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
	step_end

# 358 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab12:
# 359 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

OnWarpTableSVLab::
# 363 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_EVENTS, 1
	goto_if_eq OnWarpTableSVLab_1
	return

OnWarpTableSVLab_1:
# 364 "data/maps/SapphireVillage_Lab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, MOVEMENT_TYPE_FACE_UP
	return


OnTransitionSVLab::
# 369 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_VISITED_LAB
# 370 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, OnTransitionSVLab_1
# 373 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 3
	goto_if_ge OnTransitionSVLab_2
# 376 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_JASPER_TOWN_STATE, 1
	goto_if_eq OnTransitionSVLab_3
# 379 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_IONIA_CITY_STATE, 3
	goto_if_ge OnTransitionSVLab_4
# 382 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_EVENTS, 1
	goto_if_eq OnTransitionSVLab_5
# 385 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_EVENTS, 7
	goto_if_eq OnTransitionSVLab_6
# 388 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_EVENTS, 8
	goto_if_eq OnTransitionSVLab_7
	return

OnTransitionSVLab_1:
# 371 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP1
	return

OnTransitionSVLab_2:
# 374 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP2
	return

OnTransitionSVLab_3:
# 377 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP2
	return

OnTransitionSVLab_4:
# 380 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP3
	return

OnTransitionSVLab_5:
# 383 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP4
	return

OnTransitionSVLab_6:
# 386 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP5
	return

OnTransitionSVLab_7:
# 389 "data/maps/SapphireVillage_Lab/scripts.pory"
	call SVLMapScriptP6
	return


SVLMapScriptP1::
# 397 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_BALL
# 398 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_BALL2
# 399 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_BALL3
# 400 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Ball1
# 401 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Ball2
# 402 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Ball3
	return


SVLMapScriptP2::
# 407 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 408 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVLMapScriptA
# 409 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVLMapScriptB
	return


SVLMapScriptP3::
# 414 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 415 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVLMapScriptC
# 416 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVLMapScriptD
	return


SVLMapScriptP4::
# 421 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabAspen, 6, 11
# 422 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabAspen, MOVEMENT_TYPE_FACE_UP
# 423 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
	return


SVLMapScriptP5::
# 428 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabAspen, 6, 11
# 429 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabAspen, MOVEMENT_TYPE_FACE_UP
	return


SVLMapScriptP6::
# 434 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 9
	return


SVLMapScriptA::
# 439 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabEgypt
# 440 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_HIDE_LAB_TWIN
# 441 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabEgypt, 2, 2
# 442 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabEgypt, MOVEMENT_TYPE_FACE_UP
	return


SVLMapScriptB::
# 447 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabAnthony
# 448 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_HIDE_LAB_TWIN
# 449 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabAnthony, 2, 2
# 450 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabAnthony, MOVEMENT_TYPE_FACE_UP
	return


SVLMapScriptC::
# 455 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabEgypt
# 456 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_HIDE_LAB_TWIN
# 457 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabEgypt, 2, 6
# 458 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabEgypt, MOVEMENT_TYPE_FACE_UP
	return


SVLMapScriptD::
# 463 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabAnthony
# 464 "data/maps/SapphireVillage_Lab/scripts.pory"
	clearflag FLAG_HIDE_LAB_TWIN
# 465 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxyperm SVLabAnthony, 2, 6
# 466 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabAnthony, MOVEMENT_TYPE_FACE_UP
	return


OnLoadSVLab::
# 471 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, OnLoadSVLab_1
	return

OnLoadSVLab_1:
# 472 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 0, 10, METATILE_WishLab_LabTile1, FALSE
# 473 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 3, 12, METATILE_WishLab_LabTile2, FALSE
# 474 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 8, 12, METATILE_WishLab_LabTile2, FALSE
# 475 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 9, 12, METATILE_WishLab_LabTile2, FALSE
# 476 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 10, 11, METATILE_WishLab_LabTile2, FALSE
# 477 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 11, 10, METATILE_WishLab_LabTile2, FALSE
# 478 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 4, 5, METATILE_WishLab_LabTile2, FALSE
# 479 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 11, 3, METATILE_WishLab_LabTile2, FALSE
# 480 "data/maps/SapphireVillage_Lab/scripts.pory"
	setmetatile 12, 3, METATILE_WishLab_LabTile2, FALSE
	return


SapphireVillage_Lab_EventScript_PC::
# 485 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_Lab_EventScript_PC_1
# 490 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_PC_Text_1
# 491 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_PC_1:
# 486 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_PC_Text_0
# 487 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_Boxes::
# 496 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_Lab_EventScript_Boxes_1
# 501 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Boxes_Text_1
# 502 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Boxes_1:
# 497 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Boxes_Text_0
# 498 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_Balls::
# 507 "data/maps/SapphireVillage_Lab/scripts.pory"
	lock
# 508 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 3
	goto_if_ge SapphireVillage_Lab_EventScript_Balls_1
# 513 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Balls_Text_1
# 514 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Balls_1:
# 509 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Balls_Text_0
# 510 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_Dexes::
# 519 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Dexes_Text_0
# 520 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_Jonathan::
# 524 "data/maps/SapphireVillage_Lab/scripts.pory"
	lock
# 525 "data/maps/SapphireVillage_Lab/scripts.pory"
	faceplayer
# 526 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_Lab_EventScript_Jonathan_1
# 530 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_JONATHAN_STATE, 1
	goto_if_ge SapphireVillage_Lab_EventScript_Jonathan_2
# 534 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, SapphireVillage_Lab_EventScript_Jonathan_3
# 539 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Jonathan_Text_2
# 540 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Jonathan_1:
# 527 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Jonathan_Text_0
# 528 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Jonathan_2:
# 531 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Jonathan_Text_1
# 532 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Jonathan_3:
# 535 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Jonathan_Text_1
# 536 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_Anthony::
# 545 "data/maps/SapphireVillage_Lab/scripts.pory"
	lock
# 546 "data/maps/SapphireVillage_Lab/scripts.pory"
	faceplayer
# 547 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SapphireVillage_Lab_EventScript_Anthony_1
# 555 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_IONIA_CITY_STATE, 2
	goto_if_ge SapphireVillage_Lab_EventScript_Anthony_2
# 604 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 605 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_6
# 606 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 607 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 608 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Anthony_1:
# 548 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 549 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_0
# 550 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 551 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 552 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Anthony_2:
# 556 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_OBTAINED_TOTODILE, SapphireVillage_Lab_EventScript_Anthony_6
# 565 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 566 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_2
# 567 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 568 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 569 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 570 "data/maps/SapphireVillage_Lab/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 571 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SapphireVillage_Lab_EventScript_Anthony_9
# 580 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SapphireVillage_Lab_EventScript_Anthony_10
# 590 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_4
# 591 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 592 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 593 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 594 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 595 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_5
# 596 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 597 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 598 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Anthony_6:
# 557 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 558 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_1
# 559 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 560 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 561 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Anthony_9:
# 572 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 573 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_3
# 574 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 575 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 576 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 577 "data/maps/SapphireVillage_Lab/scripts.pory"
	call NicknamePartyMon
# 578 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto TwinLabA2
	return

SapphireVillage_Lab_EventScript_Anthony_10:
# 581 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 582 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_3
# 583 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 584 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 585 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 586 "data/maps/SapphireVillage_Lab/scripts.pory"
	call NicknameBoxMon
# 587 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto TwinLabA2
	return


TwinLabA2::
# 614 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 615 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 616 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox TwinLabA2_Text_0
# 617 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 618 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 619 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_OBTAINED_TOTODILE
# 620 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 621 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end


TwinLabAA::
# 626 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 627 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 628 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox TwinLabAA_Text_0
# 629 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 630 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 631 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_OBTAINED_TOTODILE
# 632 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 633 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end


SapphireVillage_Lab_EventScript_Egypt::
# 638 "data/maps/SapphireVillage_Lab/scripts.pory"
	lock
# 639 "data/maps/SapphireVillage_Lab/scripts.pory"
	faceplayer
# 640 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_IS_CHAMPION, SapphireVillage_Lab_EventScript_Egypt_1
# 648 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_IONIA_CITY_STATE, 2
	goto_if_ge SapphireVillage_Lab_EventScript_Egypt_2
# 697 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 698 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Egypt_Text_4
# 699 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 700 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 701 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Egypt_1:
# 641 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 642 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Egypt_Text_0
# 643 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 644 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 645 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Egypt_2:
# 649 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_OBTAINED_TOTODILE, SapphireVillage_Lab_EventScript_Egypt_6
# 658 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 659 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Egypt_Text_2
# 660 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 661 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 662 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 663 "data/maps/SapphireVillage_Lab/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 664 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq SapphireVillage_Lab_EventScript_Egypt_9
# 673 "data/maps/SapphireVillage_Lab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq SapphireVillage_Lab_EventScript_Egypt_10
# 683 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_4
# 684 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 685 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 686 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 687 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 688 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Egypt_Text_3
# 689 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 690 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 691 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Egypt_6:
# 650 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 651 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Egypt_Text_1
# 652 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 653 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 654 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	end

SapphireVillage_Lab_EventScript_Egypt_9:
# 665 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 666 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_3
# 667 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 668 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 669 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 670 "data/maps/SapphireVillage_Lab/scripts.pory"
	call NicknamePartyMon
# 671 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto TwinLabAA
	return

SapphireVillage_Lab_EventScript_Egypt_10:
# 674 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 675 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Anthony_Text_3
# 676 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 677 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmessage
# 678 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 679 "data/maps/SapphireVillage_Lab/scripts.pory"
	call NicknameBoxMon
# 680 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto TwinLabAA
	return


SapphireVillage_Lab_EventScript_Aspen::
# 707 "data/maps/SapphireVillage_Lab/scripts.pory"
	lock
# 708 "data/maps/SapphireVillage_Lab/scripts.pory"
	faceplayer
# 709 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_TEMP_2, SapphireVillage_Lab_EventScript_Aspen_1
# 715 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_Lab_EventScript_Aspen_2
# 722 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, SapphireVillage_Lab_EventScript_Aspen_3
# 728 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_set FLAG_BUNEARY_OBTAINED, SapphireVillage_Lab_EventScript_Aspen_4
# 735 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 736 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Aspen_Text_4
# 737 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 738 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Aspen_1:
# 710 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 711 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Aspen_Text_0
# 712 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 713 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Aspen_2:
# 716 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 717 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Aspen_Text_1
# 718 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 719 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_TEMP_2
# 720 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Aspen_3:
# 723 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 724 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Aspen_Text_2
# 725 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 726 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return

SapphireVillage_Lab_EventScript_Aspen_4:
# 729 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 730 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_Aspen_Text_3
# 731 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 732 "data/maps/SapphireVillage_Lab/scripts.pory"
	release
	return


SapphireVillage_Lab_EventScript_LabEventBA::
# 743 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 744 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab3
# 745 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 746 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 747 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 21
# 748 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab1
# 749 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 750 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 751 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_0
# 752 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 753 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 754 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 755 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 756 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_1
# 757 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 758 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 759 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeitem ITEM_PARCEL, 1
# 760 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 761 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 762 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_2
# 763 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 764 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 765 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 766 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 767 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventBAM
# 768 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventBAF
	return


SapphireVillage_Lab_EventScript_LabEventBB::
# 772 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 773 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab3x
# 774 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 775 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 776 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 21
# 777 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab1
# 778 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 779 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 780 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_0
# 781 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 782 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 783 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 784 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 785 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_1
# 786 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 787 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 788 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeitem ITEM_PARCEL, 1
# 789 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 790 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 791 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_2
# 792 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 793 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 794 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 795 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 796 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventBAM
# 797 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventBAF
	return


SapphireVillage_Lab_EventScript_LabEventBC::
# 801 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 802 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab3xx
# 803 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 804 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 805 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 21
# 806 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab1
# 807 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 808 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 809 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_0
# 810 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 811 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 812 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 813 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 814 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_1
# 815 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 816 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 817 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeitem ITEM_PARCEL, 1
# 818 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 819 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 820 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox SapphireVillage_Lab_EventScript_LabEventBA_Text_2
# 821 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 822 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 823 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 45
# 824 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 825 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventBAM
# 826 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventBAF
	return


LabEventBAM::
# 830 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_0
# 831 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 832 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 833 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabEgypt
# 834 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabEgypt, 5, 12
# 835 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab3
# 836 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 837 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 838 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_1
# 839 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 840 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 841 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movlabfaceup
# 842 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movlabfaceup
# 843 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 844 "data/maps/SapphireVillage_Lab/scripts.pory"
	fadeoutbgm 0
# 845 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 846 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 847 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 848 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_2
# 849 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 850 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 851 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 852 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 853 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_3
# 854 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 855 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 856 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 857 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab4
# 858 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 859 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 860 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 861 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_4
# 862 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 863 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 864 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab5
# 865 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 866 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 867 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab2
# 868 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 869 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 870 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_5
# 871 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 872 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 873 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 874 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 875 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_6
# 876 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 877 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 878 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 879 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 880 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_7
# 881 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 882 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 883 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 884 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab6
# 885 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 886 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 887 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab3
# 888 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab4
# 889 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 890 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 891 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Dex1
# 892 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 40
# 893 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Dex2
# 894 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 40
# 895 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab4
# 896 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 897 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 898 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_8
# 899 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 900 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 901 "data/maps/SapphireVillage_Lab/scripts.pory"
	additem ITEM_SPARE_POKEDEX, 1
# 902 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 80
# 903 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan1
# 904 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 905 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 906 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabJonathan, MOVEMENT_TYPE_LOOK_AROUND
# 907 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab5
# 908 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 909 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_9
# 910 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 911 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 912 "data/maps/SapphireVillage_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 913 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 914 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_10
# 915 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 916 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan2
# 917 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 918 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 15
# 919 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab7
# 920 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab6
# 921 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 922 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 923 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_11
# 924 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 925 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 926 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movlabfaceup
# 927 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 928 "data/maps/SapphireVillage_Lab/scripts.pory"
	special HealPlayerParty
# 929 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 930 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 931 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_DEX
# 932 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 933 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 6
# 934 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 2
# 935 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 1
# 936 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 2
# 937 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventBAF::
# 941 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_0
# 942 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 943 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 944 "data/maps/SapphireVillage_Lab/scripts.pory"
	addobject SVLabAnthony
# 945 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabAnthony, 5, 12
# 946 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab3
# 947 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 948 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 949 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_1
# 950 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 951 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 952 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movlabfaceup
# 953 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movlabfaceup
# 954 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 955 "data/maps/SapphireVillage_Lab/scripts.pory"
	fadeoutbgm 0
# 956 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 957 "data/maps/SapphireVillage_Lab/scripts.pory"
	playbgm MUS_RG_OAK_LAB, FALSE
# 958 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 959 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_2
# 960 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 961 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 962 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 963 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 964 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_2
# 965 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 966 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 967 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 968 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab4
# 969 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 970 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 971 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 972 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_3
# 973 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 974 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 975 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab5
# 976 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 977 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 978 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab2
# 979 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 980 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 981 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_5
# 982 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 983 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 984 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 985 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 986 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_4
# 987 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 988 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 989 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 990 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 991 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_7
# 992 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 993 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 994 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 995 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab6
# 996 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 997 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 998 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab3
# 999 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab4
# 1000 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1001 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 50
# 1002 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Dex1
# 1003 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 40
# 1004 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject Dex2
# 1005 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 40
# 1006 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAspen, movAspenlab4
# 1007 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1008 "data/maps/SapphireVillage_Lab/scripts.pory"
	playfanfare MUS_RG_OBTAIN_KEY_ITEM
# 1009 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_8
# 1010 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1011 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitfanfare
# 1012 "data/maps/SapphireVillage_Lab/scripts.pory"
	additem ITEM_SPARE_POKEDEX, 1
# 1013 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 80
# 1014 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan1
# 1015 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1016 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 1017 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectmovementtype SVLabJonathan, MOVEMENT_TYPE_LOOK_AROUND
# 1018 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab5
# 1019 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1020 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_9
# 1021 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1022 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 1023 "data/maps/SapphireVillage_Lab/scripts.pory"
	giveitem ITEM_POKE_BALL, 10
# 1024 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 20
# 1025 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAM_Text_10
# 1026 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1027 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabJonathan, movlabjonathan2
# 1028 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1029 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 15
# 1030 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab7
# 1031 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab6
# 1032 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1033 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 1034 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventBAF_Text_5
# 1035 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1036 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1037 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movlabfaceup
# 1038 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1039 "data/maps/SapphireVillage_Lab/scripts.pory"
	special HealPlayerParty
# 1040 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 1041 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_BIRCH
# 1042 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_DEX
# 1043 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_CABLE_CLUB_TUTORIAL_STATE, 1
# 1044 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 6
# 1045 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 2
# 1046 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 1
# 1047 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 2
# 1048 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


# 1051 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabfaceup:
# 1052 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1055 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabjonathan1:
# 1056 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1057 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1057 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1057 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1057 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1058 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1058 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1058 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1058 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1058 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 1061 "data/maps/SapphireVillage_Lab/scripts.pory"
movlabjonathan2:
# 1062 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1062 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1062 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1062 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1062 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1063 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1063 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1063 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1063 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1064 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1067 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab3:
# 1068 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
# 1069 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1070 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1070 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1070 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1070 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 1073 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab3x:
# 1074 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1074 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1074 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1074 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 1077 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab3xx:
# 1078 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
# 1079 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1080 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1080 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1080 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1080 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 1083 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab4:
# 1084 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1087 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab5:
# 1088 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
	step_end

# 1091 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab6:
# 1092 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
	step_end

# 1095 "data/maps/SapphireVillage_Lab/scripts.pory"
movAspenlab1:
# 1096 "data/maps/SapphireVillage_Lab/scripts.pory"
	emote_exclamation_mark
# 1097 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
	step_end

# 1100 "data/maps/SapphireVillage_Lab/scripts.pory"
movAspenlab2:
# 1101 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
	step_end

# 1104 "data/maps/SapphireVillage_Lab/scripts.pory"
movAspenlab3:
# 1105 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1106 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
	step_end

# 1109 "data/maps/SapphireVillage_Lab/scripts.pory"
movAspenlab4:
# 1110 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1111 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
	step_end

# 1114 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab3:
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1115 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1116 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
	step_end

# 1119 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab4:
# 1120 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1120 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_up
# 1121 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1122 "data/maps/SapphireVillage_Lab/scripts.pory"
	emote_question_mark
# 1123 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1126 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab5:
# 1127 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
	step_end

# 1130 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab6:
# 1131 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1131 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_left
# 1132 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1135 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab7:
# 1136 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
	step_end

SapphireVillage_Lab_EventScript_LabEventAA::
# 1140 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 1141 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 1142 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventAAM
# 1143 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventAAF
	return


SapphireVillage_Lab_EventScript_LabEventAB::
# 1147 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 1148 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 1149 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventABM
# 1150 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventABF
	return


SapphireVillage_Lab_EventScript_LabEventAC::
# 1154 "data/maps/SapphireVillage_Lab/scripts.pory"
	lockall
# 1155 "data/maps/SapphireVillage_Lab/scripts.pory"
	checkplayergender
# 1156 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LabEventACM
# 1157 "data/maps/SapphireVillage_Lab/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, LabEventACF
	return


LabEventAAM::
# 1161 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab1
# 1162 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1163 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1
# 1164 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1165 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1166 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 1167 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAM_Text_0
# 1168 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1169 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1170 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1171 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab2
# 1172 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1173 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1174 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1175 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1176 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabEgypt
# 1177 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabEgypt, 23, 7
# 1178 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1179 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1180 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1181 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventABM::
# 1185 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab1x
# 1186 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1187 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1x
# 1188 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1189 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1190 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 1191 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAM_Text_0
# 1192 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1193 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1194 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1195 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab2x
# 1196 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1197 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1198 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1199 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1200 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabEgypt
# 1201 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabEgypt, 23, 7
# 1202 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1203 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1204 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1205 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventACM::
# 1209 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab1xx
# 1210 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1211 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1x
# 1212 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1213 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1214 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 1215 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAM_Text_0
# 1216 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1217 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1218 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1219 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabEgypt, movEgyptlab2xx
# 1220 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1221 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1222 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1223 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1224 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabEgypt
# 1225 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabEgypt, 23, 7
# 1226 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1227 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1228 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1229 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventAAF::
# 1233 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab1
# 1234 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1235 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1
# 1236 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1237 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1238 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 1239 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAF_Text_0
# 1240 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1241 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1242 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1243 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab2
# 1244 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1245 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1246 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1247 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1248 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabAnthony
# 1249 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabAnthony, 23, 7
# 1250 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1251 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1252 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1253 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventABF::
# 1257 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab1x
# 1258 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1259 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1x
# 1260 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1261 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1262 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 1263 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAF_Text_0
# 1264 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1265 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1266 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1267 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab2x
# 1268 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1269 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1270 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1271 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1272 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabAnthony
# 1273 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabAnthony, 23, 7
# 1274 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1275 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1276 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1277 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


LabEventACF::
# 1281 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab1xx
# 1282 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1283 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab1x
# 1284 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1285 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1286 "data/maps/SapphireVillage_Lab/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 1287 "data/maps/SapphireVillage_Lab/scripts.pory"
	msgbox LabEventAAF_Text_0
# 1288 "data/maps/SapphireVillage_Lab/scripts.pory"
	closemessage
# 1289 "data/maps/SapphireVillage_Lab/scripts.pory"
	removefieldmugshot
# 1290 "data/maps/SapphireVillage_Lab/scripts.pory"
	delay 30
# 1291 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement SVLabAnthony, movEgyptlab2xx
# 1292 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1293 "data/maps/SapphireVillage_Lab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movPlayerlab2
# 1294 "data/maps/SapphireVillage_Lab/scripts.pory"
	waitmovement 0
# 1295 "data/maps/SapphireVillage_Lab/scripts.pory"
	playse 9
# 1296 "data/maps/SapphireVillage_Lab/scripts.pory"
	removeobject SVLabAnthony
# 1297 "data/maps/SapphireVillage_Lab/scripts.pory"
	setobjectxy SVLabAnthony, 23, 7
# 1298 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_DELIVERY_EVENTS, 3
# 1299 "data/maps/SapphireVillage_Lab/scripts.pory"
	setvar VAR_JASPER_TOWN_STATE, 2
# 1300 "data/maps/SapphireVillage_Lab/scripts.pory"
	setflag FLAG_HIDE_LAB_TWIN
# 1301 "data/maps/SapphireVillage_Lab/scripts.pory"
	releaseall
	return


# 1304 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab1:
# 1305 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1305 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1305 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1306 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
	step_end

# 1309 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab1x:
# 1310 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1310 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1310 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1311 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1312 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
	step_end

# 1315 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab1xx:
# 1316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1316 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1317 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1317 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1317 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1318 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1319 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1319 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1319 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1320 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_right
	step_end

# 1323 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab2:
# 1324 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1325 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1325 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1325 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1325 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1325 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
	step_end

# 1328 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab2x:
# 1329 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1329 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1330 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_right
# 1331 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1331 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
	step_end

# 1334 "data/maps/SapphireVillage_Lab/scripts.pory"
movEgyptlab2xx:
# 1335 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1335 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1335 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
# 1335 "data/maps/SapphireVillage_Lab/scripts.pory"
	walk_down
	step_end

# 1338 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab1:
# 1339 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_up
	step_end

# 1342 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab1x:
# 1343 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_left
	step_end

# 1346 "data/maps/SapphireVillage_Lab/scripts.pory"
movPlayerlab2:
# 1347 "data/maps/SapphireVillage_Lab/scripts.pory"
	face_down
	step_end

SVLMapScriptX_Text_0:
# 29 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Alright, here we go.\pTry not to break anything like your\nbrother did, alright?\pAnyway, your Mom made me have some\nPokémon bred for you guys.\pThere's three Poké Balls on the table,\nso go ahead and take your pick.$"

SVLMapScriptX_Text_1:
# 34 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: …$"

SVLMapScriptX_Text_2:
# 39 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: What are ya waiting for?\nJust pick one already…$"

SVLMapScriptX_Text_3:
# 47 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: That one should contain\nthe Grass-Type Treecko.\pThing's got an attitude…$"

SVLMapScriptX_Text_4:
# 61 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Eh? It's empty?\nSorry kid, check the others.$"

SVLMapScriptX_Text_5:
# 69 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: That one should contain\nthe Fire-Type Scorbunny.\pToo much energy for my liking.$"

SVLMapScriptX_Text_6:
# 83 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: You're kidding me.\nI gave that one away too?\pTry the last one.$"

SVLMapScriptX_Text_7:
# 91 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: That one should have the\nWater-Type Totodile.\pThe bugger nearly bit my hand off…$"

SVLMapScriptX_Text_8:
# 108 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Sorry kid, I guess I\nalready gave all of 'em away.\pBut tell ya what, how about we make a\ndeal instead?\pDown south in Jasper Town I'm\nexpecting a shipment I ordered.\pIf ya go pick it up for me, and I'll have\nnew Pokémon for ya when you get back.\pWhat do ya say? We have a deal?$"

SVLMapScriptX_Text_9:
# 118 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: Pardon my interruption.\pLeaving the village without a single\nPokémon would be dangerous.\pSince our hands are tied, I'll spray you\nwith this long-lasting Repel.$"

SVLMapScriptX_Text_10:
# 121 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} was sprayed with Repel!$"

SVLMapScriptX_Text_11:
# 124 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: While we are at it, you might\nfind these to be useful.$"

SVLMapScriptX_Text_12:
# 128 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} obtained the Running Shoes!$"

SVLMapScriptX_Text_13:
# 131 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} switched shoes with the\nRunning Shoes.$"

SVLMapScriptX_Text_14:
# 138 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Once you get to Jasper\nTown, head towards the Pokémart.\pOnce you're there, ask for a guy named\nMack and tell 'em I sent ya.\pAnd don't let the cops catch ya.\nIf they do, then I don't know ya.$"

SVLMapScriptX_Text_15:
# 150 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: What he meant to say was\ngood luck, {COLOR GREEN}{PLAYER}{COLOR BLUE}.\pShow the shopkeeper this Order Form as\nproof that we sent you.$"

SVLMapScriptY_Text_0:
# 172 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: …$"

SapphireVillage_Lab_EventScript_PC_Text_0:
# 486 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "It's Professor Aspen's PC…\pThere are many files containing\nPokémon research data!$"

SapphireVillage_Lab_EventScript_PC_Text_1:
# 490 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "It's Professor Aspen's PC…\nYuck! Shouldn't have looked!$"

SapphireVillage_Lab_EventScript_Boxes_Text_0:
# 497 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "The box is filled with what looks like\nPokémon Research textbooks.$"

SapphireVillage_Lab_EventScript_Boxes_Text_1:
# 501 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "The box is filled with what looks like\nempty bottles and paraphernalia.$"

SapphireVillage_Lab_EventScript_Balls_Text_0:
# 509 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "It's an empty Poké Ball…$"

SapphireVillage_Lab_EventScript_Balls_Text_1:
# 513 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "It's a Poké Ball!\nBetter leave it alone for now.$"

SapphireVillage_Lab_EventScript_Dexes_Text_0:
# 519 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "It's a Pokédex!\nBetter not touch it.$"

SapphireVillage_Lab_EventScript_Jonathan_Text_0:
# 527 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: Oh, hello {COLOR GREEN}{PLAYER}{COLOR BLUE}.\pProfessor Aspen has been much more\nproductive lately.\pThank you for all your help!$"

SapphireVillage_Lab_EventScript_Jonathan_Text_1:
# 531 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: Good luck out there!\nPlease do your best to stay safe.$"

SapphireVillage_Lab_EventScript_Jonathan_Text_2:
# 539 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: Hello, {COLOR GREEN}{PLAYER}{COLOR BLUE}.\pProf. Aspen went out to look for you.\nHe should be back soon.\pPlease don't break anything like your\nbrother Alex did…$"

SapphireVillage_Lab_EventScript_Anthony_Text_0:
# 549 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pHow's Kate's new villa?\nThink I should pay it a visit?$"

SapphireVillage_Lab_EventScript_Anthony_Text_1:
# 558 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pI heard that Amber will groom your\nPokémon for you.\pYou should check it out for yourself\nsometime!$"

SapphireVillage_Lab_EventScript_Anthony_Text_2:
# 566 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pAre you here for your Totodile?\nHere you go!$"

SapphireVillage_Lab_EventScript_Anthony_Text_3:
# 573 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} received the Totodile!$"

SapphireVillage_Lab_EventScript_Anthony_Text_4:
# 590 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "There's no more room for Pokémon!\pThe Pokémon Boxes are full and can't\naccept any more!$"

SapphireVillage_Lab_EventScript_Anthony_Text_5:
# 595 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Really sis?\nClean out your PC Boxes.$"

SapphireVillage_Lab_EventScript_Anthony_Text_6:
# 605 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nI have my work cut out for me here…$"

TwinLabA2_Text_0:
# 616 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}It looks pretty happy to meet ya!\nI'm sure you two will get along.$"

TwinLabAA_Text_0:
# 628 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Doesn't it look happy to meet you?\nI'm sure you two will get along.$"

SapphireVillage_Lab_EventScript_Egypt_Text_0:
# 642 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Hey, {COLOR GREEN}{PLAYER}{COLOR RED}!\pHow's Katelyn's new villa?\nI should totally visit sometime!$"

SapphireVillage_Lab_EventScript_Egypt_Text_1:
# 651 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Hey, {COLOR GREEN}{PLAYER}{COLOR RED}!\pI heard that Amber will groom your\nPokémon for you.\pYou should pay her a visit!$"

SapphireVillage_Lab_EventScript_Egypt_Text_2:
# 659 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Hey, {COLOR GREEN}{PLAYER}{COLOR RED}!\pAre you here for Totodile?\nHere you go!$"

SapphireVillage_Lab_EventScript_Egypt_Text_3:
# 688 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Really bro?\nClean out your PC Boxes.$"

SapphireVillage_Lab_EventScript_Egypt_Text_4:
# 698 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Hey, {COLOR GREEN}{PLAYER}{COLOR RED}!\nI have my work cut out for me here…$"

SapphireVillage_Lab_EventScript_Aspen_Text_0:
# 711 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Don't let me keep you.\nI'm sure you have some place to be.$"

SapphireVillage_Lab_EventScript_Aspen_Text_1:
# 717 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}.\pI wanted to thank you and your family\nfor everything.\pNow that I'm on the straight and narrow,\nI can focus on my Pokémon research.\pThe Professors are even starting to\ninvite me to meetings again!\pI even cleaned up my house and the lab.\nHope ya like the new look!\pOh yeah, and keep at it with the\nPokédex. It's really helping out.$"

SapphireVillage_Lab_EventScript_Aspen_Text_2:
# 724 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: I'm counting on ya.\nPlease help me out here.\pYou can get your Pokédex rated at any\nPC inside a Pokémon Center.$"

SapphireVillage_Lab_EventScript_Aspen_Text_3:
# 730 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: You got the package yet?\nC'mon, kid. Not asking for much.$"

SapphireVillage_Lab_EventScript_Aspen_Text_4:
# 736 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Once you get to Jasper\nTown, head towards the Pokémart.\pOnce you're there, ask for a guy named\nMack and tell 'em I sent ya.\pDon't let the feds catch ya either.\nIf they do, then I don't know ya.$"

SapphireVillage_Lab_EventScript_LabEventBA_Text_0:
# 751 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Oh hey, you're back!\nSo you got the goods, right?$"

SapphireVillage_Lab_EventScript_LabEventBA_Text_1:
# 756 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} delivered the Odd Package!$"

SapphireVillage_Lab_EventScript_LabEventBA_Text_2:
# 762 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Finally, I've gone way too long without\na drink.\p…\pRight, our little deal we made.\nWe have a bit of a problem.\pI managed to get ahold of more Pokémon,\nbut I can't access 'em.$"

LabEventBAM_Text_0:
# 830 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Knock-knock!$"

LabEventBAM_Text_1:
# 838 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}I'm just popping in!\nMy brother's been taking awhile and-\pOH MY GOSH THAT BUNEARY IS SO FRIGGIN\nCUTE!!!!\pOooh, and it's a Shiny, too!\nThat's the Pokémon you chose?$"

LabEventBAM_Text_2:
# 848 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: I haven't given away any\nPokémon just yet.\pMy PC is not letting me withdraw them\nbecause of some viruses.\pDon't ask how they got there!\nThat's none of your business.$"

LabEventBAM_Text_3:
# 853 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Oh? I can help with that!\nAlex had the same problem before.$"

LabEventBAM_Text_4:
# 861 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Wait a minute… Professor?\nAre these Pokédexes?$"

LabEventBAM_Text_5:
# 870 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: You'd be right.\pI actually wanted to ask ya for another\nfavor…\pLong story short, the Professor's\nCouncil wants to remove my tenure.\pSomething about me not contributing\nenough research or something.\pSince I was gonna give you all a\nPokémon, I figured you'd do it.\pIf ya document the Pokémon that live in\nNexar, that'd be helpful.\pTo tell ya the truth, I ain't good for\nmuch else… Gulp…\pThe pay sucks, but this science lab\nthing is all I got.\pI'll owe ya big time and pay ya back if\nyou help me out!$"

LabEventBAM_Text_6:
# 875 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Ooo, this is so exciting!\nJourneying across Nexar? So jealous!\p{COLOR GREEN}{PLAYER}{COLOR RED}, you and Buneary should\ntotally go for it!\pAlex too, I saw him leaving the Village\nnot too long ago!\pIf you go now, you can probably catch\nup with him!\pDon't worry about us, I'll catch up with\nyou later.$"

LabEventBAM_Text_7:
# 880 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Prof. Aspen: Glug… Glug…\nThat settles it then!\pHere, take these Pokédexes and give\none of 'em to your brother.\pI'll have your Pokémon delivered to ya\nwhen we're done here.$"

LabEventBAM_Text_8:
# 898 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} obtained two Pokédexes!$"

LabEventBAM_Text_9:
# 909 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Jonathan: Oh! Before you go, take\nPoké Balls to start you off.$"

LabEventBAM_Text_10:
# 914 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Good luck out there, and sorry for all\nof the trouble we caused.$"

LabEventBAM_Text_11:
# 923 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: See you later {COLOR GREEN}{PLAYER}{COLOR RED}!$"

LabEventBAF_Text_0:
# 941 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Coming through!$"

LabEventBAF_Text_1:
# 949 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Hey sis, you've been out here for a long\ntime and I got worried.\pHuh, that's a weird Pokémon.\nOh, it's a Shiny too, neat!\pI didn't think the Professor gave away\nrare Buneary, though.$"

LabEventBAF_Text_2:
# 964 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Don't worry, I've got this!\nAlex had the same problem before.$"

LabEventBAF_Text_3:
# 972 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Wait a minute… Professor?\nAre these Pokédexes?$"

LabEventBAF_Text_4:
# 986 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: Sorry to hear that, Professor.\pIt would be pretty neat to go on a\njourney through Acromia, though.\pI think you and Buneary should go for\nit, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pAlex too, I saw him leaving the Village\nnot too long ago.\pI'll catch up to you guys when I finish\nhelping the Professor.$"

LabEventBAF_Text_5:
# 1034 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: See you later {COLOR GREEN}{PLAYER}{COLOR BLUE}!$"

LabEventAAM_Text_0:
# 1167 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR RED}Egypt: Coming through!\pI have to go get the anti-virus\nsoftware we use on Alex's PC!\pYes, it really is THAT bad…$"

LabEventAAF_Text_0:
# 1239 "data/maps/SapphireVillage_Lab/scripts.pory"
	.string "{COLOR BLUE}Anthony: I'll be right back!\pI have to go get the anti-virus\nsoftware we use on Alex's PC.\pYes, it really is THAT bad…$"
