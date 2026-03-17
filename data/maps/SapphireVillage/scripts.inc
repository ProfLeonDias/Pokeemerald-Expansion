SapphireVillage_MapScripts::
# 2 "data/maps/SapphireVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransitionSapphireVillage
# 3 "data/maps/SapphireVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OnLoadSapphireVillage
	.byte 0


OnTransitionSapphireVillage::
# 7 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_VISITED_LITTLEROOT_TOWN
	return


OnLoadSapphireVillage::
# 12 "data/maps/SapphireVillage/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, OnLoadSapphireVillage_1
	return

OnLoadSapphireVillage_1:
# 13 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 2, 17, METATILE_Wish_Grass3, FALSE
# 14 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 3, 17, METATILE_Wish_Grass4, FALSE
# 15 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 4, 17, METATILE_Wish_Grass3, FALSE
# 16 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 5, 17, METATILE_Sapphire_Village_Roof1, FALSE
# 17 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 6, 17, METATILE_Sapphire_Village_Roof2, FALSE
# 18 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 7, 17, METATILE_Sapphire_Village_Roof3, FALSE
# 19 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 8, 17, METATILE_Sapphire_Village_Roof4, FALSE
# 20 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 9, 17, METATILE_Sapphire_Village_Roof5, FALSE
# 21 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 10, 17, METATILE_Wish_Grass3, FALSE
# 22 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 2, 18, METATILE_Sapphire_Village_GoldTreeL, FALSE
# 23 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 3, 18, METATILE_Sapphire_Village_GoldTreeR, FALSE
# 24 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 4, 18, METATILE_Wish_Grass1, FALSE
# 25 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 10, 18, METATILE_Wish_Grass1, FALSE
# 26 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 4, 19, METATILE_Wish_Grass3, FALSE
# 27 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 10, 19, METATILE_Wish_Grass3, FALSE
# 28 "data/maps/SapphireVillage/scripts.pory"
	setmetatile 10, 20, METATILE_Wish_MailboxTop, FALSE
	return


SapphireVillage_EventScript_OldMan::
# 33 "data/maps/SapphireVillage/scripts.pory"
	lock
# 34 "data/maps/SapphireVillage/scripts.pory"
	faceplayer
# 35 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_OldMan_Text_0
# 36 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_Girl::
# 40 "data/maps/SapphireVillage/scripts.pory"
	lock
# 41 "data/maps/SapphireVillage/scripts.pory"
	faceplayer
# 42 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_Girl_Text_0
# 43 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_FatMan::
# 47 "data/maps/SapphireVillage/scripts.pory"
	lock
# 48 "data/maps/SapphireVillage/scripts.pory"
	faceplayer
# 49 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_FatMan_Text_0
# 50 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_Woman::
# 54 "data/maps/SapphireVillage/scripts.pory"
	lock
# 55 "data/maps/SapphireVillage/scripts.pory"
	faceplayer
# 56 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_Woman_Text_0
# 57 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_LabSign::
# 61 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_LabSign_Text_0
# 62 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_TownSign::
# 66 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_TownSign_Text_0
# 67 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_Mailbox1::
# 71 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_Mailbox1_Text_0
# 72 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_Mailbox2::
# 76 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_Mailbox2_Text_0
# 77 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_Mailbox3::
# 81 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_Mailbox3_Text_0
# 82 "data/maps/SapphireVillage/scripts.pory"
	release
	return


SapphireVillage_EventScript_EventScriptA::
# 86 "data/maps/SapphireVillage/scripts.pory"
	checkplayergender
# 87 "data/maps/SapphireVillage/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EgyptEventA
# 88 "data/maps/SapphireVillage/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, AnthonyEventA
	return


SapphireVillage_EventScript_EventScriptB::
# 92 "data/maps/SapphireVillage/scripts.pory"
	checkplayergender
# 93 "data/maps/SapphireVillage/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, EgyptEventB
# 94 "data/maps/SapphireVillage/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, AnthonyEventB
	return


