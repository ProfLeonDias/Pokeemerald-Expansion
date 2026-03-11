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
	return


JamesWoods_EventScript_AustinYoungster::
# 90 "data/maps/James_Woods/scripts.pory"
	lock
# 91 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 92 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 93 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_AustinCatcher2::
# 97 "data/maps/James_Woods/scripts.pory"
	lock
# 98 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 99 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 100 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_AustinCatcher1::
# 104 "data/maps/James_Woods/scripts.pory"
	lock
# 105 "data/maps/James_Woods/scripts.pory"
	faceplayer
# 106 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher1_Text_0
# 107 "data/maps/James_Woods/scripts.pory"
	release
	return


JamesWoods_EventScript_YoungsterTile1::
# 111 "data/maps/James_Woods/scripts.pory"
	lockall
# 112 "data/maps/James_Woods/scripts.pory"
	playse 21
# 113 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov1
# 114 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 115 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_YoungsterTile1_Text_0
# 116 "data/maps/James_Woods/scripts.pory"
	closemessage
# 117 "data/maps/James_Woods/scripts.pory"
	delay 30
# 118 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov2
# 119 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov2
# 120 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 121 "data/maps/James_Woods/scripts.pory"
	delay 15
# 122 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov3
# 123 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 124 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile2::
# 128 "data/maps/James_Woods/scripts.pory"
	lockall
# 129 "data/maps/James_Woods/scripts.pory"
	playse 21
# 130 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov1x
# 131 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 132 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_YoungsterTile1_Text_0
# 133 "data/maps/James_Woods/scripts.pory"
	closemessage
# 134 "data/maps/James_Woods/scripts.pory"
	delay 30
# 135 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov2x
# 136 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov2x
# 137 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 138 "data/maps/James_Woods/scripts.pory"
	delay 15
# 139 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER2, JWmov3x
# 140 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 141 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile1::
# 145 "data/maps/James_Woods/scripts.pory"
	lockall
# 146 "data/maps/James_Woods/scripts.pory"
	playse 21
# 147 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov4
# 148 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 149 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_BugCatcherTile1_Text_0
# 150 "data/maps/James_Woods/scripts.pory"
	closemessage
# 151 "data/maps/James_Woods/scripts.pory"
	delay 30
# 152 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov5
# 153 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov5
# 154 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 155 "data/maps/James_Woods/scripts.pory"
	delay 15
# 156 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov6
# 157 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 158 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile2::
# 162 "data/maps/James_Woods/scripts.pory"
	lockall
# 163 "data/maps/James_Woods/scripts.pory"
	playse 21
# 164 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER3, JWmov4x
# 165 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 166 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_BugCatcherTile1_Text_0
# 167 "data/maps/James_Woods/scripts.pory"
	closemessage
# 168 "data/maps/James_Woods/scripts.pory"
	delay 30
# 169 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov5x
# 170 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 171 "data/maps/James_Woods/scripts.pory"
	delay 15
# 172 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile3::
# 176 "data/maps/James_Woods/scripts.pory"
	lockall
# 177 "data/maps/James_Woods/scripts.pory"
	playse 21
# 178 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov7
# 179 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 180 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 181 "data/maps/James_Woods/scripts.pory"
	closemessage
# 182 "data/maps/James_Woods/scripts.pory"
	delay 30
# 183 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov8
# 184 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov8
# 185 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 186 "data/maps/James_Woods/scripts.pory"
	delay 15
# 187 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov9
# 188 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 189 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_YoungsterTile4::
# 193 "data/maps/James_Woods/scripts.pory"
	lockall
# 194 "data/maps/James_Woods/scripts.pory"
	playse 21
# 195 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov7x
# 196 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 197 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinYoungster_Text_0
# 198 "data/maps/James_Woods/scripts.pory"
	closemessage
# 199 "data/maps/James_Woods/scripts.pory"
	delay 30
# 200 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov10
# 201 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 202 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov8x
# 203 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov8x
# 204 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 205 "data/maps/James_Woods/scripts.pory"
	delay 15
# 206 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWmov9x
# 207 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 208 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile3::
# 212 "data/maps/James_Woods/scripts.pory"
	lockall
# 213 "data/maps/James_Woods/scripts.pory"
	playse 21
# 214 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov11
# 215 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 216 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 217 "data/maps/James_Woods/scripts.pory"
	closemessage
# 218 "data/maps/James_Woods/scripts.pory"
	delay 30
# 219 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov12
# 220 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 221 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov13
# 222 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov13
# 223 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 224 "data/maps/James_Woods/scripts.pory"
	delay 15
# 225 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov14
# 226 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 227 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_BugCatcherTile4::
# 231 "data/maps/James_Woods/scripts.pory"
	lockall
# 232 "data/maps/James_Woods/scripts.pory"
	playse 21
# 233 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov11x
# 234 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 235 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AustinCatcher2_Text_0
# 236 "data/maps/James_Woods/scripts.pory"
	closemessage
# 237 "data/maps/James_Woods/scripts.pory"
	delay 30
# 238 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWmov13x
# 239 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov13x
# 240 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 241 "data/maps/James_Woods/scripts.pory"
	delay 15
# 242 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWmov14x
# 243 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 244 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary1A::
# 248 "data/maps/James_Woods/scripts.pory"
	lockall
# 249 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER1
# 250 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN1
# 251 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER1
# 252 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 253 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER1, 34, 16
# 254 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN1, 35, 19
# 255 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER1, 36, 16
# 256 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 257 "data/maps/James_Woods/scripts.pory"
	delay 30
# 258 "data/maps/James_Woods/scripts.pory"
	special SpawnCameraObject
# 259 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov1
# 260 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 261 "data/maps/James_Woods/scripts.pory"
	delay 30
# 262 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_0
# 263 "data/maps/James_Woods/scripts.pory"
	closemessage
# 264 "data/maps/James_Woods/scripts.pory"
	delay 30
# 265 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov1
# 266 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 267 "data/maps/James_Woods/scripts.pory"
	playse 61
# 268 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 269 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 17
# 270 "data/maps/James_Woods/scripts.pory"
	playse 60
# 271 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTINBALL, JWBallmov1
# 272 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 273 "data/maps/James_Woods/scripts.pory"
	playse 49
# 274 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 275 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 51, 8
# 276 "data/maps/James_Woods/scripts.pory"
	delay 40
# 277 "data/maps/James_Woods/scripts.pory"
	playse 15
# 278 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 279 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 280 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 281 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 51, 8
# 282 "data/maps/James_Woods/scripts.pory"
	delay 15
# 283 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 284 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 285 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY1, JWBunearymov1
# 286 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 287 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 288 "data/maps/James_Woods/scripts.pory"
	delay 15
# 289 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_1
# 290 "data/maps/James_Woods/scripts.pory"
	closemessage
# 291 "data/maps/James_Woods/scripts.pory"
	delay 30
# 292 "data/maps/James_Woods/scripts.pory"
	playse 21
# 293 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER1, JWAustinmov2
# 294 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov2
# 295 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER1, JWAustinmov2
# 296 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 297 "data/maps/James_Woods/scripts.pory"
	delay 15
# 298 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_2
# 299 "data/maps/James_Woods/scripts.pory"
	closemessage
# 300 "data/maps/James_Woods/scripts.pory"
	delay 20
# 301 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_3
# 302 "data/maps/James_Woods/scripts.pory"
	closemessage
# 303 "data/maps/James_Woods/scripts.pory"
	delay 15
