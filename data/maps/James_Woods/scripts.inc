James_Woods_MapScripts::
# 2 "data/maps/James_Woods/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JamesWoodsOnTransition
	.byte 0


JamesWoodsOnTransition::
# 6 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_LANDMARK_FLOWER_SHOP
# 7 "data/maps/James_Woods/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 4
	goto_if_eq JamesWoodsOnTransition_1
# 27 "data/maps/James_Woods/scripts.pory"
	compare VAR_ASPEN_LAB_EVENT, 3
	goto_if_eq JamesWoodsOnTransition_2
# 49 "data/maps/James_Woods/scripts.pory"
	compare VAR_ASPEN_EVENTS, 5
	goto_if_eq JamesWoodsOnTransition_3
	return

JamesWoodsOnTransition_1:
# 8 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 9 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 10 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER1
# 11 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER2
# 12 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER3
# 13 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER4
# 14 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER5
# 15 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER6
# 16 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL1
# 17 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL2
# 18 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER1, 23, 15
# 19 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER2, 38, 24
# 20 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER3, 4, 21
# 21 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER4, 37, 53
# 22 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER5, 15, 51
# 23 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER6, 16, 59
# 24 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL1, 45, 26
# 25 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL2, 45, 50
	return

JamesWoodsOnTransition_2:
# 28 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_ALEX
# 29 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_LYON
# 30 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 21, 36
# 31 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 22, 46
# 32 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER1
# 33 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER2
# 34 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER3
# 35 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER4
# 36 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER5
# 37 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER6
# 38 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL1
# 39 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL2
# 40 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER1, 23, 15
# 41 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER2, 38, 24
# 42 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER3, 4, 21
# 43 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER4, 37, 53
# 44 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER5, 15, 51
# 45 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER6, 16, 59
# 46 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL1, 45, 26
# 47 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL2, 45, 50
	return

JamesWoodsOnTransition_3:
# 50 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER1
# 51 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER2
# 52 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER3
# 53 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER4
# 54 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER5
# 55 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_TRAINER6
# 56 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL1
# 57 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BALL2
# 58 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER1, 23, 15
# 59 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER2, 38, 24
# 60 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER3, 4, 21
# 61 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER4, 37, 53
# 62 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER5, 15, 51
# 63 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_TRAINER6, 16, 59
# 64 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL1, 45, 26
# 65 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_BALL2, 45, 50
	return


JamesWoods_EventScript_Sign1::
# 71 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Sign1_Text_0
# 72 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_Sign2::
# 76 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Sign2_Text_0
# 77 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_Sign3::
# 81 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Sign3_Text_0
# 82 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_Sign4::
# 86 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Sign4_Text_0
# 87 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_AustinYoungster::
# 91 "data/maps/James_Woods/scripts.pory"
	lock
# 92 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 93 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 94 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_AustinCatcher2::
# 98 "data/maps/James_Woods/scripts.pory"
	lock
# 99 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 100 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 101 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_AustinCatcher1::
# 105 "data/maps/James_Woods/scripts.pory"
	lock
# 106 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 107 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher1_Text_0
# 108 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_YoungsterTile1::
# 112 "data/maps/James_Woods/scripts.pory"
	lockall
# 113 "data/maps/James_Woods/scripts.pory"
	playse 21
# 114 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov1
# 115 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 116 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_YoungsterTile1_Text_0
# 117 "data/maps/James_Woods/scripts.pory"
	closemessage
# 118 "data/maps/James_Woods/scripts.pory"
	delay 30
# 119 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov2
# 120 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov2
# 121 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 122 "data/maps/James_Woods/scripts.pory"
	delay 15
# 123 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov3
# 124 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 125 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile2::
# 129 "data/maps/James_Woods/scripts.pory"
	lockall
# 130 "data/maps/James_Woods/scripts.pory"
	playse 21
# 131 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov1x
# 132 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 133 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_YoungsterTile1_Text_0
# 134 "data/maps/James_Woods/scripts.pory"
	closemessage
# 135 "data/maps/James_Woods/scripts.pory"
	delay 30
# 136 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov2x
# 137 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov2x
# 138 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 139 "data/maps/James_Woods/scripts.pory"
	delay 15
# 140 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov3x
# 141 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 142 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile1::
# 146 "data/maps/James_Woods/scripts.pory"
	lockall
# 147 "data/maps/James_Woods/scripts.pory"
	playse 21
# 148 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov4
# 149 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 150 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_BugCatcherTile1_Text_0
# 151 "data/maps/James_Woods/scripts.pory"
	closemessage
# 152 "data/maps/James_Woods/scripts.pory"
	delay 30
# 153 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov5
# 154 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov5
# 155 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 156 "data/maps/James_Woods/scripts.pory"
	delay 15
# 157 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov6
# 158 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 159 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile2::
# 163 "data/maps/James_Woods/scripts.pory"
	lockall
# 164 "data/maps/James_Woods/scripts.pory"
	playse 21
# 165 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov4x
# 166 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 167 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_BugCatcherTile1_Text_0
# 168 "data/maps/James_Woods/scripts.pory"
	closemessage
# 169 "data/maps/James_Woods/scripts.pory"
	delay 30
# 170 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov5x
# 171 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 172 "data/maps/James_Woods/scripts.pory"
	delay 15
# 173 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile3::
# 177 "data/maps/James_Woods/scripts.pory"
	lockall
# 178 "data/maps/James_Woods/scripts.pory"
	playse 21
# 179 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov7
# 180 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 181 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 182 "data/maps/James_Woods/scripts.pory"
	closemessage
# 183 "data/maps/James_Woods/scripts.pory"
	delay 30
# 184 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov8
# 185 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov8
# 186 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 187 "data/maps/James_Woods/scripts.pory"
	delay 15
# 188 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov9
# 189 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 190 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile4::
# 194 "data/maps/James_Woods/scripts.pory"
	lockall
# 195 "data/maps/James_Woods/scripts.pory"
	playse 21
# 196 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov7x
# 197 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 198 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 199 "data/maps/James_Woods/scripts.pory"
	closemessage
# 200 "data/maps/James_Woods/scripts.pory"
	delay 30
# 201 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov10
# 202 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 203 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov8x
# 204 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov8x
# 205 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 206 "data/maps/James_Woods/scripts.pory"
	delay 15
# 207 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov9x
# 208 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 209 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile3::
# 213 "data/maps/James_Woods/scripts.pory"
	lockall
# 214 "data/maps/James_Woods/scripts.pory"
	playse 21
# 215 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov11
# 216 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 217 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 218 "data/maps/James_Woods/scripts.pory"
	closemessage
# 219 "data/maps/James_Woods/scripts.pory"
	delay 30
# 220 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov12
# 221 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 222 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov13
# 223 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov13
# 224 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 225 "data/maps/James_Woods/scripts.pory"
	delay 15
# 226 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov14
# 227 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 228 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile4::
# 232 "data/maps/James_Woods/scripts.pory"
	lockall
# 233 "data/maps/James_Woods/scripts.pory"
	playse 21
# 234 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov11x
# 235 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 236 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 237 "data/maps/James_Woods/scripts.pory"
	closemessage
# 238 "data/maps/James_Woods/scripts.pory"
	delay 30
# 239 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov13x
# 240 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov13x
# 241 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 242 "data/maps/James_Woods/scripts.pory"
	delay 15
# 243 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov14x
# 244 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 245 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary1A::
# 249 "data/maps/James_Woods/scripts.pory"
	lockall
# 250 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER1
# 251 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN1
# 252 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER1
# 253 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 254 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER1, 34, 16
# 255 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN1, 35, 19
# 256 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER1, 36, 16
# 257 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 258 "data/maps/James_Woods/scripts.pory"
	delay 30
# 259 "data/maps/James_Woods/scripts.pory"
	special SpawnCameraObject