SapphireVillage_EventScript_HoneyTree::
# 98 "data/maps/SapphireVillage/scripts.pory"
	lock
# 99 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_0
# 100 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 101 "data/maps/SapphireVillage/scripts.pory"
	checkitem ITEM_HONEY, 1
# 102 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SapphireVillage_EventScript_HoneyTree_1
# 192 "data/maps/SapphireVillage/scripts.pory"
	release
	return

SapphireVillage_EventScript_HoneyTree_1:
# 103 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_1, MSGBOX_YESNO
# 104 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne SapphireVillage_EventScript_HoneyTree_4
# 187 "data/maps/SapphireVillage/scripts.pory"
	release
	return

SapphireVillage_EventScript_HoneyTree_4:
# 106 "data/maps/SapphireVillage/scripts.pory"
	removeitem ITEM_HONEY, 1
# 107 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_2
# 108 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 109 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 110 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 111 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, movx
# 112 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 113 "data/maps/SapphireVillage/scripts.pory"
	random 10
# 114 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq SapphireVillage_EventScript_HoneyTree_8
# 121 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq SapphireVillage_EventScript_HoneyTree_9
# 128 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq SapphireVillage_EventScript_HoneyTree_10
# 135 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 3
	goto_if_eq SapphireVillage_EventScript_HoneyTree_11
# 142 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 4
	goto_if_eq SapphireVillage_EventScript_HoneyTree_12
# 149 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq SapphireVillage_EventScript_HoneyTree_13
# 156 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq SapphireVillage_EventScript_HoneyTree_14
SapphireVillage_EventScript_HoneyTree_7:
# 163 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq SapphireVillage_EventScript_HoneyTree_22
# 170 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 8
	goto_if_eq SapphireVillage_EventScript_HoneyTree_23
# 177 "data/maps/SapphireVillage/scripts.pory"
	compare VAR_RESULT, 9
	goto_if_eq SapphireVillage_EventScript_HoneyTree_24
	return

SapphireVillage_EventScript_HoneyTree_8:
# 115 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 116 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 117 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 118 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 119 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_9:
# 122 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 123 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 124 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 125 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 126 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_10:
# 129 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 130 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 131 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_COMBEE, 10, ITEM_NONE
# 132 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 133 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_11:
# 136 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 137 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 138 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 139 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 140 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_12:
# 143 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 144 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 145 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_HOOTHOOT, 10, ITEM_NONE
# 146 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 147 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_13:
# 150 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 151 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 152 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_ROOKIDEE, 10, ITEM_NONE
# 153 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 154 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_14:
# 157 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 158 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 159 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_GRUBBIN, 10, ITEM_NONE
# 160 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 161 "data/maps/SapphireVillage/scripts.pory"
	release
	goto SapphireVillage_EventScript_HoneyTree_7

SapphireVillage_EventScript_HoneyTree_22:
# 164 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 165 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 166 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_BLIPBUG, 10, ITEM_NONE
# 167 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 168 "data/maps/SapphireVillage/scripts.pory"
	release
	return

SapphireVillage_EventScript_HoneyTree_23:
# 171 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 172 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 173 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 174 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 175 "data/maps/SapphireVillage/scripts.pory"
	release
	return

SapphireVillage_EventScript_HoneyTree_24:
# 178 "data/maps/SapphireVillage/scripts.pory"
	msgbox SapphireVillage_EventScript_HoneyTree_Text_3
# 179 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 180 "data/maps/SapphireVillage/scripts.pory"
	setwildbattle SPECIES_BOUNSWEET, 10, ITEM_NONE
# 181 "data/maps/SapphireVillage/scripts.pory"
	dowildbattle
# 182 "data/maps/SapphireVillage/scripts.pory"
	release
	return


# 196 "data/maps/SapphireVillage/scripts.pory"
movx:
# 197 "data/maps/SapphireVillage/scripts.pory"
	emote_exclamation_mark
	step_end

EgyptEventA::
# 201 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 202 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 203 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_0
# 204 "data/maps/SapphireVillage/scripts.pory"
	waitmessage