# 304 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_4
# 305 "data/maps/James_Woods/scripts.pory"
	closemessage
# 306 "data/maps/James_Woods/scripts.pory"
	delay 20
# 307 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_5
# 308 "data/maps/James_Woods/scripts.pory"
	closemessage
# 309 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 310 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER1
# 311 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN1
# 312 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER1
# 313 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 314 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 16
# 315 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 316 "data/maps/James_Woods/scripts.pory"
	delay 45
# 317 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov2
# 318 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 319 "data/maps/James_Woods/scripts.pory"
	special RemoveCameraObject
# 320 "data/maps/James_Woods/scripts.pory"
	delay 20
# 321 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWBallGrab
# 322 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 323 "data/maps/James_Woods/scripts.pory"
	delay 15
# 324 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 325 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_6
# 326 "data/maps/James_Woods/scripts.pory"
	closemessage
# 327 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 328 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 329 "data/maps/James_Woods/scripts.pory"
	additem ITEM_SPARE_POKEBALL, 1
# 330 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE
# 331 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 5
# 332 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary1B::
# 336 "data/maps/James_Woods/scripts.pory"
	lockall
# 337 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER1
# 338 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN1
# 339 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER1
# 340 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 341 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER1, 34, 16
# 342 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN1, 35, 19
# 343 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER1, 36, 16
# 344 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 345 "data/maps/James_Woods/scripts.pory"
	delay 30
# 346 "data/maps/James_Woods/scripts.pory"
	special SpawnCameraObject
# 347 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov1
# 348 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 349 "data/maps/James_Woods/scripts.pory"
	delay 30
# 350 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_0
# 351 "data/maps/James_Woods/scripts.pory"
	closemessage
# 352 "data/maps/James_Woods/scripts.pory"
	delay 30
# 353 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov1
# 354 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 355 "data/maps/James_Woods/scripts.pory"
	playse 61
# 356 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 357 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 17
# 358 "data/maps/James_Woods/scripts.pory"
	playse 60
# 359 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTINBALL, JWBallmov1
# 360 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 361 "data/maps/James_Woods/scripts.pory"
	playse 49
# 362 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 363 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 51, 8
# 364 "data/maps/James_Woods/scripts.pory"
	delay 40
# 365 "data/maps/James_Woods/scripts.pory"
	playse 15
# 366 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 367 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY1
# 368 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY1, 35, 16
# 369 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 51, 8
# 370 "data/maps/James_Woods/scripts.pory"
	delay 15
# 371 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 372 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 373 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY1, JWBunearymov1
# 374 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 375 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY1
# 376 "data/maps/James_Woods/scripts.pory"
	delay 15
# 377 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_1
# 378 "data/maps/James_Woods/scripts.pory"
	closemessage
# 379 "data/maps/James_Woods/scripts.pory"
	delay 30
# 380 "data/maps/James_Woods/scripts.pory"
	playse 21
# 381 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER1, JWAustinmov2
# 382 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN1, JWAustinmov2
# 383 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER1, JWAustinmov2
# 384 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 385 "data/maps/James_Woods/scripts.pory"
	delay 15
# 386 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_2
# 387 "data/maps/James_Woods/scripts.pory"
	closemessage
# 388 "data/maps/James_Woods/scripts.pory"
	delay 20
# 389 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_3
# 390 "data/maps/James_Woods/scripts.pory"
	closemessage
# 391 "data/maps/James_Woods/scripts.pory"
	delay 15
# 392 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_4
# 393 "data/maps/James_Woods/scripts.pory"
	closemessage
# 394 "data/maps/James_Woods/scripts.pory"
	delay 20
# 395 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_5
# 396 "data/maps/James_Woods/scripts.pory"
	closemessage
# 397 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 398 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER1
# 399 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN1
# 400 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER1
# 401 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 402 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 35, 16
# 403 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 404 "data/maps/James_Woods/scripts.pory"
	delay 45
# 405 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_CAMERA, JWCameramov2
# 406 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 407 "data/maps/James_Woods/scripts.pory"
	special RemoveCameraObject
# 408 "data/maps/James_Woods/scripts.pory"
	delay 20
# 409 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWBallGrabx
# 410 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 411 "data/maps/James_Woods/scripts.pory"
	delay 15
# 412 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 413 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary1A_Text_6
# 414 "data/maps/James_Woods/scripts.pory"
	closemessage
# 415 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 416 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 417 "data/maps/James_Woods/scripts.pory"
	additem ITEM_SPARE_POKEBALL, 1
# 418 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE
# 419 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 5
# 420 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary2A::
# 424 "data/maps/James_Woods/scripts.pory"
	lockall
# 425 "data/maps/James_Woods/scripts.pory"
	playse 21
# 426 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov
# 427 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 428 "data/maps/James_Woods/scripts.pory"
	delay 30
# 429 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 430 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 431 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY2, JWBunearymov2
# 432 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 433 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY2
# 434 "data/maps/James_Woods/scripts.pory"
	delay 15
# 435 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary2A_Text_0
# 436 "data/maps/James_Woods/scripts.pory"
	closemessage
# 437 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 438 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN2
# 439 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER2
# 440 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER2
# 441 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 442 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE2
# 443 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 6
# 444 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary2B::
# 448 "data/maps/James_Woods/scripts.pory"
	lockall
# 449 "data/maps/James_Woods/scripts.pory"
	playse 21
# 450 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov
# 451 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 452 "data/maps/James_Woods/scripts.pory"
	delay 30
# 453 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 454 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 455 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2
# 456 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY2, JWBunearymov2
# 457 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 458 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY2
# 459 "data/maps/James_Woods/scripts.pory"
	delay 15
# 460 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary2A_Text_0
# 461 "data/maps/James_Woods/scripts.pory"
	closemessage
# 462 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 463 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN2
# 464 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER2
# 465 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER2
# 466 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 467 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE2
# 468 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 6
# 469 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary3A::
# 473 "data/maps/James_Woods/scripts.pory"
	lockall
# 474 "data/maps/James_Woods/scripts.pory"
	delay 30
# 475 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 476 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 477 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY3, JWBunearymov3
# 478 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 479 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY3
# 480 "data/maps/James_Woods/scripts.pory"
	delay 20
# 481 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_0
# 482 "data/maps/James_Woods/scripts.pory"
	closemessage
# 483 "data/maps/James_Woods/scripts.pory"
	delay 20
# 484 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER5
# 485 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER5, 21, 31
# 486 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER5, JWBugCatchermov
# 487 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 488 "data/maps/James_Woods/scripts.pory"
	delay 20
# 489 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_1
# 490 "data/maps/James_Woods/scripts.pory"
	closemessage
# 491 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER3, JWGangmov
# 492 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN3, JWGangmov
# 493 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 494 "data/maps/James_Woods/scripts.pory"
	delay 15
# 495 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_2
# 496 "data/maps/James_Woods/scripts.pory"
	closemessage
# 497 "data/maps/James_Woods/scripts.pory"
	delay 30
# 498 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 499 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER3
# 500 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER5
# 501 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER3
# 502 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN3
# 503 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 504 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE3
# 505 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 7
# 506 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary3B::
# 510 "data/maps/James_Woods/scripts.pory"
	lockall
# 511 "data/maps/James_Woods/scripts.pory"
	delay 30
# 512 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 513 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 514 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY3, JWBunearymov3
# 515 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 516 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY3
# 517 "data/maps/James_Woods/scripts.pory"
	delay 20