# 260 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov1
# 261 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 262 "data/maps/James_Woods/scripts.pory"
	delay 30
# 263 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_0
# 264 "data/maps/James_Woods/scripts.pory"
	closemessage
# 265 "data/maps/James_Woods/scripts.pory"
	delay 30
# 266 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov1
# 267 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 268 "data/maps/James_Woods/scripts.pory"
	playse 61
# 269 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 270 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 17
# 271 "data/maps/James_Woods/scripts.pory"
	playse 60
# 272 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTINBALL, JWBallmov1
# 273 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 274 "data/maps/James_Woods/scripts.pory"
	playse 49
# 275 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 276 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 51, 8
# 277 "data/maps/James_Woods/scripts.pory"
	delay 40
# 278 "data/maps/James_Woods/scripts.pory"
	playse 15
# 279 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 280 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 281 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 282 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 51, 8
# 283 "data/maps/James_Woods/scripts.pory"
	delay 15
# 284 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 285 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 286 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY1, JWBunearymov1
# 287 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 288 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 289 "data/maps/James_Woods/scripts.pory"
	delay 15
# 290 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_1
# 291 "data/maps/James_Woods/scripts.pory"
	closemessage
# 292 "data/maps/James_Woods/scripts.pory"
	delay 30
# 293 "data/maps/James_Woods/scripts.pory"
	playse 21
# 294 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER1, JWAustinmov2
# 295 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov2
# 296 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER1, JWAustinmov2
# 297 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 298 "data/maps/James_Woods/scripts.pory"
	delay 15
# 299 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_2
# 300 "data/maps/James_Woods/scripts.pory"
	closemessage
# 301 "data/maps/James_Woods/scripts.pory"
	delay 20
# 302 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_3
# 303 "data/maps/James_Woods/scripts.pory"
	closemessage
# 304 "data/maps/James_Woods/scripts.pory"
	delay 15
# 305 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_4
# 306 "data/maps/James_Woods/scripts.pory"
	closemessage
# 307 "data/maps/James_Woods/scripts.pory"
	delay 20
# 308 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_5
# 309 "data/maps/James_Woods/scripts.pory"
	closemessage
# 310 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 311 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER1
# 312 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN1
# 313 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER1
# 314 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 315 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 16
# 316 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 317 "data/maps/James_Woods/scripts.pory"
	delay 45
# 318 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov2
# 319 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 320 "data/maps/James_Woods/scripts.pory"
	special RemoveCameraObject
# 321 "data/maps/James_Woods/scripts.pory"
	delay 20
# 322 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWBallGrab
# 323 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 324 "data/maps/James_Woods/scripts.pory"
	delay 15
# 325 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 326 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_6
# 327 "data/maps/James_Woods/scripts.pory"
	closemessage
# 328 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 329 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 330 "data/maps/James_Woods/scripts.pory"
	additem ITEM_SPARE_POKEBALL, 1
# 331 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE
# 332 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 5
# 333 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary1B::
# 337 "data/maps/James_Woods/scripts.pory"
	lockall
# 338 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER1
# 339 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN1
# 340 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER1
# 341 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 342 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER1, 34, 16
# 343 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN1, 35, 19
# 344 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER1, 36, 16
# 345 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 346 "data/maps/James_Woods/scripts.pory"
	delay 30
# 347 "data/maps/James_Woods/scripts.pory"
	special SpawnCameraObject
# 348 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov1
# 349 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 350 "data/maps/James_Woods/scripts.pory"
	delay 30
# 351 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_0
# 352 "data/maps/James_Woods/scripts.pory"
	closemessage
# 353 "data/maps/James_Woods/scripts.pory"
	delay 30
# 354 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov1
# 355 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 356 "data/maps/James_Woods/scripts.pory"
	playse 61
# 357 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 358 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 17
# 359 "data/maps/James_Woods/scripts.pory"
	playse 60
# 360 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTINBALL, JWBallmov1
# 361 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 362 "data/maps/James_Woods/scripts.pory"
	playse 49
# 363 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 364 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 51, 8
# 365 "data/maps/James_Woods/scripts.pory"
	delay 40
# 366 "data/maps/James_Woods/scripts.pory"
	playse 15
# 367 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 368 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 369 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 370 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 51, 8
# 371 "data/maps/James_Woods/scripts.pory"
	delay 15
# 372 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 373 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 374 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY1, JWBunearymov1
# 375 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 376 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 377 "data/maps/James_Woods/scripts.pory"
	delay 15
# 378 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_1
# 379 "data/maps/James_Woods/scripts.pory"
	closemessage
# 380 "data/maps/James_Woods/scripts.pory"
	delay 30
# 381 "data/maps/James_Woods/scripts.pory"
	playse 21
# 382 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER1, JWAustinmov2
# 383 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov2
# 384 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER1, JWAustinmov2
# 385 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 386 "data/maps/James_Woods/scripts.pory"
	delay 15
# 387 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_2
# 388 "data/maps/James_Woods/scripts.pory"
	closemessage
# 389 "data/maps/James_Woods/scripts.pory"
	delay 20
# 390 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_3
# 391 "data/maps/James_Woods/scripts.pory"
	closemessage
# 392 "data/maps/James_Woods/scripts.pory"
	delay 15
# 393 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_4
# 394 "data/maps/James_Woods/scripts.pory"
	closemessage
# 395 "data/maps/James_Woods/scripts.pory"
	delay 20
# 396 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_5
# 397 "data/maps/James_Woods/scripts.pory"
	closemessage
# 398 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 399 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER1
# 400 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN1
# 401 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER1
# 402 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 403 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 16
# 404 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 405 "data/maps/James_Woods/scripts.pory"
	delay 45
# 406 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov2
# 407 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 408 "data/maps/James_Woods/scripts.pory"
	special RemoveCameraObject
# 409 "data/maps/James_Woods/scripts.pory"
	delay 20
# 410 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWBallGrabx
# 411 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 412 "data/maps/James_Woods/scripts.pory"
	delay 15
# 413 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 414 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_6
# 415 "data/maps/James_Woods/scripts.pory"
	closemessage
# 416 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 417 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 418 "data/maps/James_Woods/scripts.pory"
	additem ITEM_SPARE_POKEBALL, 1
# 419 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE
# 420 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 5
# 421 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary2A::
# 425 "data/maps/James_Woods/scripts.pory"
	lockall
# 426 "data/maps/James_Woods/scripts.pory"
	playse 21
# 427 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov
# 428 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 429 "data/maps/James_Woods/scripts.pory"
	delay 30
# 430 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 431 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 432 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY2, JWBunearymov2
# 433 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 434 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY2
# 435 "data/maps/James_Woods/scripts.pory"
	delay 15
# 436 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary2A_Text_0
# 437 "data/maps/James_Woods/scripts.pory"
	closemessage
# 438 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 439 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN2
# 440 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER2
# 441 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER2
# 442 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 443 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE2
# 444 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 6
# 445 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary2B::
# 449 "data/maps/James_Woods/scripts.pory"
	lockall
# 450 "data/maps/James_Woods/scripts.pory"
	playse 21
# 451 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov
# 452 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 453 "data/maps/James_Woods/scripts.pory"
	delay 30
# 454 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 455 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 456 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2
# 457 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY2, JWBunearymov2
# 458 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 459 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY2
# 460 "data/maps/James_Woods/scripts.pory"
	delay 15
# 461 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary2A_Text_0
# 462 "data/maps/James_Woods/scripts.pory"
	closemessage
# 463 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 464 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN2
# 465 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER2
# 466 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER2
# 467 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 468 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE2
# 469 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 6
# 470 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary3A::
# 474 "data/maps/James_Woods/scripts.pory"
	lockall
# 475 "data/maps/James_Woods/scripts.pory"
	delay 30
# 476 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 477 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 478 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY3, JWBunearymov3
# 479 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 480 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY3
# 481 "data/maps/James_Woods/scripts.pory"
	delay 20
