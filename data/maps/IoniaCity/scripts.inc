IoniaCity_MapScripts::
# 2 "data/maps/IoniaCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionIoniaCity
	.byte 0


OnTransitionIoniaCity::
# 6 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 7 "data/maps/IoniaCity/scripts.pory"
	compare VAR_IONIA_GYM, 3
	goto_if_eq OnTransitionIoniaCity_1
	return

OnTransitionIoniaCity_1:
# 8 "data/maps/IoniaCity/scripts.pory"
	lockall
# 9 "data/maps/IoniaCity/scripts.pory"
	addobject MissosIonia
# 10 "data/maps/IoniaCity/scripts.pory"
	addobject IoniaKatelyn2
# 11 "data/maps/IoniaCity/scripts.pory"
	setobjectxy MissosIonia, 25, 13
# 12 "data/maps/IoniaCity/scripts.pory"
	setobjectxy IoniaKatelyn2, 25, 13
# 13 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 14 "data/maps/IoniaCity/scripts.pory"
	applymovement IoniaKatelyn2, ICKatemov2
# 15 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 16 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 17 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 18 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_0
# 19 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 20 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 21 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 22 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_1
# 23 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 24 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 25 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 26 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov2
# 27 "data/maps/IoniaCity/scripts.pory"
	applymovement IoniaKatelyn2, ICPlayermov2
# 28 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 29 "data/maps/IoniaCity/scripts.pory"
	fadeoutbgm 0
# 30 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 31 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RG_ROCKET_HIDEOUT, FALSE
# 32 "data/maps/IoniaCity/scripts.pory"
	applymovement MissosIonia, ICMissosmov1
# 33 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 35 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 36 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_2
# 37 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 38 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 39 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 40 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 41 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_3
# 42 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 43 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 44 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 45 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 46 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_4
# 47 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 48 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 49 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 50 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_5
# 51 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 52 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 53 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 54 "data/maps/IoniaCity/scripts.pory"
	playse 15
# 55 "data/maps/IoniaCity/scripts.pory"
	addobject IoniaDusknoir
# 56 "data/maps/IoniaCity/scripts.pory"
	setobjectxy IoniaDusknoir, 31, 14
# 57 "data/maps/IoniaCity/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 58 "data/maps/IoniaCity/scripts.pory"
	waitmoncry
# 59 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 60 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 61 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_6
# 62 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 63 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 64 "data/maps/IoniaCity/scripts.pory"
	playse 263
# 65 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 66 "data/maps/IoniaCity/scripts.pory"
	applymovement MissosIonia, ICMissosmov2
# 67 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 68 "data/maps/IoniaCity/scripts.pory"
	playse 110
# 69 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 70 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 71 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_7
# 72 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 73 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 74 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 75 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_8
# 76 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 77 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 78 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 79 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_9
# 80 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 81 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 82 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 83 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_10
# 84 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 85 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 86 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 87 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_11
# 88 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 89 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 90 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 91 "data/maps/IoniaCity/scripts.pory"
	playse 111
# 92 "data/maps/IoniaCity/scripts.pory"
	applymovement MissosIonia, ICMissosmov3
# 93 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 94 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 95 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 96 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_12
# 97 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 98 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 99 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 100 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 101 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_13
# 102 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 103 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 104 "data/maps/IoniaCity/scripts.pory"
	delay 15
# 105 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 106 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_14
# 107 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 108 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 109 "data/maps/IoniaCity/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 110 "data/maps/IoniaCity/scripts.pory"
	waitmoncry
# 111 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 112 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov3
# 113 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 115 "data/maps/IoniaCity/scripts.pory"
	playbgm 0, FALSE
# 116 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 117 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_15
# 118 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 119 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 120 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 121 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 122 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_16
# 123 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 124 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 125 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 126 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_DISABLE_RUNNING
# 127 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_NO_WHITEOUT
# 128 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_FOLLOW_PKMN_DISABLE
# 129 "data/maps/IoniaCity/scripts.pory"
	trainerbattle_no_intro TRAINER_200, ICMissoslose
# 130 "data/maps/IoniaCity/scripts.pory"
	playbgm 0, FALSE
# 131 "data/maps/IoniaCity/scripts.pory"
	special HealPlayerParty
# 132 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 133 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 134 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_17
# 135 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 136 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 137 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 138 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 139 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_18
# 140 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 141 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 142 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 143 "data/maps/IoniaCity/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 144 "data/maps/IoniaCity/scripts.pory"
	waitmoncry
# 145 "data/maps/IoniaCity/scripts.pory"
	applymovement IoniaDusknoir, ICDusknoirmov1
# 146 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 147 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 148 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_19
# 149 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 150 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 151 "data/maps/IoniaCity/scripts.pory"
	delay 15
# 152 "data/maps/IoniaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 153 "data/maps/IoniaCity/scripts.pory"
	removeobject IoniaKatelyn2
# 154 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm IoniaKatelyn2, 0, 0
# 155 "data/maps/IoniaCity/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 35, 13
# 156 "data/maps/IoniaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 157 "data/maps/IoniaCity/scripts.pory"
	delay 15
# 158 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 159 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov4
# 160 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 161 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 162 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_MISSOS_ROBED, 0
# 163 "data/maps/IoniaCity/scripts.pory"
	msgbox OnTransitionIoniaCity_Text_20
# 164 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 165 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 166 "data/maps/IoniaCity/scripts.pory"
	playmoncry SPECIES_DUSKNOIR, CRY_MODE_ENCOUNTER