# 518 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_0
# 519 "data/maps/James_Woods/scripts.pory"
	closemessage
# 520 "data/maps/James_Woods/scripts.pory"
	delay 20
# 521 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER5
# 522 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER5, 20, 31
# 523 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER5, JWBugCatchermov
# 524 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 525 "data/maps/James_Woods/scripts.pory"
	delay 20
# 526 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_1
# 527 "data/maps/James_Woods/scripts.pory"
	closemessage
# 528 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER3, JWGangmov
# 529 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN3, JWGangmov
# 530 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 531 "data/maps/James_Woods/scripts.pory"
	delay 15
# 532 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary3A_Text_2
# 533 "data/maps/James_Woods/scripts.pory"
	closemessage
# 534 "data/maps/James_Woods/scripts.pory"
	delay 30
# 535 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 536 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER3
# 537 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER5
# 538 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER3
# 539 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN3
# 540 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 541 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE3
# 542 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 7
# 543 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary4A::
# 547 "data/maps/James_Woods/scripts.pory"
	lockall
# 548 "data/maps/James_Woods/scripts.pory"
	delay 30
# 549 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 550 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 551 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY4, JWBunearymov4
# 552 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 553 "data/maps/James_Woods/scripts.pory"
	delay 15
# 554 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2x
# 555 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 556 "data/maps/James_Woods/scripts.pory"
	delay 15
# 557 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN4
# 558 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN4, 33, 54
# 559 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER4
# 560 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER4, 33, 53
# 561 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER4
# 562 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER4, 33, 55
# 563 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWYoungstermov
# 564 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov3
# 565 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov3
# 566 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 567 "data/maps/James_Woods/scripts.pory"
	playse 21
# 568 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov3
# 569 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 570 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_0
# 571 "data/maps/James_Woods/scripts.pory"
	closemessage
# 572 "data/maps/James_Woods/scripts.pory"
	delay 15
# 573 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov4
# 574 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 575 "data/maps/James_Woods/scripts.pory"
	delay 15
# 576 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWAustinmov4
# 577 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov4
# 578 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov4
# 579 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 580 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_1
# 581 "data/maps/James_Woods/scripts.pory"
	closemessage
# 582 "data/maps/James_Woods/scripts.pory"
	delay 15
# 583 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 584 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 585 "data/maps/James_Woods/scripts.pory"
	delay 15
# 586 "data/maps/James_Woods/scripts.pory"
	playse 54
# 587 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 588 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 53, 7
# 589 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 590 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 45, 49
# 591 "data/maps/James_Woods/scripts.pory"
	delay 30
# 592 "data/maps/James_Woods/scripts.pory"
	playse 21
# 593 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov5
# 594 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 595 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 596 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 53, 7
# 597 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_2
# 598 "data/maps/James_Woods/scripts.pory"
	closemessage
# 599 "data/maps/James_Woods/scripts.pory"
	delay 30
# 600 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov6
# 601 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 602 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_3
# 603 "data/maps/James_Woods/scripts.pory"
	closemessage
# 604 "data/maps/James_Woods/scripts.pory"
	createmon 0, 0, SPECIES_BUNEARY_STARTER, 5, ITEM_NONE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POUND, 0, 0, 0, 1, 0, 0, 0
# 605 "data/maps/James_Woods/scripts.pory"
	delay 15
# 606 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AustinDefeated
# 607 "data/maps/James_Woods/scripts.pory"
	delay 30
# 608 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_4
# 609 "data/maps/James_Woods/scripts.pory"
	closemessage
# 610 "data/maps/James_Woods/scripts.pory"
	delay 20
# 611 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov5
# 612 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 613 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_5
# 614 "data/maps/James_Woods/scripts.pory"
	closemessage
# 615 "data/maps/James_Woods/scripts.pory"
	delay 20
# 616 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_6
# 617 "data/maps/James_Woods/scripts.pory"
	closemessage
# 618 "data/maps/James_Woods/scripts.pory"
	delay 15
# 619 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_7
# 620 "data/maps/James_Woods/scripts.pory"
	closemessage
# 621 "data/maps/James_Woods/scripts.pory"
	delay 15
# 622 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_8
# 623 "data/maps/James_Woods/scripts.pory"
	closemessage
# 624 "data/maps/James_Woods/scripts.pory"
	delay 15
# 625 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 626 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER4
# 627 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER4
# 628 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 629 "data/maps/James_Woods/scripts.pory"
	delay 15
# 630 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_9
# 631 "data/maps/James_Woods/scripts.pory"
	closemessage
# 632 "data/maps/James_Woods/scripts.pory"
	delay 15
# 633 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov6
# 634 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 635 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_10
# 636 "data/maps/James_Woods/scripts.pory"
	closemessage
# 637 "data/maps/James_Woods/scripts.pory"
	delay 15
# 638 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 639 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN4
# 640 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY4
# 641 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 45, 49
# 642 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 643 "data/maps/James_Woods/scripts.pory"
	delay 15
# 644 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAustinmov6
# 645 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 646 "data/maps/James_Woods/scripts.pory"
	delay 15
# 647 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 648 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 649 "data/maps/James_Woods/scripts.pory"
	delay 15
# 650 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_11
# 651 "data/maps/James_Woods/scripts.pory"
	closemessage
# 652 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 653 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 654 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 655 "data/maps/James_Woods/scripts.pory"
	delay 15
# 656 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_12
# 657 "data/maps/James_Woods/scripts.pory"
	closemessage
# 658 "data/maps/James_Woods/scripts.pory"
	special HealPlayerParty
# 659 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEBALL, 1
# 660 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 8
# 661 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE4
# 662 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_BUNEARY_OBTAINED
# 663 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 664 "data/maps/James_Woods/scripts.pory"
	clearflag FLAG_NO_ENCOUNTER
# 665 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_Buneary4B::
# 669 "data/maps/James_Woods/scripts.pory"
	lockall
# 670 "data/maps/James_Woods/scripts.pory"
	delay 30
# 671 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 672 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 673 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUNEARY4, JWBunearymov4
# 674 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 675 "data/maps/James_Woods/scripts.pory"
	delay 15
# 676 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov2xx
# 677 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 678 "data/maps/James_Woods/scripts.pory"
	delay 15
# 679 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTIN4
# 680 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTIN4, 33, 54
# 681 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_YOUNGSTER4
# 682 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_YOUNGSTER4, 33, 53
# 683 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUGCATCHER4
# 684 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUGCATCHER4, 33, 55
# 685 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWYoungstermov
# 686 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov3
# 687 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov3
# 688 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 689 "data/maps/James_Woods/scripts.pory"
	playse 21
# 690 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov3
# 691 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 692 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_0
# 693 "data/maps/James_Woods/scripts.pory"
	closemessage
# 694 "data/maps/James_Woods/scripts.pory"
	delay 15
# 695 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov4
# 696 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 697 "data/maps/James_Woods/scripts.pory"
	delay 15
# 698 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_YOUNGSTER4, JWAustinmov4
# 699 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_BUGCATCHER4, JWAustinmov4
# 700 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov4
# 701 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 702 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_1
# 703 "data/maps/James_Woods/scripts.pory"
	closemessage
# 704 "data/maps/James_Woods/scripts.pory"
	delay 15
# 705 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 706 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 707 "data/maps/James_Woods/scripts.pory"
	delay 15
# 708 "data/maps/James_Woods/scripts.pory"
	playse 54