# 205 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 206 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 207 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov1
# 208 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 209 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 210 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov2
# 211 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 212 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 213 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_EGYPT
# 214 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_EGYPT, 14, 18
# 215 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_EGYPT, mov3
# 216 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 217 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 218 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 219 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 220 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_1
# 221 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 222 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 223 "data/maps/SapphireVillage/scripts.pory"
	delay 50
# 224 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_2
# 225 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 226 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 227 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 228 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_EGYPT, mov5
# 229 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 230 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 231 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 232 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ASPEN
# 233 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ASPEN, 13, 18
# 234 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov6
# 235 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 236 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 237 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 238 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_3
# 239 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 240 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 241 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 242 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 243 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_4
# 244 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 245 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 246 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 247 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 248 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_5
# 249 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 250 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 251 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 252 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 253 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_6
# 254 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 255 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 256 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 257 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov7
# 258 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov8
# 259 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 260 "data/maps/SapphireVillage/scripts.pory"
	opendoor 7, 11
# 261 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 262 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov9
# 263 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov10
# 264 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 265 "data/maps/SapphireVillage/scripts.pory"
	closedoor 7, 11
# 266 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 267 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 1
# 268 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_SAPPHIRE_VILLAGE_STATE, 1
# 269 "data/maps/SapphireVillage/scripts.pory"
	clearflag FLAG_HIDE_PROF_ASPEN
# 270 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_HIDE_SAPPHIRE_VILLAGE_PEOPLE
# 271 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_NO_ENCOUNTER
# 272 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 273 "data/maps/SapphireVillage/scripts.pory"
	warp MAP_SAPPHIRE_VILLAGE_LAB, 6, 12
# 274 "data/maps/SapphireVillage/scripts.pory"
	release
	return


AnthonyEventA::
# 278 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 279 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 280 "data/maps/SapphireVillage/scripts.pory"
	message AnthonyEventA_Text_0
# 281 "data/maps/SapphireVillage/scripts.pory"
	waitmessage
# 282 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 283 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 284 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov1
# 285 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 286 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 287 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov2
# 288 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 289 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 290 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ANTHONY
# 291 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ANTHONY, 14, 18
# 292 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ANTHONY, mov3
# 293 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 294 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4
# 295 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 296 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 297 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_1
# 298 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 299 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 300 "data/maps/SapphireVillage/scripts.pory"
	delay 50
# 301 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_2
# 302 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 303 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 304 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 305 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ANTHONY, mov5
# 306 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 307 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 308 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 309 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ASPEN
# 310 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ASPEN, 13, 18
# 311 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov6
# 312 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 313 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 314 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 315 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_3
# 316 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 317 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 318 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 319 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 320 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_2
# 321 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 322 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 323 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 324 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 325 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_3
# 326 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 327 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 328 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 329 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 330 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_6
# 331 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 332 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 333 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 334 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov7
# 335 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov8
# 336 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 337 "data/maps/SapphireVillage/scripts.pory"
	opendoor 7, 11
# 338 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 339 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov9
# 340 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov10
# 341 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 342 "data/maps/SapphireVillage/scripts.pory"
	closedoor 7, 11
# 343 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 344 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 1
# 345 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_SAPPHIRE_VILLAGE_STATE, 1
# 346 "data/maps/SapphireVillage/scripts.pory"
	clearflag FLAG_HIDE_PROF_ASPEN
# 347 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_HIDE_SAPPHIRE_VILLAGE_PEOPLE
# 348 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_NO_ENCOUNTER
# 349 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 350 "data/maps/SapphireVillage/scripts.pory"
	warp MAP_SAPPHIRE_VILLAGE_LAB, 6, 12
# 351 "data/maps/SapphireVillage/scripts.pory"
	release
	return


EgyptEventB::
# 355 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 356 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, FALSE
# 357 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_0
# 358 "data/maps/SapphireVillage/scripts.pory"
	waitmessage