# 482 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_0
# 483 "data/maps/James_Woods/scripts.pory"
	closemessage
# 484 "data/maps/James_Woods/scripts.pory"
	delay 20
# 485 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER5
# 486 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER5, 21, 31
# 487 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER5, JWBugCatchermov
# 488 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 489 "data/maps/James_Woods/scripts.pory"
	delay 20
# 490 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_1
# 491 "data/maps/James_Woods/scripts.pory"
	closemessage
# 492 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER3, JWGangmov
# 493 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN3, JWGangmov
# 494 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 495 "data/maps/James_Woods/scripts.pory"
	delay 15
# 496 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_2
# 497 "data/maps/James_Woods/scripts.pory"
	closemessage
# 498 "data/maps/James_Woods/scripts.pory"
	delay 30
# 499 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 500 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER3
# 501 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER5
# 502 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER3
# 503 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN3
# 504 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 505 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE3
# 506 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 7
# 507 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary3B::
# 511 "data/maps/James_Woods/scripts.pory"
	lockall
# 512 "data/maps/James_Woods/scripts.pory"
	delay 30
# 513 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 514 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 515 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY3, JWBunearymov3
# 516 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 517 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY3
# 518 "data/maps/James_Woods/scripts.pory"
	delay 20
# 519 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_0
# 520 "data/maps/James_Woods/scripts.pory"
	closemessage
# 521 "data/maps/James_Woods/scripts.pory"
	delay 20
# 522 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER5
# 523 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER5, 20, 31
# 524 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER5, JWBugCatchermov
# 525 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 526 "data/maps/James_Woods/scripts.pory"
	delay 20
# 527 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_1
# 528 "data/maps/James_Woods/scripts.pory"
	closemessage
# 529 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER3, JWGangmov
# 530 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN3, JWGangmov
# 531 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 532 "data/maps/James_Woods/scripts.pory"
	delay 15
# 533 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_2
# 534 "data/maps/James_Woods/scripts.pory"
	closemessage
# 535 "data/maps/James_Woods/scripts.pory"
	delay 30
# 536 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 537 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER3
# 538 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER5
# 539 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER3
# 540 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN3
# 541 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 542 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE3
# 543 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 7
# 544 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary4A::
# 548 "data/maps/James_Woods/scripts.pory"
	lockall
# 549 "data/maps/James_Woods/scripts.pory"
	delay 30
# 550 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 551 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 552 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY4, JWBunearymov4
# 553 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 554 "data/maps/James_Woods/scripts.pory"
	delay 15
# 555 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2x
# 556 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 557 "data/maps/James_Woods/scripts.pory"
	delay 15
# 558 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN4
# 559 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN4, 33, 54
# 560 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER4
# 561 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER4, 33, 53
# 562 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER4
# 563 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER4, 33, 55
# 564 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWYoungstermov
# 565 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov3
# 566 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov3
# 567 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 568 "data/maps/James_Woods/scripts.pory"
	playse 21
# 569 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov3
# 570 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 571 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_0
# 572 "data/maps/James_Woods/scripts.pory"
	closemessage
# 573 "data/maps/James_Woods/scripts.pory"
	delay 15
# 574 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov4
# 575 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 576 "data/maps/James_Woods/scripts.pory"
	delay 15
# 577 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWAustinmov4
# 578 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov4
# 579 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov4
# 580 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 581 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_1
# 582 "data/maps/James_Woods/scripts.pory"
	closemessage
# 583 "data/maps/James_Woods/scripts.pory"
	delay 15
# 584 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 585 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 586 "data/maps/James_Woods/scripts.pory"
	delay 15
# 587 "data/maps/James_Woods/scripts.pory"
	playse 54
# 588 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 589 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 53, 7
# 590 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 591 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 45, 49
# 592 "data/maps/James_Woods/scripts.pory"
	delay 30
# 593 "data/maps/James_Woods/scripts.pory"
	playse 21
# 594 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov5
# 595 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 596 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 597 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 53, 7
# 598 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_2
# 599 "data/maps/James_Woods/scripts.pory"
	closemessage
# 600 "data/maps/James_Woods/scripts.pory"
	delay 30
# 601 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov6
# 602 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 603 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_3
# 604 "data/maps/James_Woods/scripts.pory"
	closemessage
# 605 "data/maps/James_Woods/scripts.pory"
	createmon 0, 0, SPECIES_BUNEARY_STARTER, 5, ITEM_NONE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POUND, 0, 0, 0, 1, 0, 0, 0
# 606 "data/maps/James_Woods/scripts.pory"
	delay 15
# 607 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AustinDefeated
# 608 "data/maps/James_Woods/scripts.pory"
	delay 30
# 609 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_4
# 610 "data/maps/James_Woods/scripts.pory"
	closemessage
# 611 "data/maps/James_Woods/scripts.pory"
	delay 20
# 612 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov5
# 613 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 614 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_5
# 615 "data/maps/James_Woods/scripts.pory"
	closemessage
# 616 "data/maps/James_Woods/scripts.pory"
	delay 20
# 617 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_6
# 618 "data/maps/James_Woods/scripts.pory"
	closemessage
# 619 "data/maps/James_Woods/scripts.pory"
	delay 15
# 620 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_7
# 621 "data/maps/James_Woods/scripts.pory"
	closemessage
# 622 "data/maps/James_Woods/scripts.pory"
	delay 15
# 623 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_8
# 624 "data/maps/James_Woods/scripts.pory"
	closemessage
# 625 "data/maps/James_Woods/scripts.pory"
	delay 15
# 626 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 627 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER4
# 628 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER4
# 629 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 630 "data/maps/James_Woods/scripts.pory"
	delay 15
# 631 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_9
# 632 "data/maps/James_Woods/scripts.pory"
	closemessage
# 633 "data/maps/James_Woods/scripts.pory"
	delay 15
# 634 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov6
# 635 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 636 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_10
# 637 "data/maps/James_Woods/scripts.pory"
	closemessage
# 638 "data/maps/James_Woods/scripts.pory"
	delay 15
# 639 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 640 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN4
# 641 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY4
# 642 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 45, 49
# 643 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 644 "data/maps/James_Woods/scripts.pory"
	delay 15
# 645 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAustinmov6
# 646 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 647 "data/maps/James_Woods/scripts.pory"
	delay 15
# 648 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 649 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 650 "data/maps/James_Woods/scripts.pory"
	delay 15
# 651 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_11
# 652 "data/maps/James_Woods/scripts.pory"
	closemessage
# 653 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 654 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 655 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 656 "data/maps/James_Woods/scripts.pory"
	delay 15
# 657 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_12
# 658 "data/maps/James_Woods/scripts.pory"
	closemessage
# 659 "data/maps/James_Woods/scripts.pory"
	special HealPlayerParty
# 660 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEBALL, 1
# 661 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 8
# 662 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE4
# 663 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_BUNEARY_OBTAINED
# 664 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 665 "data/maps/James_Woods/scripts.pory"
	clearflag FLAG_NO_ENCOUNTER
# 666 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary4B::
# 670 "data/maps/James_Woods/scripts.pory"
	lockall
# 671 "data/maps/James_Woods/scripts.pory"
	delay 30
# 672 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 673 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 674 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY4, JWBunearymov4
# 675 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 676 "data/maps/James_Woods/scripts.pory"
	delay 15
# 677 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2xx
# 678 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 679 "data/maps/James_Woods/scripts.pory"
	delay 15
# 680 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN4
# 681 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN4, 33, 54
# 682 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER4
# 683 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER4, 33, 53
# 684 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER4
# 685 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER4, 33, 55
# 686 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWYoungstermov
# 687 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov3
# 688 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov3
# 689 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 690 "data/maps/James_Woods/scripts.pory"
	playse 21
# 691 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov3
# 692 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 693 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_0
# 694 "data/maps/James_Woods/scripts.pory"
	closemessage