# 709 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 710 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 53, 7
# 711 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_AUSTINBALL
# 712 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 45, 49
# 713 "data/maps/James_Woods/scripts.pory"
	delay 30
# 714 "data/maps/James_Woods/scripts.pory"
	playse 21
# 715 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov5
# 716 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 717 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTINBALL
# 718 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_AUSTINBALL, 53, 7
# 719 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_2
# 720 "data/maps/James_Woods/scripts.pory"
	closemessage
# 721 "data/maps/James_Woods/scripts.pory"
	delay 30
# 722 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWPlayermov6
# 723 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 724 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_3
# 725 "data/maps/James_Woods/scripts.pory"
	closemessage
# 726 "data/maps/James_Woods/scripts.pory"
	createmon 0, 0, SPECIES_BUNEARY_STARTER, 5, ITEM_NONE, ITEM_POKE_BALL, NATURE_JOLLY, 0, 0, 0, 0, 0, 0, 0, 0, 31, 31, 31, 31, 31, 31, MOVE_POUND, 0, 0, 0, 1, 0, 0, 0
# 727 "data/maps/James_Woods/scripts.pory"
	delay 15
# 728 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AustinDefeated
# 729 "data/maps/James_Woods/scripts.pory"
	delay 30
# 730 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_4
# 731 "data/maps/James_Woods/scripts.pory"
	closemessage
# 732 "data/maps/James_Woods/scripts.pory"
	delay 20
# 733 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov5
# 734 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 735 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_5
# 736 "data/maps/James_Woods/scripts.pory"
	closemessage
# 737 "data/maps/James_Woods/scripts.pory"
	delay 20
# 738 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_6
# 739 "data/maps/James_Woods/scripts.pory"
	closemessage
# 740 "data/maps/James_Woods/scripts.pory"
	delay 15
# 741 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_7
# 742 "data/maps/James_Woods/scripts.pory"
	closemessage
# 743 "data/maps/James_Woods/scripts.pory"
	delay 15
# 744 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_8
# 745 "data/maps/James_Woods/scripts.pory"
	closemessage
# 746 "data/maps/James_Woods/scripts.pory"
	delay 15
# 747 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 748 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_YOUNGSTER4
# 749 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUGCATCHER4
# 750 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 751 "data/maps/James_Woods/scripts.pory"
	delay 15
# 752 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_9
# 753 "data/maps/James_Woods/scripts.pory"
	closemessage
# 754 "data/maps/James_Woods/scripts.pory"
	delay 15
# 755 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_AUSTIN4, JWAustinmov6
# 756 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 757 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_10
# 758 "data/maps/James_Woods/scripts.pory"
	closemessage
# 759 "data/maps/James_Woods/scripts.pory"
	delay 15
# 760 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 761 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_AUSTIN4
# 762 "data/maps/James_Woods/scripts.pory"
	addobject LOCALID_BUNEARY4
# 763 "data/maps/James_Woods/scripts.pory"
	setobjectxy LOCALID_BUNEARY4, 45, 49
# 764 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 765 "data/maps/James_Woods/scripts.pory"
	delay 15
# 766 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAustinmov6
# 767 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 768 "data/maps/James_Woods/scripts.pory"
	delay 15
# 769 "data/maps/James_Woods/scripts.pory"
	playmoncry SPECIES_BUNEARY, CRY_MODE_ENCOUNTER
# 770 "data/maps/James_Woods/scripts.pory"
	waitmoncry
# 771 "data/maps/James_Woods/scripts.pory"
	delay 15
# 772 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_11
# 773 "data/maps/James_Woods/scripts.pory"
	closemessage
# 774 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_TO_BLACK
# 775 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_BUNEARY4
# 776 "data/maps/James_Woods/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 777 "data/maps/James_Woods/scripts.pory"
	delay 15
# 778 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_Buneary4A_Text_12
# 779 "data/maps/James_Woods/scripts.pory"
	closemessage
# 780 "data/maps/James_Woods/scripts.pory"
	special HealPlayerParty
# 781 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEBALL, 1
# 782 "data/maps/James_Woods/scripts.pory"
	setvar VAR_INITIAL_EVENTS, 8
# 783 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_JAMES_WOODS_PEOPLE4
# 784 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_BUNEARY_OBTAINED
# 785 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 786 "data/maps/James_Woods/scripts.pory"
	clearflag FLAG_NO_ENCOUNTER
# 787 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


JamesWoods_EventScript_AlexBattle1::
# 791 "data/maps/James_Woods/scripts.pory"
	lockall
# 792 "data/maps/James_Woods/scripts.pory"
	playse 21
# 793 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov1
# 794 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 795 "data/maps/James_Woods/scripts.pory"
	delay 30
# 796 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov2
# 797 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 798 "data/maps/James_Woods/scripts.pory"
	delay 15
# 799 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 800 "data/maps/James_Woods/scripts.pory"
	delay 15
# 801 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 802 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_0
# 803 "data/maps/James_Woods/scripts.pory"
	closemessage
# 804 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 805 "data/maps/James_Woods/scripts.pory"
	delay 30
# 806 "data/maps/James_Woods/scripts.pory"
	playse 21
# 807 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov3
# 808 "data/maps/James_Woods/scripts.pory"
	delay 20
# 809 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 810 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_1
# 811 "data/maps/James_Woods/scripts.pory"
	closemessage
# 812 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 813 "data/maps/James_Woods/scripts.pory"
	delay 45
# 814 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_SPARE_POKEDEX, 1
# 815 "data/maps/James_Woods/scripts.pory"
	playfanfare 367
# 816 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_2
# 817 "data/maps/James_Woods/scripts.pory"
	closemessage
# 818 "data/maps/James_Woods/scripts.pory"
	waitfanfare
# 819 "data/maps/James_Woods/scripts.pory"
	delay 45
# 820 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 821 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_3
# 822 "data/maps/James_Woods/scripts.pory"
	closemessage
# 823 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 824 "data/maps/James_Woods/scripts.pory"
	delay 15
# 825 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_TITLE
# 826 "data/maps/James_Woods/scripts.pory"
	delay 60
# 827 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_FOLLOW_ME, FALSE
# 828 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov4
# 829 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 830 "data/maps/James_Woods/scripts.pory"
	delay 10
# 831 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 832 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_4
# 833 "data/maps/James_Woods/scripts.pory"
	closemessage
# 834 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 835 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov5
# 836 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov5
# 837 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 838 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 839 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_5
# 840 "data/maps/James_Woods/scripts.pory"
	closemessage
# 841 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 842 "data/maps/James_Woods/scripts.pory"
	delay 15
# 843 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 844 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_6
# 845 "data/maps/James_Woods/scripts.pory"
	closemessage
# 846 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 847 "data/maps/James_Woods/scripts.pory"
	delay 15
# 848 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 849 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_7
# 850 "data/maps/James_Woods/scripts.pory"
	closemessage
# 851 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 852 "data/maps/James_Woods/scripts.pory"
	delay 15
# 853 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 854 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_8
# 855 "data/maps/James_Woods/scripts.pory"
	closemessage
# 856 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 857 "data/maps/James_Woods/scripts.pory"
	delay 15
# 858 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 859 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_9
# 860 "data/maps/James_Woods/scripts.pory"
	closemessage
# 861 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 862 "data/maps/James_Woods/scripts.pory"
	delay 15
# 863 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 864 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_10
# 865 "data/maps/James_Woods/scripts.pory"
	closemessage
# 866 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 867 "data/maps/James_Woods/scripts.pory"
	delay 15
