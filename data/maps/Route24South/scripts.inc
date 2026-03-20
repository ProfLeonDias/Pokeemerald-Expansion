Route24South_MapScripts::
# 2 "data/maps/Route24South/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OnTransition
	.byte 0


OnTransition::
# 6 "data/maps/Route24South/scripts.pory"
	goto_if_set FLAG_HIDE_ROUTE_24_TRAINERS, OnTransition_2
OnTransition_1:
# 12 "data/maps/Route24South/scripts.pory"
	goto_if_set FLAG_SYS_B_DASH, OnTransition_4
	return

OnTransition_2:
# 7 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_1
# 8 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_2
# 9 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_3
# 10 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_4
	goto OnTransition_1

OnTransition_4:
# 13 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_1
# 14 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_2
# 15 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_3
# 16 "data/maps/Route24South/scripts.pory"
	removeobject LOCALID_HIDE_4
# 17 "data/maps/Route24South/scripts.pory"
	setflag FLAG_HIDE_ROUTE_24_TRAINERS
	return


Route24South_EventScript_Pichu::
# 23 "data/maps/Route24South/scripts.pory"
	lock
# 24 "data/maps/Route24South/scripts.pory"
	playmoncry SPECIES_PICHU, CRY_MODE_ENCOUNTER
# 25 "data/maps/Route24South/scripts.pory"
	waitmoncry
# 26 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Pichu_Text_0
# 27 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_Azurill::
# 31 "data/maps/Route24South/scripts.pory"
	lock
# 32 "data/maps/Route24South/scripts.pory"
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
# 33 "data/maps/Route24South/scripts.pory"
	waitmoncry
# 34 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Azurill_Text_0
# 35 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_TrainerA::
# 39 "data/maps/Route24South/scripts.pory"
	lock
# 40 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_TrainerA_Text_0
# 41 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_TrainerB::
# 45 "data/maps/Route24South/scripts.pory"
	lock
# 46 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_TrainerB_Text_0
# 47 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_OldMan::
# 51 "data/maps/Route24South/scripts.pory"
	lock
# 52 "data/maps/Route24South/scripts.pory"
	faceplayer
# 53 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_OldMan_Text_0
# 54 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_Sign::
# 58 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Sign_Text_0
# 59 "data/maps/Route24South/scripts.pory"
	release
	return


Route24South_EventScript_Fisherman::
# 63 "data/maps/Route24South/scripts.pory"
	lock
# 64 "data/maps/Route24South/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, Route24South_EventScript_Fisherman_2
# 67 "data/maps/Route24South/scripts.pory"
	goto_if_set FLAG_SYS_POKEDEX_GET, Route24South_EventScript_Fisherman_3
# 74 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Fisherman_Text_3
Route24South_EventScript_Fisherman_1:
# 76 "data/maps/Route24South/scripts.pory"
	release
	return

Route24South_EventScript_Fisherman_2:
# 65 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Fisherman_Text_0
	goto Route24South_EventScript_Fisherman_1

Route24South_EventScript_Fisherman_3:
# 68 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Fisherman_Text_1
# 69 "data/maps/Route24South/scripts.pory"
	giveitem ITEM_OLD_ROD
# 70 "data/maps/Route24South/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 71 "data/maps/Route24South/scripts.pory"
	msgbox Route24South_EventScript_Fisherman_Text_2
	goto Route24South_EventScript_Fisherman_1


Route24South_EventScript_TrainerSwimmer::
# 80 "data/maps/Route24South/scripts.pory"
	trainerbattle_single TRAINER_200, Swimmer1Intro, Swimmer1Defeated
# 81 "data/maps/Route24South/scripts.pory"
	msgbox Swimmer1PostBattle, MSGBOX_AUTOCLOSE
	end


Route24South_EventScript_Pichu_Text_0:
# 26 "data/maps/Route24South/scripts.pory"
	.string "{COLOR DARK_GRAY}Pichu: Pii!$"

Route24South_EventScript_Azurill_Text_0:
# 34 "data/maps/Route24South/scripts.pory"
	.string "{COLOR DARK_GRAY}Azurill: Azu! Zu!$"

Route24South_EventScript_TrainerA_Text_0:
# 40 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}C'mon, Pichu! Use Thunder Shock!$"

Route24South_EventScript_TrainerB_Text_0:
# 46 "data/maps/Route24South/scripts.pory"
	.string "{COLOR RED}You can do it Azurill! Use Bubble!$"

Route24South_EventScript_OldMan_Text_0:
# 53 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}Our village has always been guided\nby this river since its founding.\pIts water gives us life, so we must\nprotect it at all costs.$"

Route24South_EventScript_Sign_Text_0:
# 58 "data/maps/Route24South/scripts.pory"
	.string "Route 24 - Sapphire River Mouth\pMaiamai City to the north\nSapphire Village to the south$"

Route24South_EventScript_Fisherman_Text_0:
# 65 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}Hey, how are the fish biting for you?\nMy new Good Rod is pretty great!$"

Route24South_EventScript_Fisherman_Text_1:
# 68 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}Hey, {COLOR GREEN}{PLAYER}{COLOR BLUE}!\pHere's a question for you:\nDo you like fishing?\pI got myself a new Rod, so I figured\nit was time to part with my Old Rod.\pGo ahead, take it!\nI have no use for it anymore.$"

Route24South_EventScript_Fisherman_Text_2:
# 71 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}If you're lucky, you might find\nsomething other than a Magikarp!$"

Route24South_EventScript_Fisherman_Text_3:
# 74 "data/maps/Route24South/scripts.pory"
	.string "{COLOR BLUE}Tch… Another Magikarp.\nI need a better fishing Rod…$"

Swimmer1Intro::
# 85 "data/maps/Route24South/scripts.pory"
	.string "{COLOR RED}How about I take a break from swimming\nand battle you?$"

Swimmer1Defeated::
# 89 "data/maps/Route24South/scripts.pory"
	.string "Nice! You're pretty strong!$"

Swimmer1PostBattle::
# 93 "data/maps/Route24South/scripts.pory"
	.string "{COLOR RED}The water is shallow around here, which\nmakes it perfect for a swim!$"