# 695 "data/maps/James_Woods/scripts.pory"
	delay 15
# 696 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov4
# 697 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 698 "data/maps/James_Woods/scripts.pory"
	delay 15
# 699 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWAustinmov4
# 700 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov4
# 701 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov4
# 702 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 703 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_1
# 704 "data/maps/James_Woods/scripts.pory"
	closemessage
# 705 "data/maps/James_Woods/scripts.pory"
	delay 15
# 706 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 707 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 708 "data/maps/James_Woods/scripts.pory"
	delay 15
# 709 "data/maps/James_Woods/scripts.pory"
	playse 54
# 710 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 711 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 53, 7
# 712 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 713 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 45, 49
# 714 "data/maps/James_Woods/scripts.pory"
	delay 30
# 715 "data/maps/James_Woods/scripts.pory"
	playse 21
# 716 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov5
# 717 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 718 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 719 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 53, 7
# 720 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_2
# 721 "data/maps/James_Woods/scripts.pory"
	closemessage
# 722 "data/maps/James_Woods/scripts.pory"
	delay 30
# 723 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov6
# 724 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 725 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_3
# 726 "data/maps/James_Woods/scripts.pory"
	closemessage
# 727 "data/maps/James_Woods/scripts.pory"
	createmon 0, 0, SPECIES_BUNEARY_STARTER, 5, ITEM_NONE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POUND, 0, 0, 0, 1, 0, 0, 0
# 728 "data/maps/James_Woods/scripts.pory"
	delay 15
# 729 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AustinDefeated
# 730 "data/maps/James_Woods/scripts.pory"
	delay 30
# 731 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_4
# 732 "data/maps/James_Woods/scripts.pory"
	closemessage
# 733 "data/maps/James_Woods/scripts.pory"
	delay 20
# 734 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov5
# 735 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 736 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_5
# 737 "data/maps/James_Woods/scripts.pory"
	closemessage
# 738 "data/maps/James_Woods/scripts.pory"
	delay 20
# 739 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_6
# 740 "data/maps/James_Woods/scripts.pory"
	closemessage
# 741 "data/maps/James_Woods/scripts.pory"
	delay 15
# 742 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_7
# 743 "data/maps/James_Woods/scripts.pory"
	closemessage
# 744 "data/maps/James_Woods/scripts.pory"
	delay 15
# 745 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_8
# 746 "data/maps/James_Woods/scripts.pory"
	closemessage
# 747 "data/maps/James_Woods/scripts.pory"
	delay 15
# 748 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 749 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER4
# 750 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER4
# 751 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 752 "data/maps/James_Woods/scripts.pory"
	delay 15
# 753 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_9
# 754 "data/maps/James_Woods/scripts.pory"
	closemessage
# 755 "data/maps/James_Woods/scripts.pory"
	delay 15
# 756 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov6
# 757 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 758 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_10
# 759 "data/maps/James_Woods/scripts.pory"
	closemessage
# 760 "data/maps/James_Woods/scripts.pory"
	delay 15
# 761 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 762 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN4
# 763 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY4
# 764 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 45, 49
# 765 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 766 "data/maps/James_Woods/scripts.pory"
	delay 15
# 767 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAustinmov6
# 768 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 769 "data/maps/James_Woods/scripts.pory"
	delay 15
# 770 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 771 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 772 "data/maps/James_Woods/scripts.pory"
	delay 15
# 773 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_11
# 774 "data/maps/James_Woods/scripts.pory"
	closemessage
# 775 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 776 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 777 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 778 "data/maps/James_Woods/scripts.pory"
	delay 15
# 779 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_12
# 780 "data/maps/James_Woods/scripts.pory"
	closemessage
# 781 "data/maps/James_Woods/scripts.pory"
	special HealPlayerParty
# 782 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEBALL, 1
# 783 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 8
# 784 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE4
# 785 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_BUNEARY_OBTAINED
# 786 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 787 "data/maps/James_Woods/scripts.pory"
	clearflag FLAG_NO_ENCOUNTER
# 788 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_AlexBattle1::
# 792 "data/maps/James_Woods/scripts.pory"
	lockall
# 793 "data/maps/James_Woods/scripts.pory"
	playse 21
# 794 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov1
# 795 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 796 "data/maps/James_Woods/scripts.pory"
	delay 30
# 797 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov2
# 798 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 799 "data/maps/James_Woods/scripts.pory"
	delay 15
# 800 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 801 "data/maps/James_Woods/scripts.pory"
	delay 15
# 802 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 803 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_0
# 804 "data/maps/James_Woods/scripts.pory"
	closemessage
# 805 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 806 "data/maps/James_Woods/scripts.pory"
	delay 30
# 807 "data/maps/James_Woods/scripts.pory"
	playse 21
# 808 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov3
# 809 "data/maps/James_Woods/scripts.pory"
	delay 20
# 810 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 811 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_1
# 812 "data/maps/James_Woods/scripts.pory"
	closemessage
# 813 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 814 "data/maps/James_Woods/scripts.pory"
	delay 45
# 815 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEDEX, 1
# 816 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 817 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_2
# 818 "data/maps/James_Woods/scripts.pory"
	closemessage
# 819 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 820 "data/maps/James_Woods/scripts.pory"
	delay 45
# 821 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 822 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_3
# 823 "data/maps/James_Woods/scripts.pory"
	closemessage
# 824 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 825 "data/maps/James_Woods/scripts.pory"
	delay 15
# 826 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_TITLE
# 827 "data/maps/James_Woods/scripts.pory"
	delay 60
# 828 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 829 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov4
# 830 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 831 "data/maps/James_Woods/scripts.pory"
	delay 10
# 832 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 833 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_4
# 834 "data/maps/James_Woods/scripts.pory"
	closemessage
# 835 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 836 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov5
# 837 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov5
# 838 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 839 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 840 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_5
# 841 "data/maps/James_Woods/scripts.pory"
	closemessage
# 842 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 843 "data/maps/James_Woods/scripts.pory"
	delay 15
# 844 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 845 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_6
# 846 "data/maps/James_Woods/scripts.pory"
	closemessage
# 847 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 848 "data/maps/James_Woods/scripts.pory"
	delay 15
# 849 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 850 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_7
# 851 "data/maps/James_Woods/scripts.pory"
	closemessage
# 852 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 853 "data/maps/James_Woods/scripts.pory"
	delay 15
# 854 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 855 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_8
# 856 "data/maps/James_Woods/scripts.pory"
	closemessage
# 857 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 858 "data/maps/James_Woods/scripts.pory"
	delay 15
# 859 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 860 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_9
# 861 "data/maps/James_Woods/scripts.pory"
	closemessage
# 862 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 863 "data/maps/James_Woods/scripts.pory"
	delay 15
# 864 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 865 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_10
# 866 "data/maps/James_Woods/scripts.pory"
	closemessage
# 867 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 868 "data/maps/James_Woods/scripts.pory"
	delay 15
# 869 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 870 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_11
# 871 "data/maps/James_Woods/scripts.pory"
	closemessage
# 872 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 873 "data/maps/James_Woods/scripts.pory"
	delay 15
# 874 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 875 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_12
# 876 "data/maps/James_Woods/scripts.pory"
	closemessage
# 877 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 878 "data/maps/James_Woods/scripts.pory"
	delay 30
# 879 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov6
# 880 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 881 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov7
# 882 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov7
# 883 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 884 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_FOLLOW_ME
# 885 "data/maps/James_Woods/scripts.pory"
	delay 45
# 886 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 887 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 52, 3
# 888 "data/maps/James_Woods/scripts.pory"
	delay 45
# 889 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 890 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov8
# 891 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 892 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 893 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_13
# 894 "data/maps/James_Woods/scripts.pory"
	closemessage
# 895 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 896 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AlexDefeated
# 897 "data/maps/James_Woods/scripts.pory"
	delay 45