# 868 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 869 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_11
# 870 "data/maps/James_Woods/scripts.pory"
	closemessage
# 871 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 872 "data/maps/James_Woods/scripts.pory"
	delay 15
# 873 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_LYON, 0
# 874 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_12
# 875 "data/maps/James_Woods/scripts.pory"
	closemessage
# 876 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 877 "data/maps/James_Woods/scripts.pory"
	delay 30
# 878 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_LYON, JWAlexEventmov6
# 879 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 880 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov7
# 881 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov7
# 882 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 883 "data/maps/James_Woods/scripts.pory"
	fadenewbgm MUS_RG_FOLLOW_ME
# 884 "data/maps/James_Woods/scripts.pory"
	delay 45
# 885 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_LYON
# 886 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_LYON, 52, 3
# 887 "data/maps/James_Woods/scripts.pory"
	delay 45
# 888 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 889 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov8
# 890 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 891 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 892 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_13
# 893 "data/maps/James_Woods/scripts.pory"
	closemessage
# 894 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 895 "data/maps/James_Woods/scripts.pory"
	trainerbattle_no_intro TRAINER_200, AlexDefeated
# 896 "data/maps/James_Woods/scripts.pory"
	delay 45
# 897 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 898 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_14
# 899 "data/maps/James_Woods/scripts.pory"
	closemessage
# 900 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 901 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov9
# 902 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 903 "data/maps/James_Woods/scripts.pory"
	playse 21
# 904 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov10
# 905 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 906 "data/maps/James_Woods/scripts.pory"
	playse 10
# 907 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov11
# 908 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, JWAlexEventmov12
# 909 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 910 "data/maps/James_Woods/scripts.pory"
	delay 25
# 911 "data/maps/James_Woods/scripts.pory"
	createfieldmugshot MUGSHOT_ALEX, 0
# 912 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoods_EventScript_AlexBattle1_Text_15
# 913 "data/maps/James_Woods/scripts.pory"
	closemessage
# 914 "data/maps/James_Woods/scripts.pory"
	removefieldmugshot
# 915 "data/maps/James_Woods/scripts.pory"
	delay 25
# 916 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm MUS_PETALBURG_WOODS
# 917 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_RG_TITLE, FALSE
# 918 "data/maps/James_Woods/scripts.pory"
	applymovement LOCALID_ALEX, JWAlexEventmov13
# 919 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 920 "data/maps/James_Woods/scripts.pory"
	removeobject LOCALID_ALEX
# 921 "data/maps/James_Woods/scripts.pory"
	setobjectxyperm LOCALID_ALEX, 52, 3
# 922 "data/maps/James_Woods/scripts.pory"
	setvar VAR_ASPEN_LAB_EVENT, 4
# 923 "data/maps/James_Woods/scripts.pory"
	setflag FLAG_HIDE_ALEX_AND_LYON
# 924 "data/maps/James_Woods/scripts.pory"
	fadeoutbgm MUS_RG_TITLE
# 925 "data/maps/James_Woods/scripts.pory"
	playbgm MUS_PETALBURG_WOODS, FALSE
# 926 "data/maps/James_Woods/scripts.pory"
	releaseall
	return


# 937 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov1:
# 938 "data/maps/James_Woods/scripts.pory"
	emote_question_mark
	step_end

# 941 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov2:
# 942 "data/maps/James_Woods/scripts.pory"
	walk_down
# 943 "data/maps/James_Woods/scripts.pory"
	walk_right
# 944 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 947 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov3:
# 948 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 949 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 952 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov4:
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 953 "data/maps/James_Woods/scripts.pory"
	walk_up
# 954 "data/maps/James_Woods/scripts.pory"
	face_left
	step_end

# 957 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov5:
# 958 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 961 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov6:
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
# 962 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 965 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov7:
# 966 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 969 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov8:
# 970 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 973 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov9:
# 974 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 974 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 974 "data/maps/James_Woods/scripts.pory"
	walk_in_place_faster_up
# 975 "data/maps/James_Woods/scripts.pory"
	jump_in_place_up
# 975 "data/maps/James_Woods/scripts.pory"
	jump_in_place_up
# 976 "data/maps/James_Woods/scripts.pory"
	face_right
# 977 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 978 "data/maps/James_Woods/scripts.pory"
	jump_left
# 978 "data/maps/James_Woods/scripts.pory"
	jump_left
# 979 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
# 980 "data/maps/James_Woods/scripts.pory"
	emote_double_exclamation_mark
	step_end

# 983 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov10:
# 984 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 985 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 986 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
	step_end

# 989 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov11:
# 990 "data/maps/James_Woods/scripts.pory"
	jump_right
	step_end

# 993 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov12:
# 994 "data/maps/James_Woods/scripts.pory"
	face_left
# 995 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 996 "data/maps/James_Woods/scripts.pory"
	walk_right
# 997 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1000 "data/maps/James_Woods/scripts.pory"
JWAlexEventmov13:
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1001 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1004 "data/maps/James_Woods/scripts.pory"
JWAustinmov5:
# 1005 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1008 "data/maps/James_Woods/scripts.pory"
JWAustinmov6:
# 1009 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1012 "data/maps/James_Woods/scripts.pory"
JWPlayermov6:
# 1013 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1016 "data/maps/James_Woods/scripts.pory"
JWYoungstermov:
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1017 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1018 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1021 "data/maps/James_Woods/scripts.pory"
JWAustinmov3:
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1022 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1023 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1023 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1026 "data/maps/James_Woods/scripts.pory"
JWAustinmov4:
# 1027 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1030 "data/maps/James_Woods/scripts.pory"
JWPlayermov:
# 1031 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
	step_end

# 1034 "data/maps/James_Woods/scripts.pory"
JWPlayermov2x:
# 1035 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1036 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1036 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1039 "data/maps/James_Woods/scripts.pory"
JWPlayermov2xx:
# 1040 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1040 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1040 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1043 "data/maps/James_Woods/scripts.pory"
JWPlayermov3:
# 1044 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1045 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1048 "data/maps/James_Woods/scripts.pory"
JWPlayermov4:
# 1049 "data/maps/James_Woods/scripts.pory"
	face_down
# 1050 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1051 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1052 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1055 "data/maps/James_Woods/scripts.pory"
JWPlayermov5:
# 1056 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1057 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1060 "data/maps/James_Woods/scripts.pory"
JWGangmov:
# 1061 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1064 "data/maps/James_Woods/scripts.pory"
JWBugCatchermov:
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1065 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1068 "data/maps/James_Woods/scripts.pory"
JWPlayermov2:
# 1069 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1070 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1073 "data/maps/James_Woods/scripts.pory"
JWCameramov1:
# 1074 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1074 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1074 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1074 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1077 "data/maps/James_Woods/scripts.pory"
JWCameramov2:
# 1078 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1078 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1078 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1078 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1081 "data/maps/James_Woods/scripts.pory"
JWBallGrab:
# 1082 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1082 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1082 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1082 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1085 "data/maps/James_Woods/scripts.pory"
JWBallGrabx:
# 1086 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1086 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1087 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1088 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1088 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1091 "data/maps/James_Woods/scripts.pory"
JWAustinmov1:
# 1092 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1095 "data/maps/James_Woods/scripts.pory"
JWAustinmov2:
# 1096 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1097 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1100 "data/maps/James_Woods/scripts.pory"
JWBallmov1:
# 1101 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1104 "data/maps/James_Woods/scripts.pory"
JWBunearymov1:
# 1105 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1106 "data/maps/James_Woods/scripts.pory"
	walk_fast_right