# 167 "data/maps/IoniaCity/scripts.pory"
	waitmoncry
# 168 "data/maps/IoniaCity/scripts.pory"
	applymovement IoniaDusknoir, ICDusknoirmov2
# 169 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_GYM, 4
# 171 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_MISSOS
# 172 "data/maps/IoniaCity/scripts.pory"
	clearflag FLAG_SYS_POKEMON_GET
# 173 "data/maps/IoniaCity/scripts.pory"
	clearflag FLAG_SYS_POKEDEX_GET
# 174 "data/maps/IoniaCity/scripts.pory"
	clearflag FLAG_NO_WHITEOUT
# 175 "data/maps/IoniaCity/scripts.pory"
	warp MAP_IONIA_CITY_NIGHTMARE1, 6, 12
# 176 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


# 184 "data/maps/IoniaCity/scripts.pory"
ICDusknoirmov1:
# 185 "data/maps/IoniaCity/scripts.pory"
	walk_fast_right
	step_end

# 188 "data/maps/IoniaCity/scripts.pory"
ICDusknoirmov2:
# 189 "data/maps/IoniaCity/scripts.pory"
	walk_fast_right
# 189 "data/maps/IoniaCity/scripts.pory"
	walk_fast_right
# 189 "data/maps/IoniaCity/scripts.pory"
	walk_fast_right
# 190 "data/maps/IoniaCity/scripts.pory"
	face_up
	step_end

# 193 "data/maps/IoniaCity/scripts.pory"
ICMissosmov1:
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 194 "data/maps/IoniaCity/scripts.pory"
	walk_right
	step_end

# 197 "data/maps/IoniaCity/scripts.pory"
ICMissosmov2:
# 198 "data/maps/IoniaCity/scripts.pory"
	emote_question_mark
# 199 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

# 202 "data/maps/IoniaCity/scripts.pory"
ICMissosmov3:
# 203 "data/maps/IoniaCity/scripts.pory"
	face_right
	step_end

# 206 "data/maps/IoniaCity/scripts.pory"
ICKatemov2:
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 207 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 208 "data/maps/IoniaCity/scripts.pory"
	face_up
	step_end

# 211 "data/maps/IoniaCity/scripts.pory"
ICPlayermov2:
# 212 "data/maps/IoniaCity/scripts.pory"
	emote_question_mark
# 213 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 214 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

# 217 "data/maps/IoniaCity/scripts.pory"
ICPlayermov3:
# 218 "data/maps/IoniaCity/scripts.pory"
	walk_left
	step_end

# 221 "data/maps/IoniaCity/scripts.pory"
ICPlayermov4:
# 222 "data/maps/IoniaCity/scripts.pory"
	emote_exclamation_mark
# 223 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

IoniaCity_EventScript_Sign1::
# 227 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign1_Text_0
# 228 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign2::
# 232 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign2_Text_0
# 233 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign3::
# 237 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign3_Text_0
# 238 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign4::
# 242 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign4_Text_0
# 243 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign5::
# 247 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign5_Text_0
# 248 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign6::
# 252 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign6_Text_0
# 253 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Sign7::
# 257 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Sign7_Text_0
# 258 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Man1::
# 262 "data/maps/IoniaCity/scripts.pory"
	lock
# 263 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 264 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man1_Text_0
# 265 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Girl1::
# 269 "data/maps/IoniaCity/scripts.pory"
	lock
# 270 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 271 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Girl1_Text_0
# 272 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Man2::
# 276 "data/maps/IoniaCity/scripts.pory"
	lock
# 277 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 278 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man2_Text_0
# 279 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Girl2::
# 283 "data/maps/IoniaCity/scripts.pory"
	lock
# 284 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 285 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Girl2_Text_0
# 286 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Man3::
# 290 "data/maps/IoniaCity/scripts.pory"
	lock
# 291 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 292 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man3_Text_0
# 293 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Girl3::
# 297 "data/maps/IoniaCity/scripts.pory"
	lock
# 298 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 299 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Girl3_Text_0
# 300 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Man4::
# 304 "data/maps/IoniaCity/scripts.pory"
	lock
# 305 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 306 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man4_Text_0
# 307 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Man5::
# 311 "data/maps/IoniaCity/scripts.pory"
	lock
# 312 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 313 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man5_Text_0
# 314 "data/maps/IoniaCity/scripts.pory"
	release
	return


IoniaCity_EventScript_Katelyn1::
# 318 "data/maps/IoniaCity/scripts.pory"
	lockall
# 319 "data/maps/IoniaCity/scripts.pory"
	compare VAR_POWER_PLANT_STATE, 5
	goto_if_eq IoniaCity_EventScript_Katelyn1_2
IoniaCity_EventScript_Katelyn1_1:
# 348 "data/maps/IoniaCity/scripts.pory"
	compare VAR_POWER_PLANT_STATE, 1
	goto_if_eq IoniaCity_EventScript_Katelyn1_5
IoniaCity_EventScript_Katelyn1_4:
# 356 "data/maps/IoniaCity/scripts.pory"
	compare VAR_POWER_PLANT_STATE, 0
	goto_if_eq IoniaCity_EventScript_Katelyn1_7
	return

IoniaCity_EventScript_Katelyn1_2:
# 320 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 321 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 322 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 323 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_0
# 324 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 325 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 326 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 327 "data/maps/IoniaCity/scripts.pory"
	trainerbattle_no_intro TRAINER_200, IoniaKateDefeated
