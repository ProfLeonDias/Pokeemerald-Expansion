SapphireVillage_AspenHouse_MapScripts::
# 2 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SapphireVillageAspenHouseMapScript
	.byte 0


SapphireVillageAspenHouseMapScript::
# 6 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillageAspenHouseMapScript_1
	return

SapphireVillageAspenHouseMapScript_1:
# 7 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	removeobject AspenHouseBall
# 8 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	removeobject AspenHouseGirl
# 9 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	setflag FLAG_HIDE_ASPEN_HOUSE
	return


SapphireVillage_AspenHouse_EventScript_PC::
# 15 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_AspenHouse_EventScript_PC_1
# 20 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_PC_Text_1
# 21 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return

SapphireVillage_AspenHouse_EventScript_PC_1:
# 16 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_PC_Text_0
# 17 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return


SapphireVillage_AspenHouse_EventScript_Shelves::
# 26 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_AspenHouse_EventScript_Shelves_1
# 31 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Shelves_Text_1
# 32 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return

SapphireVillage_AspenHouse_EventScript_Shelves_1:
# 27 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Shelves_Text_0
# 28 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return


SapphireVillage_AspenHouse_EventScript_Fridge::
# 37 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	goto_if_set FLAG_PROF_ASPEN_IMPROVEMENT, SapphireVillage_AspenHouse_EventScript_Fridge_1
# 42 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Fridge_Text_1
	return

SapphireVillage_AspenHouse_EventScript_Fridge_1:
# 38 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Fridge_Text_0
# 39 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return


SapphireVillage_AspenHouse_EventScript_Woman::
# 47 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	lock
# 48 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	faceplayer
# 49 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Woman_Text_0
# 50 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return


SapphireVillage_AspenHouse_EventScript_Ball::
# 54 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	lock
# 55 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	msgbox SapphireVillage_AspenHouse_EventScript_Ball_Text_0
# 56 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	release
	return


SapphireVillage_AspenHouse_EventScript_PC_Text_0:
# 16 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "There's an open e-mail here…\pI'm impressed with your latest research\non Pokémon evolution!\pWe are looking forward to having you at\nour next conference.\pRegards, Professor Rowan$"

SapphireVillage_AspenHouse_EventScript_PC_Text_1:
# 20 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "Yuck!\nShouldn't have looked!$"

SapphireVillage_AspenHouse_EventScript_Shelves_Text_0:
# 27 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "There is an assortment of books on\nPokémon evolution.$"

SapphireVillage_AspenHouse_EventScript_Shelves_Text_1:
# 31 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "There is an assortment of lewd magazines\nthat have been… Used…$"

SapphireVillage_AspenHouse_EventScript_Fridge_Text_0:
# 38 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "Bottles of booze line the fridge.$"

SapphireVillage_AspenHouse_EventScript_Fridge_Text_1:
# 42 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "Fresh produce and healthy snacks line\nthe fridge.$"

SapphireVillage_AspenHouse_EventScript_Woman_Text_0:
# 49 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "{COLOR RED}I'll spit on you for ¥10.$"

SapphireVillage_AspenHouse_EventScript_Ball_Text_0:
# 55 "data/maps/SapphireVillage_AspenHouse/scripts.pory"
	.string "This food seems to have grown a culture\nof small Foongus…$"