# 359 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 360 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 361 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov1
# 362 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 363 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 364 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov2
# 365 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 366 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 367 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_EGYPT
# 368 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_EGYPT, 13, 18
# 369 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_EGYPT, mov3x
# 370 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 371 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4x
# 372 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 373 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 374 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_1
# 375 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 376 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 377 "data/maps/SapphireVillage/scripts.pory"
	delay 50
# 378 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_2
# 379 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 380 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 381 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 382 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_EGYPT, mov5
# 383 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 384 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 385 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 386 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ASPEN
# 387 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ASPEN, 14, 18
# 388 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov6
# 389 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 390 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 391 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 392 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_3
# 393 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 394 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 395 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 396 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 397 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_4
# 398 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 399 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 400 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 401 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 402 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_5
# 403 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 404 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 405 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 406 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 407 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_6
# 408 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 409 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 410 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 411 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov7x
# 412 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov8x
# 413 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 414 "data/maps/SapphireVillage/scripts.pory"
	opendoor 7, 11
# 415 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 416 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov9
# 417 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov10
# 418 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 419 "data/maps/SapphireVillage/scripts.pory"
	closedoor 7, 11
# 420 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 421 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 1
# 422 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_SAPPHIRE_VILLAGE_STATE, 1
# 423 "data/maps/SapphireVillage/scripts.pory"
	clearflag FLAG_HIDE_PROF_ASPEN
# 424 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_HIDE_SAPPHIRE_VILLAGE_PEOPLE
# 425 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_NO_ENCOUNTER
# 426 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 427 "data/maps/SapphireVillage/scripts.pory"
	warp MAP_SAPPHIRE_VILLAGE_LAB, 6, 12
# 428 "data/maps/SapphireVillage/scripts.pory"
	release
	return


AnthonyEventB::
# 432 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 433 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, FALSE
# 434 "data/maps/SapphireVillage/scripts.pory"
	message AnthonyEventA_Text_0
# 435 "data/maps/SapphireVillage/scripts.pory"
	waitmessage
# 436 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 437 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 438 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov1
# 439 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 440 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 441 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov2
# 442 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 443 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 444 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ANTHONY
# 445 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ANTHONY, 13, 18
# 446 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ANTHONY, mov3x
# 447 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 448 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov4x
# 449 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 450 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 451 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_1
# 452 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 453 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 454 "data/maps/SapphireVillage/scripts.pory"
	delay 50
# 455 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_2
# 456 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 457 "data/maps/SapphireVillage/scripts.pory"
	playse 21
# 458 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov5
# 459 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ANTHONY, mov5
# 460 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 461 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 462 "data/maps/SapphireVillage/scripts.pory"
	playbgm MUS_RG_OAK, FALSE
# 463 "data/maps/SapphireVillage/scripts.pory"
	addobject LOCALID_ASPEN
# 464 "data/maps/SapphireVillage/scripts.pory"
	setobjectxy LOCALID_ASPEN, 14, 18
# 465 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov6
# 466 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 467 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 468 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 469 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_3
# 470 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 471 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 472 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 473 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_EGYPT, 0
# 474 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_2
# 475 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 476 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 477 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 478 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_ANTHONY, 0
# 479 "data/maps/SapphireVillage/scripts.pory"
	msgbox AnthonyEventA_Text_3
# 480 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 481 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 482 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 483 "data/maps/SapphireVillage/scripts.pory"
	createfieldmugshot MUGSHOT_PROF_ASPEN, 0
# 484 "data/maps/SapphireVillage/scripts.pory"
	msgbox EgyptEventA_Text_6
# 485 "data/maps/SapphireVillage/scripts.pory"
	closemessage
# 486 "data/maps/SapphireVillage/scripts.pory"
	removefieldmugshot
# 487 "data/maps/SapphireVillage/scripts.pory"
	delay 30
# 488 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov7x
# 489 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov8x
# 490 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 491 "data/maps/SapphireVillage/scripts.pory"
	opendoor 7, 11
# 492 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 493 "data/maps/SapphireVillage/scripts.pory"
	applymovement LOCALID_ASPEN, mov9