# 328 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 329 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 330 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_1
# 331 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 332 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 333 "data/maps/IoniaCity/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 3
# 334 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 335 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 336 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_2
# 337 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 338 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 339 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 340 "data/maps/IoniaCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 341 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_KATELYN_IONIA_CITY
# 342 "data/maps/IoniaCity/scripts.pory"
	removeobject IoniaKatelyn
# 343 "data/maps/IoniaCity/scripts.pory"
	setobjectxy IoniaKatelyn, 0, 0
# 344 "data/maps/IoniaCity/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 345 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_POWER_PLANT_STATE, 6
# 346 "data/maps/IoniaCity/scripts.pory"
	releaseall
	goto IoniaCity_EventScript_Katelyn1_1

IoniaCity_EventScript_Katelyn1_5:
# 349 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 350 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 351 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_3
# 352 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 353 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 354 "data/maps/IoniaCity/scripts.pory"
	releaseall
	goto IoniaCity_EventScript_Katelyn1_4

IoniaCity_EventScript_Katelyn1_7:
# 357 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 358 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 359 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_4
# 360 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 361 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 362 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 363 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 364 "data/maps/IoniaCity/scripts.pory"
	applymovement IoniaKatelyn, ICKatemov1
# 365 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 366 "data/maps/IoniaCity/scripts.pory"
	faceplayer
# 367 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 368 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_KATELYN, 0
# 369 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Katelyn1_Text_5
# 370 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 371 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 372 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 373 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_POWER_PLANT_STATE, 1
# 374 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


# 382 "data/maps/IoniaCity/scripts.pory"
ICKatemov1:
# 383 "data/maps/IoniaCity/scripts.pory"
	emote_exclamation_mark
	step_end

IoniaCity_EventScript_BlockedPassageA::
# 387 "data/maps/IoniaCity/scripts.pory"
	lockall
# 388 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 389 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov1xx
# 390 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 391 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov2
# 392 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 393 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man5_Text_0
# 394 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 395 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 396 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov3
# 397 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 398 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov4xx
# 399 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 400 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


IoniaCity_EventScript_BlockedPassageB::
# 404 "data/maps/IoniaCity/scripts.pory"
	lockall
# 405 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 406 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov1x
# 407 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 408 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov2
# 409 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 410 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man5_Text_0
# 411 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 412 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 413 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov3
# 414 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 415 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov4x
# 416 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 417 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


IoniaCity_EventScript_BlockedPassageC::
# 421 "data/maps/IoniaCity/scripts.pory"
	lockall
# 422 "data/maps/IoniaCity/scripts.pory"
	playse 21
# 423 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov1
# 424 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 425 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov2
# 426 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 427 "data/maps/IoniaCity/scripts.pory"
	msgbox IoniaCity_EventScript_Man5_Text_0
# 428 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 429 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 430 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Ioniamov3
# 431 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/IoniaCity/scripts.pory"
	applymovement Rt4Blocker, Ioniamov4
# 433 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 434 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


IoniaCity_EventScript_TwinSceneA::
# 438 "data/maps/IoniaCity/scripts.pory"
	lockall
# 439 "data/maps/IoniaCity/scripts.pory"
	checkplayergender
# 440 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TwinEgyptA
# 441 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TwinAnthonyA
	return


IoniaCity_EventScript_TwinSceneB::
# 445 "data/maps/IoniaCity/scripts.pory"
	lockall
# 446 "data/maps/IoniaCity/scripts.pory"
	checkplayergender
# 447 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TwinEgyptB
# 448 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TwinAnthonyB
	return


IoniaCity_EventScript_TwinSceneC::
# 452 "data/maps/IoniaCity/scripts.pory"
	lockall
# 453 "data/maps/IoniaCity/scripts.pory"
	checkplayergender
# 454 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TwinEgyptC
# 455 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TwinAnthonyC
	return


IoniaCity_EventScript_TwinSceneD::
# 459 "data/maps/IoniaCity/scripts.pory"
	lockall
# 460 "data/maps/IoniaCity/scripts.pory"
	checkplayergender
# 461 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, TwinEgyptD
# 462 "data/maps/IoniaCity/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, TwinAnthonyD
	return


NicknamePartyMon::
# 466 "data/maps/IoniaCity/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 467 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_2
NicknamePartyMon_1:
	return

NicknamePartyMon_2:
# 468 "data/maps/IoniaCity/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 469 "data/maps/IoniaCity/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto NicknamePartyMon_1


NicknameBoxMon::
# 475 "data/maps/IoniaCity/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 476 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 479 "data/maps/IoniaCity/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 477 "data/maps/IoniaCity/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


TwinEgyptA::
# 484 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_0
# 485 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 486 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 487 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 488 "data/maps/IoniaCity/scripts.pory"
	addobject EgyptIonia
# 489 "data/maps/IoniaCity/scripts.pory"
	setobjectxy EgyptIonia, 23, 26
# 490 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov1
# 491 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 492 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 493 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 494 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 495 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_1
# 496 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 497 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 498 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 499 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 500 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinEgyptA_1
# 509 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinEgyptA_2
# 519 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 520 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 521 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 522 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 523 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 524 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_4
# 527 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 528 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 529 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 530 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 531 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov2
# 532 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 533 "data/maps/IoniaCity/scripts.pory"
	removeobject EgyptIonia