# 898 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 899 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_14
# 900 "data/maps/James_Woods/scripts.pory"
	closemessage
# 901 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 902 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov9
# 903 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 904 "data/maps/James_Woods/scripts.pory"
	playse 21
# 905 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov10
# 906 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 907 "data/maps/James_Woods/scripts.pory"
	playse 10
# 908 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov11
# 909 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov12
# 910 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 911 "data/maps/James_Woods/scripts.pory"
	delay 25
# 912 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 913 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_15
# 914 "data/maps/James_Woods/scripts.pory"
	closemessage
# 915 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 916 "data/maps/James_Woods/scripts.pory"
	delay 25
# 917 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 918 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 919 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov13
# 920 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 921 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 922 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 52, 3
# 923 "data/maps/James_Woods/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 4
# 924 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_ALEX_AND_LYON
# 925 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 926 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 927 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_AlexBattle2::
# 931 "data/maps/James_Woods/scripts.pory"
	lockall
# 932 "data/maps/James_Woods/scripts.pory"
	playse 21
# 933 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov1
# 934 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 935 "data/maps/James_Woods/scripts.pory"
	delay 30
# 936 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov2x
# 937 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 938 "data/maps/James_Woods/scripts.pory"
	delay 15
# 939 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 940 "data/maps/James_Woods/scripts.pory"
	delay 15
# 941 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 942 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_0
# 943 "data/maps/James_Woods/scripts.pory"
	closemessage
# 944 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 945 "data/maps/James_Woods/scripts.pory"
	delay 30
# 946 "data/maps/James_Woods/scripts.pory"
	playse 21
# 947 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov3
# 948 "data/maps/James_Woods/scripts.pory"
	delay 20
# 949 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 950 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_1
# 951 "data/maps/James_Woods/scripts.pory"
	closemessage
# 952 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 953 "data/maps/James_Woods/scripts.pory"
	delay 45
# 954 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEDEX, 1
# 955 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 956 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_2
# 957 "data/maps/James_Woods/scripts.pory"
	closemessage
# 958 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 959 "data/maps/James_Woods/scripts.pory"
	delay 45
# 960 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 961 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_3
# 962 "data/maps/James_Woods/scripts.pory"
	closemessage
# 963 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 964 "data/maps/James_Woods/scripts.pory"
	delay 15
# 965 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_TITLE
# 966 "data/maps/James_Woods/scripts.pory"
	delay 60
# 967 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 968 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov4
# 969 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 970 "data/maps/James_Woods/scripts.pory"
	delay 10
# 971 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 972 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_4
# 973 "data/maps/James_Woods/scripts.pory"
	closemessage
# 974 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 975 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov5
# 976 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov5
# 977 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 978 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 979 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_5
# 980 "data/maps/James_Woods/scripts.pory"
	closemessage
# 981 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 982 "data/maps/James_Woods/scripts.pory"
	delay 15
# 983 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 984 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_6
# 985 "data/maps/James_Woods/scripts.pory"
	closemessage
# 986 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 987 "data/maps/James_Woods/scripts.pory"
	delay 15
# 988 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 989 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_7
# 990 "data/maps/James_Woods/scripts.pory"
	closemessage
# 991 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 992 "data/maps/James_Woods/scripts.pory"
	delay 15
# 993 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 994 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_8
# 995 "data/maps/James_Woods/scripts.pory"
	closemessage
# 996 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 997 "data/maps/James_Woods/scripts.pory"
	delay 15
# 998 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 999 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_9
# 1000 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1001 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1002 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1003 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1004 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_10
# 1005 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1006 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1007 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1008 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1009 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_11
# 1010 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1011 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1012 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1013 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1014 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_12
# 1015 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1016 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1017 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1018 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov6
# 1019 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1020 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov7
# 1021 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov7
# 1022 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1023 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_FOLLOW_ME
# 1024 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1025 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 1026 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 52, 3
# 1027 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1028 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1029 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov8
# 1030 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1031 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1032 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_13
# 1033 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1034 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1035 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AlexDefeated
# 1036 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1037 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1038 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_14
# 1039 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1040 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1041 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov9
# 1042 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1043 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1044 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov10
# 1045 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1046 "data/maps/James_Woods/scripts.pory"
	playse 10
# 1047 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov11
# 1048 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov12
# 1049 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1050 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1051 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1052 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_15
# 1053 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1054 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1055 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1056 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1057 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 1058 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov13
# 1059 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1060 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 1061 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 52, 3
# 1062 "data/maps/James_Woods/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 4
# 1063 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_ALEX_AND_LYON
# 1064 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1065 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1066 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_AlexBattle3::
# 1070 "data/maps/James_Woods/scripts.pory"
	lockall
# 1071 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1072 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov1
# 1073 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1074 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1075 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov2xx
# 1076 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1077 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1078 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 1079 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1080 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1081 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_0
# 1082 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1083 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1084 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1085 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1086 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov3
# 1087 "data/maps/James_Woods/scripts.pory"
	delay 20
# 1088 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1089 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_1
# 1090 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1091 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1092 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1093 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEDEX, 1
# 1094 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 1095 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_2
# 1096 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1097 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 1098 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1099 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1100 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_3
# 1101 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1102 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1103 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1104 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_TITLE
# 1105 "data/maps/James_Woods/scripts.pory"
	delay 60
# 1106 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 1107 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov4
# 1108 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1109 "data/maps/James_Woods/scripts.pory"
	delay 10
# 1110 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1111 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_4
# 1112 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1113 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1114 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov5
# 1115 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov5
# 1116 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1117 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1118 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_5
# 1119 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1120 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1121 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1122 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1123 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_6
# 1124 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1125 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1126 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1127 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1128 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_7
# 1129 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1130 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1131 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1132 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1133 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_8
# 1134 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1135 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1136 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1137 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1138 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_9
# 1139 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1140 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1141 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1142 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1143 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_10
# 1144 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1145 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1146 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1147 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1148 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_11
# 1149 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1150 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1151 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1152 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1153 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_12
# 1154 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1155 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1156 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1157 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov6
# 1158 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1159 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov7
# 1160 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov7
# 1161 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1162 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_FOLLOW_ME
# 1163 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1164 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 1165 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 52, 3
# 1166 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1167 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1168 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov8
# 1169 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1170 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1171 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_13
# 1172 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1173 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1174 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AlexDefeated
# 1175 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1176 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1177 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_14
# 1178 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1179 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1180 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov9
# 1181 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1182 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1183 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov10
# 1184 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1185 "data/maps/James_Woods/scripts.pory"
	playse 10
# 1186 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov11
# 1187 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov12
# 1188 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1189 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1190 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1191 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_15
# 1192 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1193 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1194 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1195 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1196 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 1197 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov13
# 1198 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1199 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 1200 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 52, 3
# 1201 "data/maps/James_Woods/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 4
# 1202 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_ALEX_AND_LYON
# 1203 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1204 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1205 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_AlexBattle4::
# 1209 "data/maps/James_Woods/scripts.pory"
	lockall
# 1210 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1211 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov1
# 1212 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1213 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1214 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov2xxx
# 1215 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1216 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1217 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 1218 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1219 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1220 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_0
# 1221 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1222 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1223 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1224 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1225 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov3
# 1226 "data/maps/James_Woods/scripts.pory"
	delay 20
# 1227 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1228 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_1
# 1229 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1230 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1231 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1232 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEDEX, 1
# 1233 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 1234 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_2
# 1235 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1236 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 1237 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1238 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1239 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_3
# 1240 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1241 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1242 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1243 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_TITLE
# 1244 "data/maps/James_Woods/scripts.pory"
	delay 60
# 1245 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 1246 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov4
# 1247 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1248 "data/maps/James_Woods/scripts.pory"
	delay 10