# 494 "data/maps/SapphireVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mov10
# 495 "data/maps/SapphireVillage/scripts.pory"
	waitmovement 0
# 496 "data/maps/SapphireVillage/scripts.pory"
	closedoor 7, 11
# 497 "data/maps/SapphireVillage/scripts.pory"
	waitdooranim
# 498 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_ASPEN_EVENTS, 1
# 499 "data/maps/SapphireVillage/scripts.pory"
	setvar VAR_SAPPHIRE_VILLAGE_STATE, 1
# 500 "data/maps/SapphireVillage/scripts.pory"
	clearflag FLAG_HIDE_PROF_ASPEN
# 501 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_HIDE_SAPPHIRE_VILLAGE_PEOPLE
# 502 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_NO_ENCOUNTER
# 503 "data/maps/SapphireVillage/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 504 "data/maps/SapphireVillage/scripts.pory"
	warp MAP_SAPPHIRE_VILLAGE_LAB, 6, 12
# 505 "data/maps/SapphireVillage/scripts.pory"
	release
	return


# 508 "data/maps/SapphireVillage/scripts.pory"
mov1:
# 509 "data/maps/SapphireVillage/scripts.pory"
	face_up
	step_end

# 512 "data/maps/SapphireVillage/scripts.pory"
mov2:
# 513 "data/maps/SapphireVillage/scripts.pory"
	emote_exclamation_mark
	step_end

# 516 "data/maps/SapphireVillage/scripts.pory"
mov3:
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 517 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 518 "data/maps/SapphireVillage/scripts.pory"
	face_left
	step_end

# 521 "data/maps/SapphireVillage/scripts.pory"
mov3x:
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 522 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 523 "data/maps/SapphireVillage/scripts.pory"
	face_right
	step_end

# 526 "data/maps/SapphireVillage/scripts.pory"
mov4:
# 527 "data/maps/SapphireVillage/scripts.pory"
	face_right
	step_end

# 530 "data/maps/SapphireVillage/scripts.pory"
mov4x:
# 531 "data/maps/SapphireVillage/scripts.pory"
	face_left
	step_end

# 534 "data/maps/SapphireVillage/scripts.pory"
mov5:
# 535 "data/maps/SapphireVillage/scripts.pory"
	emote_exclamation_mark
# 536 "data/maps/SapphireVillage/scripts.pory"
	face_up
	step_end

# 539 "data/maps/SapphireVillage/scripts.pory"
mov6:
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
# 540 "data/maps/SapphireVillage/scripts.pory"
	walk_down
	step_end

# 543 "data/maps/SapphireVillage/scripts.pory"
mov7:
# 544 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 545 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 546 "data/maps/SapphireVillage/scripts.pory"
	face_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 547 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 548 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 549 "data/maps/SapphireVillage/scripts.pory"
	walk_up
	step_end

# 552 "data/maps/SapphireVillage/scripts.pory"
mov7x:
# 553 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 554 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 555 "data/maps/SapphireVillage/scripts.pory"
	face_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 556 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 557 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 558 "data/maps/SapphireVillage/scripts.pory"
	walk_up
	step_end

# 561 "data/maps/SapphireVillage/scripts.pory"
mov8:
# 562 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 563 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 564 "data/maps/SapphireVillage/scripts.pory"
	face_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 565 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 566 "data/maps/SapphireVillage/scripts.pory"
	face_up
	step_end

# 569 "data/maps/SapphireVillage/scripts.pory"
mov8x:
# 570 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 571 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 572 "data/maps/SapphireVillage/scripts.pory"
	face_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 573 "data/maps/SapphireVillage/scripts.pory"
	walk_left
# 574 "data/maps/SapphireVillage/scripts.pory"
	face_up
	step_end

# 577 "data/maps/SapphireVillage/scripts.pory"
mov9:
# 578 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 579 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 580 "data/maps/SapphireVillage/scripts.pory"
	set_invisible
	step_end

# 583 "data/maps/SapphireVillage/scripts.pory"
mov10:
# 584 "data/maps/SapphireVillage/scripts.pory"
	face_up