# 1107 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1108 "data/maps/James_Woods/scripts.pory"
	walk_fast_right
# 1109 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1109 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1109 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1109 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1109 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
	step_end

# 1112 "data/maps/James_Woods/scripts.pory"
JWBunearymov2:
# 1113 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1114 "data/maps/James_Woods/scripts.pory"
	walk_fast_left
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
# 1115 "data/maps/James_Woods/scripts.pory"
	walk_fast_up
	step_end

# 1118 "data/maps/James_Woods/scripts.pory"
JWBunearymov3:
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
# 1119 "data/maps/James_Woods/scripts.pory"
	walk_fast_down
	step_end

# 1122 "data/maps/James_Woods/scripts.pory"
JWBunearymov4:
# 1123 "data/maps/James_Woods/scripts.pory"
	face_down
# 1124 "data/maps/James_Woods/scripts.pory"
	lock_facing_direction
# 1125 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1125 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1126 "data/maps/James_Woods/scripts.pory"
	unlock_facing_direction
	step_end

# 1129 "data/maps/James_Woods/scripts.pory"
JWmov1:
# 1130 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1131 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1134 "data/maps/James_Woods/scripts.pory"
JWmov1x:
# 1135 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1136 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1139 "data/maps/James_Woods/scripts.pory"
JWmov2:
# 1140 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1143 "data/maps/James_Woods/scripts.pory"
JWmov2x:
# 1144 "data/maps/James_Woods/scripts.pory"
	walk_down
	step_end

# 1147 "data/maps/James_Woods/scripts.pory"
JWmov3:
# 1148 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1149 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1152 "data/maps/James_Woods/scripts.pory"
JWmov3x:
# 1153 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1154 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1157 "data/maps/James_Woods/scripts.pory"
JWmov4:
# 1158 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1159 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1160 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1163 "data/maps/James_Woods/scripts.pory"
JWmov4x:
# 1164 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1165 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1168 "data/maps/James_Woods/scripts.pory"
JWmov5:
# 1169 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1172 "data/maps/James_Woods/scripts.pory"
JWmov5x:
# 1173 "data/maps/James_Woods/scripts.pory"
	walk_left
	step_end

# 1176 "data/maps/James_Woods/scripts.pory"
JWmov6:
# 1177 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1178 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1179 "data/maps/James_Woods/scripts.pory"
	face_down
	step_end

# 1182 "data/maps/James_Woods/scripts.pory"
JWmov7:
# 1183 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1184 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1185 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1188 "data/maps/James_Woods/scripts.pory"
JWmov7x:
# 1189 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1190 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1191 "data/maps/James_Woods/scripts.pory"
	face_left
	step_end

# 1194 "data/maps/James_Woods/scripts.pory"
JWmov8:
# 1195 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1198 "data/maps/James_Woods/scripts.pory"
JWmov8x:
# 1199 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1199 "data/maps/James_Woods/scripts.pory"
	walk_up
	step_end

# 1202 "data/maps/James_Woods/scripts.pory"
JWmov9:
# 1203 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1204 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1205 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1208 "data/maps/James_Woods/scripts.pory"
JWmov9x:
# 1209 "data/maps/James_Woods/scripts.pory"
	walk_right
# 1210 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1213 "data/maps/James_Woods/scripts.pory"
JWmov10:
# 1214 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1215 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1216 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1219 "data/maps/James_Woods/scripts.pory"
JWmov11:
# 1220 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1221 "data/maps/James_Woods/scripts.pory"
	face_up
	step_end

# 1224 "data/maps/James_Woods/scripts.pory"
JWmov11x:
# 1225 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
# 1226 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1227 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1230 "data/maps/James_Woods/scripts.pory"
JWmov12:
# 1231 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1232 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1233 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1236 "data/maps/James_Woods/scripts.pory"
JWmov13:
# 1237 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1240 "data/maps/James_Woods/scripts.pory"
JWmov13x:
# 1241 "data/maps/James_Woods/scripts.pory"
	walk_right
	step_end

# 1244 "data/maps/James_Woods/scripts.pory"
JWmov14:
# 1245 "data/maps/James_Woods/scripts.pory"
	walk_down
# 1246 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

# 1249 "data/maps/James_Woods/scripts.pory"
JWmov14x:
# 1250 "data/maps/James_Woods/scripts.pory"
	walk_left
# 1251 "data/maps/James_Woods/scripts.pory"
	walk_up
# 1252 "data/maps/James_Woods/scripts.pory"
	face_right
	step_end

JamesWoodsHoneyTree::
# 1256 "data/maps/James_Woods/scripts.pory"
	lock
# 1257 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_0
# 1258 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1259 "data/maps/James_Woods/scripts.pory"
	checkitem ITEM_HONEY, 1
# 1260 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq JamesWoodsHoneyTree_1
# 1350 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_1:
# 1261 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_1, MSGBOX_YESNO
# 1262 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne JamesWoodsHoneyTree_4
# 1345 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_4:
# 1264 "data/maps/James_Woods/scripts.pory"
	removeitem ITEM_HONEY, 1
# 1265 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_2
# 1266 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1267 "data/maps/James_Woods/scripts.pory"
	delay 30
# 1268 "data/maps/James_Woods/scripts.pory"
	playse 21
# 1269 "data/maps/James_Woods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movx2
# 1270 "data/maps/James_Woods/scripts.pory"
	waitmovement 0
# 1271 "data/maps/James_Woods/scripts.pory"
	random 10
# 1272 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq JamesWoodsHoneyTree_8
# 1279 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq JamesWoodsHoneyTree_9
# 1286 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq JamesWoodsHoneyTree_10
# 1293 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq JamesWoodsHoneyTree_11
# 1300 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq JamesWoodsHoneyTree_12
# 1307 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq JamesWoodsHoneyTree_13
# 1314 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq JamesWoodsHoneyTree_14
JamesWoodsHoneyTree_7:
# 1321 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq JamesWoodsHoneyTree_22
# 1328 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq JamesWoodsHoneyTree_23
# 1335 "data/maps/James_Woods/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq JamesWoodsHoneyTree_24
	return

JamesWoodsHoneyTree_8:
# 1273 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1274 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1275 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1276 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1277 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_9:
# 1280 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1281 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1282 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1283 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1284 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_10:
# 1287 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1288 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1289 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 1290 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1291 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_11:
# 1294 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1295 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1296 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 1297 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1298 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_12:
# 1301 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1302 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1303 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 1304 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1305 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_13:
# 1308 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1309 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1310 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_DOTTLER, 10, ITEM_NONE
# 1311 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1312 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_14:
# 1315 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1316 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1317 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_SEEDOT, 10, ITEM_NONE
# 1318 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1319 "data/maps/James_Woods/scripts.pory"
	release
	goto JamesWoodsHoneyTree_7

JamesWoodsHoneyTree_22:
# 1322 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1323 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1324 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 10, ITEM_NONE
# 1325 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1326 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_23:
# 1329 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1330 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1331 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 1332 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1333 "data/maps/James_Woods/scripts.pory"
	release
	return

JamesWoodsHoneyTree_24:
# 1336 "data/maps/James_Woods/scripts.pory"
	msgbox JamesWoodsHoneyTree_Text_3
# 1337 "data/maps/James_Woods/scripts.pory"
	closemessage
# 1338 "data/maps/James_Woods/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 1339 "data/maps/James_Woods/scripts.pory"
	dowildbattle
# 1340 "data/maps/James_Woods/scripts.pory"
	release
	return