# 534 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm EgyptIonia, 0, 0
# 535 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 536 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 537 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 538 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinEgyptA_1:
# 501 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 502 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 503 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 504 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 505 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 506 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 507 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return

TwinEgyptA_2:
# 510 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 511 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 512 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 513 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 514 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 515 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 516 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return


TwinEgyptA2::
# 543 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 544 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 545 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA2_Text_0
# 546 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 547 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 548 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 549 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 550 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov2
# 551 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 552 "data/maps/IoniaCity/scripts.pory"
	removeobject EgyptIonia
# 553 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm EgyptIonia, 0, 0
# 554 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 555 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 556 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_OBTAINED_TOTODILE
# 557 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 558 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


TwinAnthonyA::
# 562 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_0
# 563 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 564 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 565 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 566 "data/maps/IoniaCity/scripts.pory"
	addobject AnthonyIonia
# 567 "data/maps/IoniaCity/scripts.pory"
	setobjectxy AnthonyIonia, 23, 26
# 568 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov1
# 569 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 571 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 572 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 573 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 574 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_1
# 575 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 576 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 577 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 578 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 579 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinAnthonyA_1
# 588 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinAnthonyA_2
# 598 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 599 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 600 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 601 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 602 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 603 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_2
# 604 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 605 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 606 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 607 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 608 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov2
# 609 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/IoniaCity/scripts.pory"
	removeobject AnthonyIonia
# 611 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm AnthonyIonia, 0, 0
# 612 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 613 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 614 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 615 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinAnthonyA_1:
# 580 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 581 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 582 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 583 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 584 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 585 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 586 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return

TwinAnthonyA_2:
# 589 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 590 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 591 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 592 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 593 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 594 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 595 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return


TwinAnthonyA2::
# 620 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 621 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 622 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA2_Text_0
# 623 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 624 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 625 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 626 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 627 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov2
# 628 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 629 "data/maps/IoniaCity/scripts.pory"
	removeobject AnthonyIonia
# 630 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm AnthonyIonia, 0, 0
# 631 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 632 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 633 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_OBTAINED_TOTODILE
# 634 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 635 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return


TwinEgyptB::
# 639 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_0
# 640 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 641 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 642 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 643 "data/maps/IoniaCity/scripts.pory"
	addobject EgyptIonia
# 644 "data/maps/IoniaCity/scripts.pory"
	setobjectxy EgyptIonia, 24, 26
# 645 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov1
# 646 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 647 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 648 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 649 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 650 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_1
# 651 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 652 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 653 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 654 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 655 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinEgyptB_1
# 664 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinEgyptB_2
# 674 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 675 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 676 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 677 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 678 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 679 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_4
# 682 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 683 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 684 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 685 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 686 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov2
# 687 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 688 "data/maps/IoniaCity/scripts.pory"
	removeobject EgyptIonia
# 689 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm EgyptIonia, 0, 0
# 690 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 691 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 692 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 693 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinEgyptB_1:
# 656 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 657 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 658 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 659 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 660 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 661 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 662 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return

TwinEgyptB_2:
# 665 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 666 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 667 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 668 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 669 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 670 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 671 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return


TwinAnthonyB::
# 698 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_0
# 699 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 700 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 701 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 702 "data/maps/IoniaCity/scripts.pory"
	addobject AnthonyIonia
# 703 "data/maps/IoniaCity/scripts.pory"
	setobjectxy AnthonyIonia, 24, 26
# 704 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov1
# 705 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 706 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 707 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 709 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 710 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_1
# 711 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 712 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 713 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 714 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 715 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinAnthonyB_1
# 724 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinAnthonyB_2
# 734 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 735 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 736 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 737 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 738 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 739 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_2
# 740 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 741 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 742 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 743 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 744 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov2
# 745 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 746 "data/maps/IoniaCity/scripts.pory"
	removeobject AnthonyIonia
# 747 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm AnthonyIonia, 0, 0
# 748 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 749 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 750 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 751 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinAnthonyB_1:
# 716 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 717 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 718 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 719 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 720 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 721 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 722 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return

TwinAnthonyB_2:
# 725 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 726 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 727 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 728 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 729 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 730 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 731 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return


TwinEgyptC::
# 756 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_0
# 757 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 758 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 759 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 760 "data/maps/IoniaCity/scripts.pory"
	addobject EgyptIonia
# 761 "data/maps/IoniaCity/scripts.pory"
	setobjectxy EgyptIonia, 25, 26
# 762 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov1
# 763 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 764 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 765 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 766 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 767 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_1
# 768 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 769 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 770 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 771 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 772 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinEgyptC_1
# 781 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinEgyptC_2
# 791 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 792 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 793 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 794 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 795 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 796 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_4
# 799 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 800 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 801 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 802 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 803 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov2
# 804 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 805 "data/maps/IoniaCity/scripts.pory"
	removeobject EgyptIonia
# 806 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm EgyptIonia, 0, 0
# 807 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 808 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 809 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 810 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinEgyptC_1:
# 773 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 774 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 775 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 776 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 777 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 778 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 779 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return

TwinEgyptC_2:
# 782 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 783 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 784 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 785 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 786 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 787 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 788 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return


TwinAnthonyC::
# 815 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_0
# 816 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 817 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 818 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 819 "data/maps/IoniaCity/scripts.pory"
	addobject AnthonyIonia