# 585 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 585 "data/maps/SapphireVillage/scripts.pory"
	walk_up
# 586 "data/maps/SapphireVillage/scripts.pory"
	set_invisible
	step_end

SapphireVillage_EventScript_OldMan_Text_0:
# 35 "data/maps/SapphireVillage/scripts.pory"
	.string "Hello, {COLOR GREEN}{PLAYER}{COLOR BLUE}. Did you enjoy the\nrecent River Festival?\pIt's still my favorite tradition, even\nback when I was your age.$"

SapphireVillage_EventScript_Girl_Text_0:
# 42 "data/maps/SapphireVillage/scripts.pory"
	.string "Check it out!\nThe Professor gave me a Pokémon!$"

SapphireVillage_EventScript_FatMan_Text_0:
# 49 "data/maps/SapphireVillage/scripts.pory"
	.string "Oh hi, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\nNice weather, isn't it?$"

SapphireVillage_EventScript_Woman_Text_0:
# 56 "data/maps/SapphireVillage/scripts.pory"
	.string "I came all the way from Nexar City to\nsee the River Festival. It's so much fun!$"

SapphireVillage_EventScript_LabSign_Text_0:
# 61 "data/maps/SapphireVillage/scripts.pory"
	.string "Aspen Pokémon Research Lab$"

SapphireVillage_EventScript_TownSign_Text_0:
# 66 "data/maps/SapphireVillage/scripts.pory"
	.string "Sapphire Village\nGuided by the Sapphire River$"

SapphireVillage_EventScript_Mailbox1_Text_0:
# 71 "data/maps/SapphireVillage/scripts.pory"
	.string "Myers's Household$"

SapphireVillage_EventScript_Mailbox2_Text_0:
# 76 "data/maps/SapphireVillage/scripts.pory"
	.string "{PLAYER}'s Household$"

SapphireVillage_EventScript_Mailbox3_Text_0:
# 81 "data/maps/SapphireVillage/scripts.pory"
	.string "Prof. Aspen's Household$"

SapphireVillage_EventScript_HoneyTree_Text_0:
# 99 "data/maps/SapphireVillage/scripts.pory"
	.string "There is a sweet scent in the air...$"

SapphireVillage_EventScript_HoneyTree_Text_1:
# 103 "data/maps/SapphireVillage/scripts.pory"
	.string "Slather the bark with Honey?$"

SapphireVillage_EventScript_HoneyTree_Text_2:
# 107 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} slathered the bark with Honey.$"

SapphireVillage_EventScript_HoneyTree_Text_3:
# 115 "data/maps/SapphireVillage/scripts.pory"
	.string "A wild Pokémon attacked!$"

EgyptEventA_Text_0:
# 203 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR RED}Hey!$"

EgyptEventA_Text_1:
# 220 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR RED}Egypt: Bro! Where are you going?\nThe Professor's looking for you!$"

EgyptEventA_Text_2:
# 224 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}???: There you are!$"

EgyptEventA_Text_3:
# 238 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}Aspen: I was looking all over for ya!\pWhat the heck were you doing just\nstanding here when I've been waiting\lfor ya all this time?$"

EgyptEventA_Text_4:
# 243 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR BLUE}: …$"

EgyptEventA_Text_5:
# 248 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR RED}Egypt: Um, well he can't actually-$"

EgyptEventA_Text_6:
# 253 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}Aspen: Right.\nI forgot you were mute.\pWell whatever, follow me.\nLet's get this over with, yeah?$"

AnthonyEventA_Text_0:
# 280 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}Hey!$"

AnthonyEventA_Text_1:
# 297 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}Anthony: Yo sis! Where are you going?\nThe Professor was looking for you!$"

AnthonyEventA_Text_2:
# 320 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR RED}: …$"

AnthonyEventA_Text_3:
# 325 "data/maps/SapphireVillage/scripts.pory"
	.string "{COLOR BLUE}Anthony: Um, Professor?\nYou know she can't actually-$"