# 1354 "data/maps/James_Woods/scripts.pory"
movx2:
# 1355 "data/maps/James_Woods/scripts.pory"
	emote_exclamation_mark
	step_end

JamesWoods_EventScript_Trainer1::
# 1359 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_06, JWBugCatcher1Intro, JWBugCatcher1Defeated
# 1360 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher1PostBattle, MSGBOX_AUTOCLOSE
# 1361 "data/maps/James_Woods/scripts.pory"
	waitmessage
	return


JamesWoods_EventScript_Trainer2::
# 1365 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_05, JWYoungster1Intro, JWYoungster1Defeated
# 1366 "data/maps/James_Woods/scripts.pory"
	msgbox JWYoungster1PostBattle, MSGBOX_AUTOCLOSE
# 1367 "data/maps/James_Woods/scripts.pory"
	waitmessage
	return


JamesWoods_EventScript_Trainer3::
# 1371 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_07, JWBugCatcher2Intro, JWBugCatcher2Defeated
# 1372 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher2PostBattle, MSGBOX_AUTOCLOSE
# 1373 "data/maps/James_Woods/scripts.pory"
	waitmessage
	return


JamesWoods_EventScript_Trainer4::
# 1377 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_08, JWBugCatcher3Intro, JWBugCatcher3Defeated
# 1378 "data/maps/James_Woods/scripts.pory"
	msgbox JWBugCatcher3PostBattle, MSGBOX_AUTOCLOSE
# 1379 "data/maps/James_Woods/scripts.pory"
	waitmessage
	return


JamesWoods_EventScript_Trainer5::
# 1383 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_09, JWLassIntro, JWLassDefeated
# 1384 "data/maps/James_Woods/scripts.pory"
	msgbox JWLassPostBattle, MSGBOX_AUTOCLOSE
# 1385 "data/maps/James_Woods/scripts.pory"
	waitmessage
	return


JamesWoods_EventScript_Trainer6::
# 1389 "data/maps/James_Woods/scripts.pory"
	trainerbattle_single TRAINER_04, JWYoungster2Intro, JWYoungster2Defeated
# 1390 "data/maps/James_Woods/scripts.pory"
	msgbox JWYoungster2PostBattle
# 1391 "data/maps/James_Woods/scripts.pory"
	waitmessage
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
# 92 "data/maps/James_Woods/scripts.pory"
	.string "Don't you know when to quit?$"

JamesWoods_EventScript_AustinCatcher2_Text_0:
# 99 "data/maps/James_Woods/scripts.pory"
	.string "Get lost already!$"

JamesWoods_EventScript_AustinCatcher1_Text_0:
# 106 "data/maps/James_Woods/scripts.pory"
	.string "Don't you have anything else better\nto do?$"

JamesWoods_EventScript_YoungsterTile1_Text_0:
# 115 "data/maps/James_Woods/scripts.pory"
	.string "Hold it, you're not going anywhere!$"

JamesWoods_EventScript_BugCatcherTile1_Text_0:
# 149 "data/maps/James_Woods/scripts.pory"
	.string "Oh no you don't!\nGet out of here!$"

JamesWoods_EventScript_Buneary1A_Text_0:
# 262 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: We finally got her, Austin!\n??? 2: Throw a Poké Ball at it!$"

JamesWoods_EventScript_Buneary1A_Text_1:
# 289 "data/maps/James_Woods/scripts.pory"
	.string "Austin: Damn it!\pAlright, let's split up.\nShe can't have gotten far!$"

JamesWoods_EventScript_Buneary1A_Text_2:
# 298 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: What do you want?\n??? 2: Beat it!$"

JamesWoods_EventScript_Buneary1A_Text_3:
# 301 "data/maps/James_Woods/scripts.pory"
	.string "Austin: You idiots!\nThe Buneary is getting away! Find it!$"

JamesWoods_EventScript_Buneary1A_Text_4:
# 304 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: Sorry Austin!\n??? 2: Yeah, we're sorry!$"

JamesWoods_EventScript_Buneary1A_Text_5:
# 307 "data/maps/James_Woods/scripts.pory"
	.string "Austin: You saw nothing, got it?$"

JamesWoods_EventScript_Buneary1A_Text_6:
# 325 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} obtained a Poké Ball.$"

JamesWoods_EventScript_Buneary2A_Text_0:
# 435 "data/maps/James_Woods/scripts.pory"
	.string "Austin: Tch...\nThat Buneary is mine!$"

JamesWoods_EventScript_Buneary3A_Text_0:
# 481 "data/maps/James_Woods/scripts.pory"
	.string "Austin: Almost had it!$"

JamesWoods_EventScript_Buneary3A_Text_1:
# 489 "data/maps/James_Woods/scripts.pory"
	.string "??? 2: Any luck?$"

JamesWoods_EventScript_Buneary3A_Text_2:
# 495 "data/maps/James_Woods/scripts.pory"
	.string "Austin: It went further south.\nWe can't let it leave the forest!\lLet's split up, cover more ground!$"

JamesWoods_EventScript_Buneary4A_Text_0:
# 570 "data/maps/James_Woods/scripts.pory"
	.string "Austin: There it is!\nAnd this guy too...\pHand over the Buneary or else!\nI need it for my collection!$"

JamesWoods_EventScript_Buneary4A_Text_1:
# 580 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: It's three on one.\n??? 2: We can take 'em!$"

JamesWoods_EventScript_Buneary4A_Text_2:
# 597 "data/maps/James_Woods/scripts.pory"
	.string "The Buneary used the spare Poké Ball\nin your back pocket…$"

JamesWoods_EventScript_Buneary4A_Text_3:
# 602 "data/maps/James_Woods/scripts.pory"
	.string "Austin: No. Freaking. Way.\pIt let itself be caught by you?\nHand over the Ball, now!\p...\pFine, I'll take it by force!$"

JamesWoods_EventScript_Buneary4A_Text_4:
# 608 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: Woah... Austin lost.\n??? 2: He's never lost before!$"

JamesWoods_EventScript_Buneary4A_Text_5:
# 613 "data/maps/James_Woods/scripts.pory"
	.string "Austin: Why didn't you idiots help me\nout here?!$"

JamesWoods_EventScript_Buneary4A_Text_6:
# 616 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: Honestly, I'm getting tired of\nalways being insulted by you.\p??? 2: Yeah, this whole thing has gone\nway too far. Poor Buneary…$"

JamesWoods_EventScript_Buneary4A_Text_7:
# 619 "data/maps/James_Woods/scripts.pory"
	.string "Austin: C'mon, we can still rush 'em and\nmake off with it!$"

JamesWoods_EventScript_Buneary4A_Text_8:
# 622 "data/maps/James_Woods/scripts.pory"
	.string "??? 1: Forget this, man.\n??? 2: I'm getting out of here.$"

JamesWoods_EventScript_Buneary4A_Text_9:
# 630 "data/maps/James_Woods/scripts.pory"
	.string "Austin: You two idiots can't just leave\nme here!\p…$"

JamesWoods_EventScript_Buneary4A_Text_10:
# 635 "data/maps/James_Woods/scripts.pory"
	.string "Whatever, keep the Buneary.\nIt's not that strong anyway.\pI'm going to collect all of the rarest\nPokémon in the world!\pNext time I see you, it's payback time.$"

JamesWoods_EventScript_Buneary4A_Text_11:
# 650 "data/maps/James_Woods/scripts.pory"
	.string "It seems the Buneary trusts you.\nIt wants to come along with you!$"

JamesWoods_EventScript_Buneary4A_Text_12:
# 656 "data/maps/James_Woods/scripts.pory"
	.string "The Repel's effect wore off…$"