# 820 "data/maps/IoniaCity/scripts.pory"
	setobjectxy AnthonyIonia, 25, 26
# 821 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov1
# 822 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 823 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 824 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 825 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 826 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 827 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_1
# 828 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 829 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 830 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 831 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 832 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinAnthonyC_1
# 841 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinAnthonyC_2
# 851 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 852 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 853 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 854 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 855 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 856 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_2
# 857 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 858 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 859 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 860 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 861 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov2
# 862 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 863 "data/maps/IoniaCity/scripts.pory"
	removeobject AnthonyIonia
# 864 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm AnthonyIonia, 0, 0
# 865 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 866 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 867 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 868 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinAnthonyC_1:
# 833 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 834 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 835 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 836 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 837 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 838 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 839 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return

TwinAnthonyC_2:
# 842 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 843 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 844 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 845 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 846 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 847 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 848 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return


TwinEgyptD::
# 873 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_0
# 874 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 875 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 876 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 877 "data/maps/IoniaCity/scripts.pory"
	addobject EgyptIonia
# 878 "data/maps/IoniaCity/scripts.pory"
	setobjectxy EgyptIonia, 26, 26
# 879 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov1
# 880 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 881 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 882 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 883 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 884 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_1
# 885 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 886 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 887 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 888 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 889 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinEgyptD_1
# 898 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinEgyptD_2
# 908 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 909 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 910 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 911 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 912 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 913 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_4
# 916 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 917 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 918 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 919 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 920 "data/maps/IoniaCity/scripts.pory"
	applymovement EgyptIonia, ICEgyptmov2
# 921 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 922 "data/maps/IoniaCity/scripts.pory"
	removeobject EgyptIonia
# 923 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm EgyptIonia, 0, 0
# 924 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 925 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 926 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 927 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinEgyptD_1:
# 890 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 891 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 892 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 893 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 894 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 895 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 896 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return

TwinEgyptD_2:
# 899 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 900 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 901 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 902 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 903 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 904 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 905 "data/maps/IoniaCity/scripts.pory"
	goto TwinEgyptA2
	return


TwinAnthonyD::
# 932 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_0
# 933 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 934 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 935 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 936 "data/maps/IoniaCity/scripts.pory"
	addobject AnthonyIonia
# 937 "data/maps/IoniaCity/scripts.pory"
	setobjectxy AnthonyIonia, 26, 26
# 938 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov1
# 939 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 940 "data/maps/IoniaCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, ICPlayermov1
# 941 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 942 "data/maps/IoniaCity/scripts.pory"
	delay 30
# 943 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 944 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_1
# 945 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 946 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 947 "data/maps/IoniaCity/scripts.pory"
	delay 50
# 948 "data/maps/IoniaCity/scripts.pory"
	givemon SPECIES_TOTODILE, 10, ITEM_NONE, ITEM_POKE_BALL, NATURE_NAUGHTY, 0, 0, 0, 0, 0, 0, 0, 0, 21, 21, 21, 21, 21, 21, MOVE_SCRATCH, MOVE_LEER, MOVE_WATER_GUN, MOVE_RAGE, 0, 0, 0, 0
# 949 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq TwinAnthonyD_1
# 958 "data/maps/IoniaCity/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq TwinAnthonyD_2
# 968 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_3
# 969 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 970 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 971 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 972 "data/maps/IoniaCity/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 973 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinAnthonyA_Text_2
# 974 "data/maps/IoniaCity/scripts.pory"
	closemessage
# 975 "data/maps/IoniaCity/scripts.pory"
	removefieldmugshot
# 976 "data/maps/IoniaCity/scripts.pory"
	delay 45
# 977 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 978 "data/maps/IoniaCity/scripts.pory"
	applymovement AnthonyIonia, ICAnthonymov2
# 979 "data/maps/IoniaCity/scripts.pory"
	waitmovement 0
# 980 "data/maps/IoniaCity/scripts.pory"
	removeobject AnthonyIonia
# 981 "data/maps/IoniaCity/scripts.pory"
	setobjectxyperm AnthonyIonia, 0, 0
# 982 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 983 "data/maps/IoniaCity/scripts.pory"
	setflag FLAG_HIDE_IONIA_TWINS
# 984 "data/maps/IoniaCity/scripts.pory"
	setvar VAR_IONIA_CITY_STATE, 3
# 985 "data/maps/IoniaCity/scripts.pory"
	releaseall
	return

TwinAnthonyD_1:
# 950 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 951 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 952 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 953 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 954 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 955 "data/maps/IoniaCity/scripts.pory"
	call NicknamePartyMon
# 956 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return

TwinAnthonyD_2:
# 959 "data/maps/IoniaCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 960 "data/maps/IoniaCity/scripts.pory"
	msgbox TwinEgyptA_Text_2
# 961 "data/maps/IoniaCity/scripts.pory"
	waitfanfare
# 962 "data/maps/IoniaCity/scripts.pory"
	waitmessage
# 963 "data/maps/IoniaCity/scripts.pory"
	playbgm MUS_RUSTBORO, FALSE
# 964 "data/maps/IoniaCity/scripts.pory"
	call NicknameBoxMon
# 965 "data/maps/IoniaCity/scripts.pory"
	goto TwinAnthonyA2
	return


# 989 "data/maps/IoniaCity/scripts.pory"
ICEgyptmov1:
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 990 "data/maps/IoniaCity/scripts.pory"
	walk_down
	step_end