# 1249 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1250 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_4
# 1251 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1252 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1253 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov5
# 1254 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov5
# 1255 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1256 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1257 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_5
# 1258 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1259 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1260 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1261 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1262 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_6
# 1263 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1264 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1265 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1266 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1267 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_7
# 1268 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1269 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1270 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1271 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1272 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_8
# 1273 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1274 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1275 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1276 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1277 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_9
# 1278 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1279 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1280 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1281 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1282 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_10
# 1283 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1284 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1285 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1286 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1287 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_11
# 1288 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1289 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1290 "data/maps/James_Woods/scripts.pory"
	delay 15
# 1291 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 1292 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_12
# 1293 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1294 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1295 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1296 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov6
# 1297 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1298 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov7
# 1299 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov7
# 1300 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1301 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_FOLLOW_ME
# 1302 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1303 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 1304 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 52, 3
# 1305 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1306 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1307 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov8
# 1308 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1309 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1310 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_13
# 1311 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1312 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1313 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AlexDefeated
# 1314 "data/maps/James_Woods/scripts.pory"
	delay 45
# 1315 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1316 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_14
# 1317 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1318 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1319 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov9
# 1320 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1321 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1322 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov10
# 1323 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1324 "data/maps/James_Woods/scripts.pory"
	playse 10
# 1325 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov11
# 1326 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov12
# 1327 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1328 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1329 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 1330 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_15
# 1331 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1332 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 1333 "data/maps/James_Woods/scripts.pory"
	delay 25
# 1334 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1335 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 1336 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov13
# 1337 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1338 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 1339 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 52, 3
# 1340 "data/maps/James_Woods/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 4
# 1341 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_ALEX_AND_LYON
# 1342 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm 0
# 1343 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 1344 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


# 1355 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov1:
# 1356 "data/maps/James_Woods/scripts.pory"
	emote_question_mark
	step_end

# 1359 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov2:
# 1360 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1361 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1362 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1365 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov2x:
# 1366 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1366 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1369 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov2xx:
# 1370 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1371 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1372 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1375 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov2xxx:
# 1376 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1377 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1377 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1378 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1381 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov3:
# 1382 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1383 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1386 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov4:
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1387 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1388 "data/maps/James_Woods/scripts.pory"
	face_left
	step_end

# 1391 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov5:
# 1392 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1395 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov6:
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1396 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1399 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov7:
# 1400 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1403 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov8:
# 1404 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1407 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov9:
# 1408 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 1408 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 1408 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 1409 "data/maps/James_Woods/scripts.pory"
	jump_in_place_up
# 1409 "data/maps/James_Woods/scripts.pory"
	jump_in_place_up
# 1410 "data/maps/James_Woods/scripts.pory"
	face_right
# 1411 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1412 "data/maps/James_Woods/scripts.pory"
	jump_left
# 1412 "data/maps/James_Woods/scripts.pory"
	jump_left
# 1413 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
# 1414 "data/maps/James_Woods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 1417 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov10:
# 1418 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1419 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1420 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
	step_end

# 1423 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov11:
# 1424 "data/maps/James_Woods/scripts.pory"
	jump_right
	step_end

# 1427 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov12:
# 1428 "data/maps/James_Woods/scripts.pory"
	face_left
# 1429 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1430 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1431 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1434 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov13:
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1435 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1438 "data/maps/James_Woods/scripts.pory"
JWAustinmov5:
# 1439 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1442 "data/maps/James_Woods/scripts.pory"
JWAustinmov6:
# 1443 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1446 "data/maps/James_Woods/scripts.pory"
JWPlayermov6:
# 1447 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1450 "data/maps/James_Woods/scripts.pory"
JWYoungstermov:
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1451 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1452 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1455 "data/maps/James_Woods/scripts.pory"
JWAustinmov3:
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1456 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1457 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1457 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1460 "data/maps/James_Woods/scripts.pory"
JWAustinmov4:
# 1461 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1464 "data/maps/James_Woods/scripts.pory"
JWPlayermov:
# 1465 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
	step_end

# 1468 "data/maps/James_Woods/scripts.pory"
JWPlayermov2x:
# 1469 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1470 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1470 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1473 "data/maps/James_Woods/scripts.pory"
JWPlayermov2xx:
# 1474 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1474 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1474 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1477 "data/maps/James_Woods/scripts.pory"
JWPlayermov3:
# 1478 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1479 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1482 "data/maps/James_Woods/scripts.pory"
JWPlayermov4:
# 1483 "data/maps/James_Woods/scripts.pory"
	face_down
# 1484 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1485 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1486 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1489 "data/maps/James_Woods/scripts.pory"
JWPlayermov5:
# 1490 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1491 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1494 "data/maps/James_Woods/scripts.pory"
JWGangmov:
# 1495 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1498 "data/maps/James_Woods/scripts.pory"
JWBugCatchermov:
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1499 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1502 "data/maps/James_Woods/scripts.pory"
JWPlayermov2:
# 1503 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1504 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1507 "data/maps/James_Woods/scripts.pory"
JWCameramov1:
# 1508 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1508 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1508 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1508 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1511 "data/maps/James_Woods/scripts.pory"
JWCameramov2:
# 1512 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1512 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1512 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1512 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1515 "data/maps/James_Woods/scripts.pory"
JWBallGrab:
# 1516 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1516 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1516 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1516 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1519 "data/maps/James_Woods/scripts.pory"
JWBallGrabx:
# 1520 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1520 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1521 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1522 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1522 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1525 "data/maps/James_Woods/scripts.pory"
JWAustinmov1:
# 1526 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1529 "data/maps/James_Woods/scripts.pory"
JWAustinmov2:
# 1530 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1531 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1534 "data/maps/James_Woods/scripts.pory"
JWBallmov1:
# 1535 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1538 "data/maps/James_Woods/scripts.pory"
JWBunearymov1:
# 1539 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1540 "data/maps/James_Woods/scripts.pory"
	walk_fast_right
# 1541 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1542 "data/maps/James_Woods/scripts.pory"
	walk_fast_right
# 1543 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1543 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1543 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1543 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1543 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
	step_end

# 1546 "data/maps/James_Woods/scripts.pory"
JWBunearymov2:
# 1547 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1548 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1549 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
	step_end

# 1552 "data/maps/James_Woods/scripts.pory"
JWBunearymov3:
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1553 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
	step_end

# 1556 "data/maps/James_Woods/scripts.pory"
JWBunearymov4:
# 1557 "data/maps/James_Woods/scripts.pory"
	face_down
# 1558 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1559 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1559 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1560 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1563 "data/maps/James_Woods/scripts.pory"
JWmov1:
# 1564 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1565 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1568 "data/maps/James_Woods/scripts.pory"
JWmov1x:
# 1569 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1570 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1573 "data/maps/James_Woods/scripts.pory"
JWmov2:
# 1574 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1577 "data/maps/James_Woods/scripts.pory"
JWmov2x:
# 1578 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1581 "data/maps/James_Woods/scripts.pory"
JWmov3:
# 1582 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1583 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1586 "data/maps/James_Woods/scripts.pory"
JWmov3x:
# 1587 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1588 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1591 "data/maps/James_Woods/scripts.pory"
JWmov4:
# 1592 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1593 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1594 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1597 "data/maps/James_Woods/scripts.pory"
JWmov4x:
# 1598 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1599 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1602 "data/maps/James_Woods/scripts.pory"
JWmov5:
# 1603 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1606 "data/maps/James_Woods/scripts.pory"
JWmov5x:
# 1607 "data/maps/James_Woods/scripts.pory"
	walk_left
	step_end

# 1610 "data/maps/James_Woods/scripts.pory"
JWmov6:
# 1611 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1612 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1613 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1616 "data/maps/James_Woods/scripts.pory"
JWmov7:
# 1617 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1618 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1619 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1622 "data/maps/James_Woods/scripts.pory"
JWmov7x:
# 1623 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1624 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1625 "data/maps/James_Woods/scripts.pory"
	face_left
	step_end