JamesWoods_EventScript_AlexBattle1_Text_0:
# 802 "data/maps/James_Woods/scripts.pory"
	.string "Alex: There we go, little guy.\nThat Potion should help.$"

JamesWoods_EventScript_AlexBattle1_Text_1:
# 810 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nCheck it out, I found a Riolu!\pIt looked like the poor little guy was\nabandoned by its Trainer…\pI adopted him and gave him a good meal.\nNow we're best buddies!\p…\pOh, cool! You've got a Pokémon too!\nWe should battle each other!\pHuh?\pWhat's that in your hand?\nA Pokédex from the Professor?$"

JamesWoods_EventScript_AlexBattle1_Text_2:
# 816 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} delivered the Pokédex.$"

JamesWoods_EventScript_AlexBattle1_Text_3:
# 821 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: This is so cool!\nWell now I gotta go thank him!$"

JamesWoods_EventScript_AlexBattle1_Text_4:
# 832 "data/maps/James_Woods/scripts.pory"
	.string "???: Excuse me. Do you two have a\nminute to talk?$"

JamesWoods_EventScript_AlexBattle1_Text_5:
# 839 "data/maps/James_Woods/scripts.pory"
	.string "Alex: Sure thing, man.\nI'm Alex, and this is {COLOR GREEN}{PLAYER}{COLOR BLUE}.$"

JamesWoods_EventScript_AlexBattle1_Text_6:
# 844 "data/maps/James_Woods/scripts.pory"
	.string "???: Nice to meet ya. I'm Lyon.\nSorry if I was interrupting anything.$"

JamesWoods_EventScript_AlexBattle1_Text_7:
# 849 "data/maps/James_Woods/scripts.pory"
	.string "Alex: It's cool, my dude.\nWhat did you wanna talk about?$"

JamesWoods_EventScript_AlexBattle1_Text_8:
# 854 "data/maps/James_Woods/scripts.pory"
	.string "Lyon: Have you seen a woman around\nhere? Around her late 20s?\lGlasses...Hair color sort of like mine?$"

JamesWoods_EventScript_AlexBattle1_Text_9:
# 859 "data/maps/James_Woods/scripts.pory"
	.string "Alex: Sorry man, haven't seen her.\nIs she your sister or something?$"

JamesWoods_EventScript_AlexBattle1_Text_10:
# 864 "data/maps/James_Woods/scripts.pory"
	.string "Lyon: Something like that, don't worry\nabout it. Figured she wasn't nearby.\pAnyway, I wouldn't stand here for too\nmuch longer.\pThis bridge is pretty dangerous.\nPeople have fallen off before.$"

JamesWoods_EventScript_AlexBattle1_Text_11:
# 869 "data/maps/James_Woods/scripts.pory"
	.string "Alex: Seems pretty sturdy to us.\nBut, thanks for the tip!$"

JamesWoods_EventScript_AlexBattle1_Text_12:
# 874 "data/maps/James_Woods/scripts.pory"
	.string "Lyon: Right. Suit yourselves.\nI'll get out of your hair.\pGood luck with your Pokédex quest!$"

JamesWoods_EventScript_AlexBattle1_Text_13:
# 892 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR BLUE}Alex: Well, that was weird.\nSeemed like he had a lot on his mind.\pAnyway, before I go back to the village,\nwanna battle?\pC'mon, don't you wanna see who's the\nstronger Trainer?\pI'm warning you, Riolu and I are a team\nthat can't be stopped!$"

JamesWoods_EventScript_AlexBattle1_Text_14:
# 898 "data/maps/James_Woods/scripts.pory"
	.string "Alex: That. Was. AWESOME!$"

JamesWoods_EventScript_AlexBattle1_Text_15:
# 912 "data/maps/James_Woods/scripts.pory"
	.string "Alex: Thanks for the save…\nGuess that Lyon guy had a point.\pI should, uh, go to the Lab so I can\nthank the Professor.\pIt was a ton of fun battling you\n{COLOR GREEN}{PLAYER}{COLOR BLUE}!\pRiolu and I are going to keep training\ntogether! See you around!$"

JamesWoodsHoneyTree_Text_0:
# 1257 "data/maps/James_Woods/scripts.pory"
	.string "There is a sweet scent in the air...$"

JamesWoodsHoneyTree_Text_1:
# 1261 "data/maps/James_Woods/scripts.pory"
	.string "Slather the bark with Honey?$"

JamesWoodsHoneyTree_Text_2:
# 1265 "data/maps/James_Woods/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} slathered the bark with Honey.$"

JamesWoodsHoneyTree_Text_3:
# 1273 "data/maps/James_Woods/scripts.pory"
	.string "A wild Pokémon attacked!$"

AustinDefeated::
# 929 "data/maps/James_Woods/scripts.pory"
	.string "What? B-but how!?$"

AlexDefeated::
# 933 "data/maps/James_Woods/scripts.pory"
	.string "Wow! You're good!$"

JWLassIntro::
# 1394 "data/maps/James_Woods/scripts.pory"
	.string "Hi! You look so cute!$"

JWLassDefeated::
# 1398 "data/maps/James_Woods/scripts.pory"
	.string "So cool!$"

JWLassPostBattle::
# 1402 "data/maps/James_Woods/scripts.pory"
	.string "If you're free later, would you like to\ngo to the beach with me?$"

JWYoungster2Intro::
# 1406 "data/maps/James_Woods/scripts.pory"
	.string "Hey again. You got a minute?$"

JWYoungster2Defeated::
# 1410 "data/maps/James_Woods/scripts.pory"
	.string "You really are strong.$"

JWYoungster2PostBattle::
# 1414 "data/maps/James_Woods/scripts.pory"
	.string "I used to think Austin was cool.\nWhat a jerk.$"

JWBugCatcher3Intro::
# 1418 "data/maps/James_Woods/scripts.pory"
	.string "I wanted to say sorry for earlier.\nCan we battle?$"

JWBugCatcher3Defeated::
# 1422 "data/maps/James_Woods/scripts.pory"
	.string "Truce?$"

JWBugCatcher3PostBattle::
# 1426 "data/maps/James_Woods/scripts.pory"
	.string "Austin was a real jerk. Sorry Buneary.$"

JWBugCatcher2Intro::
# 1430 "data/maps/James_Woods/scripts.pory"
	.string "Shhh. You'll scare the bugs away!$"

JWBugCatcher2Defeated::
# 1434 "data/maps/James_Woods/scripts.pory"
	.string "Wow.$"

JWBugCatcher2PostBattle::
# 1438 "data/maps/James_Woods/scripts.pory"
	.string "Maybe I should go back home.$"

JWYoungster1Intro::
# 1442 "data/maps/James_Woods/scripts.pory"
	.string "Our eyes met! Time to battle!$"

JWYoungster1Defeated::
# 1446 "data/maps/James_Woods/scripts.pory"
	.string "Crud!$"

JWYoungster1PostBattle::
# 1450 "data/maps/James_Woods/scripts.pory"
	.string "Don't you know that when two trainers\nmeet, they have to battle?$"

JWBugCatcher1Intro::
# 1454 "data/maps/James_Woods/scripts.pory"
	.string "I'm looking to catch some bugs!\nHave you found any?$"

JWBugCatcher1Defeated::
# 1458 "data/maps/James_Woods/scripts.pory"
	.string "I need stronger bugs.$"

JWBugCatcher1PostBattle::
# 1462 "data/maps/James_Woods/scripts.pory"
	.string "The James Woods is chock full of Bugs!$"