# 993 "data/maps/IoniaCity/scripts.pory"
ICEgyptmov2:
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 994 "data/maps/IoniaCity/scripts.pory"
	walk_up
	step_end

# 997 "data/maps/IoniaCity/scripts.pory"
ICAnthonymov1:
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
# 998 "data/maps/IoniaCity/scripts.pory"
	walk_down
	step_end

# 1001 "data/maps/IoniaCity/scripts.pory"
ICAnthonymov2:
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
# 1002 "data/maps/IoniaCity/scripts.pory"
	walk_up
	step_end

# 1005 "data/maps/IoniaCity/scripts.pory"
ICPlayermov1:
# 1006 "data/maps/IoniaCity/scripts.pory"
	face_up
	step_end

# 1009 "data/maps/IoniaCity/scripts.pory"
Ioniamov1:
# 1010 "data/maps/IoniaCity/scripts.pory"
	emote_exclamation_mark
# 1011 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

# 1014 "data/maps/IoniaCity/scripts.pory"
Ioniamov1x:
# 1015 "data/maps/IoniaCity/scripts.pory"
	emote_exclamation_mark
# 1016 "data/maps/IoniaCity/scripts.pory"
	face_left
# 1017 "data/maps/IoniaCity/scripts.pory"
	walk_left
	step_end

# 1020 "data/maps/IoniaCity/scripts.pory"
Ioniamov1xx:
# 1021 "data/maps/IoniaCity/scripts.pory"
	emote_exclamation_mark
# 1022 "data/maps/IoniaCity/scripts.pory"
	face_left
# 1023 "data/maps/IoniaCity/scripts.pory"
	walk_left
# 1023 "data/maps/IoniaCity/scripts.pory"
	walk_left
	step_end

# 1026 "data/maps/IoniaCity/scripts.pory"
Ioniamov2:
# 1027 "data/maps/IoniaCity/scripts.pory"
	face_right
	step_end

# 1030 "data/maps/IoniaCity/scripts.pory"
Ioniamov3:
# 1031 "data/maps/IoniaCity/scripts.pory"
	walk_up
	step_end

# 1034 "data/maps/IoniaCity/scripts.pory"
Ioniamov4:
# 1035 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

# 1038 "data/maps/IoniaCity/scripts.pory"
Ioniamov4x:
# 1039 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 1040 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

# 1043 "data/maps/IoniaCity/scripts.pory"
Ioniamov4xx:
# 1044 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 1044 "data/maps/IoniaCity/scripts.pory"
	walk_right
# 1045 "data/maps/IoniaCity/scripts.pory"
	face_left
	step_end

OnTransitionIoniaCity_Text_0:
# 18 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Hello again!\nDid you manage to defeat Zaph?\pOh, that is quite the lustrous Gym\nBadge, is it not? Beautiful!\pDoes this imply that Zaph is in a mood\nto talk with me? I've traveled so far-$"

OnTransitionIoniaCity_Text_1:
# 22 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}???: And what do we have here?$"

OnTransitionIoniaCity_Text_2:
# 36 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}I spy the Trainer who jeopardized our\noperation at the Power Plant.\pAnd just my luck, I also found the heir\nto the Cullinan Fortune!$"

OnTransitionIoniaCity_Text_3:
# 41 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Y-You know who I am?$"

OnTransitionIoniaCity_Text_4:
# 46 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}???: But of course!\nIt IS my mission to dispose of you.\pWe can't allow someone as important\nas you to keep running around like this.$"

OnTransitionIoniaCity_Text_5:
# 50 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Let's get out of here\n{COLOR GREEN}{PLAYER}{COLOR RED}!$"

OnTransitionIoniaCity_Text_6:
# 61 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}???: Shall we make this quick?\nDuskno-$"

OnTransitionIoniaCity_Text_7:
# 71 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}???: Yes, what is it now Fia?$"

OnTransitionIoniaCity_Text_8:
# 75 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Fia: Missos, are you done with your\nmission just yet?\pHer Grace is requesting your presence\nback at the home base.$"

OnTransitionIoniaCity_Text_9:
# 79 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: In a bit, I have a few loose\nends to tie up.\pI will dispose of the heir to the\nCullinan Estate and the Trainer\lwho humiliated you.$"

OnTransitionIoniaCity_Text_10:
# 83 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Fia: Missos, let them be!\nThat is not in your orders!\pMiss Katelyn likely knows nothing, and\n{COLOR GREEN}{PLAYER}{COLOR RED} won fair and square.\pThe mission was still successful\nregardless of their intrusion.\pWhat would Her Grace say if she found\nout you acted out of line!$"

OnTransitionIoniaCity_Text_11:
# 87 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: Sigh... Very well.\nI'm heading back to base.$"

OnTransitionIoniaCity_Text_12:
# 96 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}As if I care what that woman had to say.\nNow, where were we?$"

OnTransitionIoniaCity_Text_13:
# 101 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Missos…\nWhere have I heard that name before?\p...\nWait a minute, you're the-$"

OnTransitionIoniaCity_Text_14:
# 106 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: The reason for your\ndisappearance, yes.\pNow, no more bloody interruptions!\nDusknoir, your know what to do.$"

OnTransitionIoniaCity_Text_15:
# 117 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: {COLOR GREEN}{PLAYER}{COLOR RED}!\nWhat are you doing?\pWe must escape!$"

