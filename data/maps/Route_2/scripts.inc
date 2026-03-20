Route_2_MapScripts::
	.byte 0


Route2_EventScript_Sign::
# 4 "data/maps/Route_2/scripts.pory"
	msgbox Route2_EventScript_Sign_Text_0
# 5 "data/maps/Route_2/scripts.pory"
	release
	return


Route2_EventScript_BugCatcher::
# 10 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_13, BugCatcherIntro, BugCatcherDefeated
# 11 "data/maps/Route_2/scripts.pory"
	msgbox BugCatcherPostBattle, MSGBOX_AUTOCLOSE
	return


Route2_EventScript_Lass::
# 15 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_10, Rt2LassIntro, Rt2LassDefeated
# 16 "data/maps/Route_2/scripts.pory"
	msgbox Rt2LassPostBattle, MSGBOX_AUTOCLOSE
	return


Route2_EventScript_Camper::
# 20 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_11, Rt2CamperIntro, Rt2CamperDefeated
# 21 "data/maps/Route_2/scripts.pory"
	msgbox Rt2CamperPostBattle, MSGBOX_AUTOCLOSE
	return


Route2_EventScript_Picnicker::
# 25 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_12, Rt2PicnickerIntro, Rt2PicnickerDefeated
# 26 "data/maps/Route_2/scripts.pory"
	msgbox Rt2PicnickerPostBattle, MSGBOX_AUTOCLOSE
	return


Route2_EventScript_Youngster::
# 30 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_14, Rt2YoungsterIntro, Rt2YoungsterDefeated
# 31 "data/maps/Route_2/scripts.pory"
	msgbox Rt2YoungsterPostBattle, MSGBOX_AUTOCLOSE
	return


Route2_EventScript_Sign_Text_0:
# 4 "data/maps/Route_2/scripts.pory"
	.string "Route 2- Jasper Pond\pIonia City to the west.\nJasper Town to the east.$"

Rt2YoungsterIntro::
# 34 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}I love shorts!\nThey're comfy and easy to wear!$"

Rt2YoungsterDefeated::
# 38 "data/maps/Route_2/scripts.pory"
	.string "Aw rats!$"

Rt2YoungsterPostBattle::
# 42 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}Sometimes I feel cold in these shorts…$"

Rt2PicnickerIntro::
# 46 "data/maps/Route_2/scripts.pory"
	.string "{COLOR RED}I'm looking for some treasure!$"

Rt2PicnickerDefeated::
# 50 "data/maps/Route_2/scripts.pory"
	.string "They're all mine!$"

Rt2PicnickerPostBattle::
# 54 "data/maps/Route_2/scripts.pory"
	.string "{COLOR RED}My Dowsing Machine helps me find all\nsorts of hidden items!$"

BugCatcherIntro::
# 58 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}I love bugs! They are so cool!$"

BugCatcherDefeated::
# 62 "data/maps/Route_2/scripts.pory"
	.string "Squished…$"

BugCatcherPostBattle::
# 66 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}Do you like bugs too?$"

Rt2LassIntro::
# 70 "data/maps/Route_2/scripts.pory"
	.string "{COLOR RED}And just who are you exactly?$"

Rt2LassDefeated::
# 74 "data/maps/Route_2/scripts.pory"
	.string "Someone that's tough…$"

Rt2LassPostBattle::
# 78 "data/maps/Route_2/scripts.pory"
	.string "{COLOR RED}I guess you are a nice person…$"

Rt2CamperIntro::
# 82 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}Do you want to go camping with me?$"

Rt2CamperDefeated::
# 86 "data/maps/Route_2/scripts.pory"
	.string "Aw, you're no fun!$"

Rt2CamperPostBattle::
# 90 "data/maps/Route_2/scripts.pory"
	.string "{COLOR BLUE}Do you hear that sound? That's the\ngreat outdoors calling out to us!$"