# 1628 "data/maps/James_Woods/scripts.pory"
JWmov8:
# 1629 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1632 "data/maps/James_Woods/scripts.pory"
JWmov8x:
# 1633 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1633 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1636 "data/maps/James_Woods/scripts.pory"
JWmov9:
# 1637 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1638 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1639 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1642 "data/maps/James_Woods/scripts.pory"
JWmov9x:
# 1643 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1644 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1647 "data/maps/James_Woods/scripts.pory"
JWmov10:
# 1648 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1649 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1650 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1653 "data/maps/James_Woods/scripts.pory"
JWmov11:
# 1654 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1655 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1658 "data/maps/James_Woods/scripts.pory"
JWmov11x:
# 1659 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1660 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1661 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1664 "data/maps/James_Woods/scripts.pory"
JWmov12:
# 1665 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1666 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1667 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1670 "data/maps/James_Woods/scripts.pory"
JWmov13:
# 1671 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1674 "data/maps/James_Woods/scripts.pory"
JWmov13x:
# 1675 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1678 "data/maps/James_Woods/scripts.pory"
JWmov14:
# 1679 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1680 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1683 "data/maps/James_Woods/scripts.pory"
JWmov14x:
# 1684 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1685 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1686 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

JamesWoodsHoneyTree::
# 1690 "data/maps/James_Woods/scripts.pory"
	lock
# 1691 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_0
# 1692 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1693 "data/maps/James_Woods/scripts.pory"
	checkitem ITEM_HONEY, 1
# 1694 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JamesWoodsHoneyTree_1
# 1784 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_1:
# 1695 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_1, MSGBOX_YESNO
# 1696 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne JamesWoodsHoneyTree_4
# 1779 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_4:
# 1698 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_HONEY, 1
# 1699 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_2
# 1700 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1701 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1702 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1703 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movx2
# 1704 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1705 "data/maps/James_Woods/scripts.pory"
	random 10
# 1706 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JamesWoodsHoneyTree_8
# 1713 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JamesWoodsHoneyTree_9
# 1720 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JamesWoodsHoneyTree_10
# 1727 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JamesWoodsHoneyTree_11
# 1734 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq JamesWoodsHoneyTree_12
# 1741 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq JamesWoodsHoneyTree_13
# 1748 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JamesWoodsHoneyTree_14
JamesWoodsHoneyTree_7:
# 1755 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq JamesWoodsHoneyTree_22
# 1762 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq JamesWoodsHoneyTree_23
# 1769 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq JamesWoodsHoneyTree_24
	return

JamesWoodsHoneyTree_8:
# 1707 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1708 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1709 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1710 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1711 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_9:
# 1714 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1715 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1716 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1717 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1718 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_10:
# 1721 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1722 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1723 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1724 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1725 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_11:
# 1728 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1729 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1730 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 1731 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1732 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_12:
# 1735 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1736 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1737 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 1738 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1739 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_13:
# 1742 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1743 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1744 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_DOTTLER, 10, ITEM_NONE
# 1745 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1746 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_14:
# 1749 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1750 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1751 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 10, ITEM_NONE
# 1752 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1753 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_22:
# 1756 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1757 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1758 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 10, ITEM_NONE
# 1759 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1760 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_23:
# 1763 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1764 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1765 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 1766 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1767 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_24:
# 1770 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1771 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1772 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 1773 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1774 "data/maps/James_Woods/scripts.pory"
	release
	return


# 1788 "data/maps/James_Woods/scripts.pory"
movx2:
# 1789 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
	step_end

JamesWoods_EventScript_Trainer1::
# 1793 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_06, JWBugCatcher1Intro, JWBugCatcher1Defeated
# 1794 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher1PostBattle, MSGBOX_AUTOCLOSE
	return


JamesWoods_EventScript_Trainer2::
# 1798 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_05, JWYoungster1Intro, JWYoungster1Defeated
# 1799 "data/maps/James_Woods/scripts.pory"
	msgbox JWYoungster1PostBattle, MSGBOX_AUTOCLOSE
	return


JamesWoods_EventScript_Trainer3::
# 1803 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_07, JWBugCatcher2Intro, JWBugCatcher2Defeated
# 1804 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher2PostBattle, MSGBOX_AUTOCLOSE
	return


JamesWoods_EventScript_Trainer4::
# 1808 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_08, JWBugCatcher3Intro, JWBugCatcher3Defeated
# 1809 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher3PostBattle, MSGBOX_AUTOCLOSE
	return


JamesWoods_EventScript_Trainer5::
# 1813 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_09, JWLassIntro, JWLassDefeated
# 1814 "data/maps/James_Woods/scripts.pory"
	msgbox JWLassPostBattle, MSGBOX_AUTOCLOSE
	return


JamesWoods_EventScript_Trainer6::
# 1818 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_04, JWYoungster2Intro, JWYoungster2Defeated
# 1819 "data/maps/James_Woods/scripts.pory"
	msgbox JWYoungster2PostBattle
	return


JamesWoods_EventScript_Sign1_Text_0:
# 71 "data/maps/James_Woods/scripts.pory"
	.string "James Woods\pExit north to Sapphire Village.\nExit south to Jasper Town.$"

JamesWoods_EventScript_Sign2_Text_0:
# 76 "data/maps/James_Woods/scripts.pory"
	.string "James River\nBeware of the current!$"

JamesWoods_EventScript_Sign3_Text_0:
# 81 "data/maps/James_Woods/scripts.pory"
	.string "WARNING!\pThe James River has a dangerously fast\ncurrent. Please do not loiter!\pSponsored by Shining Star Labs$"

JamesWoods_EventScript_Sign4_Text_0:
# 86 "data/maps/James_Woods/scripts.pory"
	.string "James Woods\nExit south to Route 1, Jasper Town$"

JamesWoods_EventScript_AustinYoungster_Text_0:
# 93 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Don't you know when to quit?$"

JamesWoods_EventScript_AustinCatcher2_Text_0:
# 100 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Get lost already!$"

JamesWoods_EventScript_AustinCatcher1_Text_0:
# 107 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Don't you have anything else better\nto do?$"

JamesWoods_EventScript_YoungsterTile1_Text_0:
# 116 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Hold it, you're not going anywhere!$"

JamesWoods_EventScript_BugCatcherTile1_Text_0:
# 150 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Oh no you don't!\nGet out of here!$"

JamesWoods_EventScript_Buneary1A_Text_0:
# 263 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: We finally got her, Austin!\n??? 2: Throw a Poké Ball at it!$"

JamesWoods_EventScript_Buneary1A_Text_1:
# 290 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: Damn it!\pAlright, let's split up.\nShe can't have gotten far!$"

JamesWoods_EventScript_Buneary1A_Text_2:
# 299 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: What do you want?\n??? 2: Beat it!$"

JamesWoods_EventScript_Buneary1A_Text_3:
# 302 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: You idiots!\nThe Buneary is getting away! Find it!$"

JamesWoods_EventScript_Buneary1A_Text_4:
# 305 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: Sorry Austin!\n??? 2: Yeah, we're sorry!$"

JamesWoods_EventScript_Buneary1A_Text_5:
# 308 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: You saw nothing, got it?$"

JamesWoods_EventScript_Buneary1A_Text_6:
# 326 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} obtained a Poké Ball.$"

JamesWoods_EventScript_Buneary2A_Text_0:
# 436 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: Tch...\nThat Buneary is mine!$"

JamesWoods_EventScript_Buneary3A_Text_0:
# 482 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: Almost had it!$"

JamesWoods_EventScript_Buneary3A_Text_1:
# 490 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 2: Any luck?$"

JamesWoods_EventScript_Buneary3A_Text_2:
# 496 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: It went further south.\nWe can't let it leave the forest!\lLet's split up, cover more ground!$"

JamesWoods_EventScript_Buneary4A_Text_0:
# 571 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: There it is!\nAnd this guy too...\pHand over the Buneary or else!\nI need it for my collection!$"

JamesWoods_EventScript_Buneary4A_Text_1:
# 581 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: It's three on one.\n??? 2: We can take 'em!$"