OnTransitionIoniaCity_Text_16:
# 122 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: Oh? You're approaching me?\pInstead of running away, you're coming\nright to me?\pI see, you wish to do battle.\nHehehe… Very well…\pYou do not understand what you have\njust gotten yourself into.\pI am nothing like the pathetic woman\nthat you and Sparky faced.$"

OnTransitionIoniaCity_Text_17:
# 134 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Run, {COLOR GREEN}{PLAYER}{COLOR RED}!$"

OnTransitionIoniaCity_Text_18:
# 139 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: Dusknoir! End them!$"

OnTransitionIoniaCity_Text_19:
# 148 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: EEEK!$"

OnTransitionIoniaCity_Text_20:
# 163 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Missos: Enjoy your eternal rest.\pThe nightmares will strip away any of\nyour willpower that remains.$"

IoniaCity_EventScript_Sign1_Text_0:
# 227 "data/maps/IoniaCity/scripts.pory"
	.string "Ionia City Pokémon Gym\pLeader: Zaph\nThe Lightning Warrior$"

IoniaCity_EventScript_Sign2_Text_0:
# 232 "data/maps/IoniaCity/scripts.pory"
	.string "Power Plant Ahead$"

IoniaCity_EventScript_Sign3_Text_0:
# 237 "data/maps/IoniaCity/scripts.pory"
	.string "Ionia General Hospital\nActually for humans!$"

IoniaCity_EventScript_Sign4_Text_0:
# 242 "data/maps/IoniaCity/scripts.pory"
	.string "Ionia City\nThe Shining Light of Nexar$"

IoniaCity_EventScript_Sign5_Text_0:
# 247 "data/maps/IoniaCity/scripts.pory"
	.string "Ionia Park\nNo littering!$"

IoniaCity_EventScript_Sign6_Text_0:
# 252 "data/maps/IoniaCity/scripts.pory"
	.string "Ionia City Trainer's School$"

IoniaCity_EventScript_Sign7_Text_0:
# 257 "data/maps/IoniaCity/scripts.pory"
	.string "Zaph and Maggie's Household$"

IoniaCity_EventScript_Man1_Text_0:
# 264 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}A lot of Trainers gather around the\nPower Plant to train.$"

IoniaCity_EventScript_Girl1_Text_0:
# 271 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}This city is famous for two things:\nThe Power Plant and Zaph.$"

IoniaCity_EventScript_Man2_Text_0:
# 278 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}I saw some weirdos hanging out around\nthe Power Plant.\pI hope they don't come anywhere near\nmy house…$"

IoniaCity_EventScript_Girl2_Text_0:
# 285 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}I love flowers!$"

IoniaCity_EventScript_Man3_Text_0:
# 292 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}I finally have a girlfriend!\nAren't I cool?$"

IoniaCity_EventScript_Girl3_Text_0:
# 299 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}We have one hour left.\nAnd touching me will cost extra!$"

IoniaCity_EventScript_Man4_Text_0:
# 306 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Our Gym Leader Zaph and his older sis,\nMaggie, live here at this house.\pI'm guarding his home while he's away\ndoing super-cool Zaph stuff!\pWell no, he doesn't pay me…\nOr even knows I'm here, but still!\pGet out of here!$"

IoniaCity_EventScript_Man5_Text_0:
# 313 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}I'm sorry, our Aegis Ruins tours are\ncancelled until further notice.\pPlease come again at a later time.$"

IoniaCity_EventScript_Katelyn1_Text_0:
# 323 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: Oh, hello again!\nI'm so glad that you are safe!\pWhat you and Zaph did at the Power\nPlant is all over the news!\pYou must be quite skilled as a Trainer\nto pull that off!\pAs for Zaph, I actually wanted to\nspeak with him, but he ignored me…\pI take it that you would like to face\nhim in a battle, then?\pPerhaps if you battle him, it would\nput him in a better mood…\pBefore anything else, would it be\nalright if we had a quick battle?\pI would like to see how well I can\nmeasure up to someone like you!$"

IoniaCity_EventScript_Katelyn1_Text_1:
# 330 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Oh dear, you are really powerful!\pIt seems that the distance I have\ntraveled was not quite enough…\pNever mind that, you are more than\nready to face Zaph!\pEven then, you may need some extra\nassistance, so please take these!$"

IoniaCity_EventScript_Katelyn1_Text_2:
# 336 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}I hope that all goes well!\nI will be taking my leave now. Ta-ta!$"

IoniaCity_EventScript_Katelyn1_Text_3:
# 351 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Katelyn: It seems that Zaph has yet\nto return.\pHe must still be occupied by the\nincident at the Power Plant.$"

IoniaCity_EventScript_Katelyn1_Text_4:
# 359 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}???: I hope he returns quickly…\nOh, get a grip, Katelyn!\pYou didn't journey across half of the\nRegion to just give up now…$"

IoniaCity_EventScript_Katelyn1_Text_5:
# 369 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Oh! My apologies!\nI did not hear you approach.\pI assume you would like to challenge\nthe Gym, correct?\pUnfortunately, the Gym Leader was\ncalled up to the Power Plant.\pIt appears to be some kind of\nemergency call.\pHe has been gone for a while, and I am\nnot sure when he will return.\pThat being said, Zaph is a very brave\nand skilled trainer.\pI have faith he will return soon!$"

NicknamePartyMon_Text_0:
# 466 "data/maps/IoniaCity/scripts.pory"
	.string "Do you want to give a nickname\nto this Totodile?$"

TwinEgyptA_Text_0:
# 484 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}???: Hey Bro! Wait up!$"

TwinEgyptA_Text_1:
# 495 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Egypt: Finally, I've been looking all\nover for you!\pI finally managed to get Professor\nAspen's PC to work!\pIt wasn't easy, and I'm scarred for life\nby some of the stuff I saw…\pBut hey! We finally got your starter\nPokémon here for you!\pTotodile! Meet {COLOR GREEN}{PLAYER}{COLOR RED}!$"

TwinEgyptA_Text_2:
# 502 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} received the Totodile!$"

TwinEgyptA_Text_3:
# 519 "data/maps/IoniaCity/scripts.pory"
	.string "There's no more room for Pokémon!\pThe Pokémon Boxes are full and can't\naccept any more!$"

TwinEgyptA_Text_4:
# 524 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Huh? You don't have any room for it?\nLiterally how though?\pWell, it was the last one after the\nProfessor let me take my pick.\pI picked Treecko, ehehehe…\pSo, what's your next move?\nI can see that shiny new Gym Badge!\pYou're taking on the Nexar League\nwith Alex, aren't you?\pI saw him earlier!\nHe was heading toward the Aegis Ruins.\p You might be able to catch up with\nhim if you hurry up!\pAs for me, I'm going to stay behind and\nhelp Professor Aspen.\pHe has a lot of issues to work out, so\nI'm gonna help him get better.\pI'll be the first person in his life to\nnever give up on him!\pPlus, with Jonathan's help, I'll get\nfirsthand experience in a lab.\p My dream of becoming a Pokémon\nProfessor will start to come true!\pWell, I'll see you around, bro!\nGood luck with everything!\pAnd say hi to lil' Bunbun for me!\pOh yeah, come by the Lab later to pick\nup your Totodile!$"

TwinEgyptA2_Text_0:
# 545 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR RED}Doesn't it look happy to meet you?\nI'm sure you two will get along.\pSadly, it was the last one after the\nProfessor let me take my pick.\pI picked Treecko, ehehehe…\pSo, what's your next move?\nI can see that shiny new Gym Badge!\pYou're taking on the Nexar League\nwith Alex, aren't you?\pI saw him earlier!\nHe was heading toward the Aegis Ruins.\pYou might be able to catch up with him\nif you hurry up!\pAs for me, I'm going to stay behind and\nhelp Professor Aspen.\pHe has a lot of issues to work out, so\nI'm gonna help him get better.\pI'll be the first person in his life to\nnever give up on him!\pPlus, with Jonathan's help, I'll get\nfirsthand experience in a lab.\pMy dream of becoming a Pokémon\nProfessor will start to come true!\pWell, I'll see you around, bro!\nGood luck with everything!\pOh, and say hi to lil' Bunbun for me!$"

TwinAnthonyA_Text_0:
# 562 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}???: Yo Sis! Wait up!$"

TwinAnthonyA_Text_1:
# 574 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Anthony: Finally, I've been looking all\nover for ya, sis!\pI finally got Professor Aspen's PC to\nwork, and it wasn't easy!\pHe had way too much weird stuff on\nthere, just like Alex…\pBut hey, we finally got your Starter\nPokémon here for you!\pC'mon Totodile, meet {COLOR GREEN}{PLAYER}{COLOR BLUE}!$"

TwinAnthonyA_Text_2:
# 603 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}Huh? You don't have any room for it?\nLiterally how though?\pWell, it was actually the last one after\nthe Professor let me pick.\pI picked Treecko, sorry if ya wanted\nthat one, haha!\pSo what's your next move?\nI see you got a shiny new Gym Badge!\pYou're going to take on the Nexar\nLeague with Alex, huh?\pI saw him earlier, he was going to check\nout the Aegis Ruins.\pIf you go now, you should be able to\ncatch up with him.\pAs for me, I'm going to stay behind and\nhelp the Professor.\pDude has too many issues, so I'm going\nto help him get it together.\pDon't worry, Jonathan will help.\nPlus, I get to work in a lab!\pI've always wanted to be a Pokémon\nProfessor, so this'll help a lot!\pWell, I'll see ya around, sis.\nGood luck with everything!\pOh yeah, swing by the Lab later to pick\nup your Totodile.$"

TwinAnthonyA2_Text_0:
# 622 "data/maps/IoniaCity/scripts.pory"
	.string "{COLOR BLUE}It looks pretty happy to meet ya!\nI'm sure you two will get along.\pIt was actually the last one after the\nProfessor let me pick one.\pI picked Treecko, sorry if ya wanted\nthat one, haha!\pSo what's your next move?\nI see you got a shiny new Gym Badge!\pYou're going to take on the Nexar\nLeague with Alex, huh?\pI saw him earlier, he was going to check\nout the Aegis Ruins.\pIf you go now, you should be able to\ncatch up with him.\pAs for me, I'm going to stay behind and\nhelp the Professor.\pDude has too many issues, so I'm going\nto help him get it together.\pDon't worry, Jonathan will help.\nPlus, I get to work in a lab!\pI've always wanted to be a Pokémon\nProfessor, so this'll help a lot!\pWell, I'll see ya around, sis.\nGood luck with everything!$"

ICMissoslose::
# 180 "data/maps/IoniaCity/scripts.pory"
	.string "Truly pathetic…$"

IoniaKateDefeated::
# 378 "data/maps/IoniaCity/scripts.pory"
	.string "My goodness!$"