JamesWoods_EventScript_Buneary4A_Text_2:
# 598 "data/maps/James_Woods/scripts.pory"
	.string "The Buneary used the spare Poké Ball\nin your back pocket…$"

JamesWoods_EventScript_Buneary4A_Text_3:
# 603 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: No. Freaking. Way.\pIt let itself be caught by you?\nHand over the Ball, now!\p...\pFine, I'll take it by force!$"

JamesWoods_EventScript_Buneary4A_Text_4:
# 609 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: Woah... Austin lost.\n??? 2: He's never lost before!$"

JamesWoods_EventScript_Buneary4A_Text_5:
# 614 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: Why didn't you idiots help me\nout here?!$"

JamesWoods_EventScript_Buneary4A_Text_6:
# 617 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: Honestly, I'm getting tired of\nalways being insulted by you.\p??? 2: Yeah, this whole thing has gone\nway too far. Poor Buneary…$"

JamesWoods_EventScript_Buneary4A_Text_7:
# 620 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: C'mon, we can still rush 'em and\nmake off with it!$"

JamesWoods_EventScript_Buneary4A_Text_8:
# 623 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}??? 1: Forget this, man.\n??? 2: I'm getting out of here.$"

JamesWoods_EventScript_Buneary4A_Text_9:
# 631 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin: You two idiots can't just leave\nme here!\p…$"

JamesWoods_EventScript_Buneary4A_Text_10:
# 636 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Whatever, keep the Buneary.\nIt's not that strong anyway.\pI'm going to collect all of the rarest\nPokémon in the world!\pNext time I see you, it's payback time.$"

JamesWoods_EventScript_Buneary4A_Text_11:
# 651 "data/maps/James_Woods/scripts.pory"
	.string "It seems the Buneary trusts you.\nIt wants to come along with you!$"

JamesWoods_EventScript_Buneary4A_Text_12:
# 657 "data/maps/James_Woods/scripts.pory"
	.string "The Repel's effect wore off…$"

JamesWoods_EventScript_AlexBattle1_Text_0:
# 803 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: There we go, little guy.\nThat Potion should help.$"

JamesWoods_EventScript_AlexBattle1_Text_1:
# 811 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nCheck it out, I found a Riolu!\pIt looked like the poor little guy was\nabandoned by its Trainer…\pI adopted him and gave him a good meal.\nNow we're best buddies!\p…\pOh, cool! You've got a Pokémon too!\nWe should battle each other!\pHuh?\pWhat's that in your hand?\nA Pokédex from the Professor?$"

JamesWoods_EventScript_AlexBattle1_Text_2:
# 817 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} delivered the Pokédex.$"

JamesWoods_EventScript_AlexBattle1_Text_3:
# 822 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: This is so cool!\nWell now I gotta go thank him!$"

JamesWoods_EventScript_AlexBattle1_Text_4:
# 833 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}???: Excuse me. Do you two have a\nminute to talk?$"

JamesWoods_EventScript_AlexBattle1_Text_5:
# 840 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Sure thing, man.\nI'm Alex, and this is {COLOR GREEN}{PLAYER}{COLOR BLUE}.$"

JamesWoods_EventScript_AlexBattle1_Text_6:
# 845 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}???: Nice to meet ya. I'm Lyon.\nSorry if I was interrupting anything.$"

JamesWoods_EventScript_AlexBattle1_Text_7:
# 850 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: It's cool, my dude.\nWhat did you wanna talk about?$"

JamesWoods_EventScript_AlexBattle1_Text_8:
# 855 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Lyon: Have you seen a woman around\nhere? Around her late 20s?\lGlasses...Hair color sort of like mine?$"

JamesWoods_EventScript_AlexBattle1_Text_9:
# 860 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Sorry man, haven't seen her.\nIs she your sister or something?$"

JamesWoods_EventScript_AlexBattle1_Text_10:
# 865 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Lyon: Something like that, don't worry\nabout it. Figured she wasn't nearby.\pAnyway, I wouldn't stand here for too\nmuch longer.\pThis bridge is pretty dangerous.\nPeople have fallen off before.$"

JamesWoods_EventScript_AlexBattle1_Text_11:
# 870 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Seems pretty sturdy to us.\nBut, thanks for the tip!$"

JamesWoods_EventScript_AlexBattle1_Text_12:
# 875 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Lyon: Right. Suit yourselves.\nI'll get out of your hair.\pGood luck with your Pokédex quest!$"

JamesWoods_EventScript_AlexBattle1_Text_13:
# 893 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Well, that was weird.\nSeemed like he had a lot on his mind.\pAnyway, before I go back to the village,\nwanna battle?\pC'mon, don't you wanna see who's the\nstronger Trainer?\pI'm warning you, Riolu and I are a team\nthat can't be stopped!$"

JamesWoods_EventScript_AlexBattle1_Text_14:
# 899 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: That. Was. AWESOME!$"

JamesWoods_EventScript_AlexBattle1_Text_15:
# 913 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Thanks for the save…\nGuess that Lyon guy had a point.\pI should, uh, go to the Lab so I can\nthank the Professor.\pIt was a ton of fun battling you\n{COLOR GREEN}{PLAYER}{COLOR BLUE}!\pRiolu and I are going to keep training\ntogether! See you around!$"

JamesWoodsHoneyTree_Text_0:
# 1691 "data/maps/James_Woods/scripts.pory"
	.string "There is a sweet scent in the air...$"

JamesWoodsHoneyTree_Text_1:
# 1695 "data/maps/James_Woods/scripts.pory"
	.string "Slather the bark with Honey?$"

JamesWoodsHoneyTree_Text_2:
# 1699 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} slathered the bark with Honey.$"

JamesWoodsHoneyTree_Text_3:
# 1707 "data/maps/James_Woods/scripts.pory"
	.string "A wild Pokémon attacked!$"

AustinDefeated::
# 1347 "data/maps/James_Woods/scripts.pory"
	.string "What? B-but how!?$"

AlexDefeated::
# 1351 "data/maps/James_Woods/scripts.pory"
	.string "Wow! You're good!$"

JWLassIntro::
# 1822 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR RED}Hi! You look so cute!$"

JWLassDefeated::
# 1826 "data/maps/James_Woods/scripts.pory"
	.string "So cool!$"

JWLassPostBattle::
# 1830 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR RED}If you're free later, would you like to\ngo to the beach with me?$"

JWYoungster2Intro::
# 1834 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Hey again. You got a minute?$"

JWYoungster2Defeated::
# 1838 "data/maps/James_Woods/scripts.pory"
	.string "You really are strong.$"

JWYoungster2PostBattle::
# 1842 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}I used to think Austin was cool.\nWhat a jerk.$"

JWBugCatcher3Intro::
# 1846 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}I wanted to say sorry for earlier.\nCan we battle?$"

JWBugCatcher3Defeated::
# 1850 "data/maps/James_Woods/scripts.pory"
	.string "Truce?$"

JWBugCatcher3PostBattle::
# 1854 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Austin was a real jerk. Sorry Buneary.$"

JWBugCatcher2Intro::
# 1858 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Shhh. You'll scare the bugs away!$"

JWBugCatcher2Defeated::
# 1862 "data/maps/James_Woods/scripts.pory"
	.string "Wow.$"

JWBugCatcher2PostBattle::
# 1866 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Maybe I should go back home.$"

JWYoungster1Intro::
# 1870 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Our eyes met! Time to battle!$"

JWYoungster1Defeated::
# 1874 "data/maps/James_Woods/scripts.pory"
	.string "Crud!$"

JWYoungster1PostBattle::
# 1878 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Don't you know that when two trainers\nmeet, they have to battle?$"

JWBugCatcher1Intro::
# 1882 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}I'm looking to catch some bugs!\nHave you found any?$"

JWBugCatcher1Defeated::
# 1886 "data/maps/James_Woods/scripts.pory"
	.string "I need stronger bugs.$"

JWBugCatcher1PostBattle::
# 1890 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}The James Woods is chock full of Bugs!$"
