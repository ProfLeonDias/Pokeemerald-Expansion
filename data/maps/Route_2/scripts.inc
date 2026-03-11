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
# 12 "data/maps/Route_2/scripts.pory"
	waitmessage
	return


Route2_EventScript_Lass::
# 16 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_10, Rt2LassIntro, Rt2LassDefeated
# 17 "data/maps/Route_2/scripts.pory"
	msgbox Rt2LassPostBattle, MSGBOX_AUTOCLOSE
# 18 "data/maps/Route_2/scripts.pory"
	waitmessage
	return


Route2_EventScript_Camper::
# 22 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_11, Rt2CamperIntro, Rt2CamperDefeated
# 23 "data/maps/Route_2/scripts.pory"
	msgbox Rt2CamperPostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route_2/scripts.pory"
	waitmessage
	return


Route2_EventScript_Picnicker::
# 28 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_12, Rt2PicnickerIntro, Rt2PicnickerDefeated
# 29 "data/maps/Route_2/scripts.pory"
	msgbox Rt2PicnickerPostBattle, MSGBOX_AUTOCLOSE
# 30 "data/maps/Route_2/scripts.pory"
	waitmessage
	return


Route2_EventScript_Youngster::
# 34 "data/maps/Route_2/scripts.pory"
	trainerbattle_single TRAINER_14, Rt2YoungsterIntro, Rt2YoungsterDefeated
# 35 "data/maps/Route_2/scripts.pory"
	msgbox Rt2YoungsterPostBattle, MSGBOX_AUTOCLOSE
# 36 "data/maps/Route_2/scripts.pory"
	waitmessage
	return


Route2_EventScript_Sign_Text_0:
# 4 "data/maps/Route_2/scripts.pory"
	.string "Route 2- Jasper Pond\pIonia City to the west.\nJasper Town to the east.$"

Rt2YoungsterIntro::
# 39 "data/maps/Route_2/scripts.pory"
	.string "I love shorts!\nThey're comfy and easy to wear!$"

Rt2YoungsterDefeated::
# 43 "data/maps/Route_2/scripts.pory"
	.string "Aw rats!$"

Rt2YoungsterPostBattle::
# 47 "data/maps/Route_2/scripts.pory"
	.string "Sometimes I feel cold in these shorts…$"

Rt2PicnickerIntro::
# 51 "data/maps/Route_2/scripts.pory"
	.string "I'm looking for some treasure!$"

Rt2PicnickerDefeated::
# 55 "data/maps/Route_2/scripts.pory"
	.string "They're all mine!$"

Rt2PicnickerPostBattle::
# 59 "data/maps/Route_2/scripts.pory"
	.string "My Dowsing Machine helps me find all\nsorts of hidden items!$"

BugCatcherIntro::
# 63 "data/maps/Route_2/scripts.pory"
	.string "I love bugs! They are so cool!$"

BugCatcherDefeated::
# 67 "data/maps/Route_2/scripts.pory"
	.string "Squished…$"

BugCatcherPostBattle::
# 71 "data/maps/Route_2/scripts.pory"
	.string "Do you like bugs too?$"

Rt2LassIntro::
# 75 "data/maps/Route_2/scripts.pory"
	.string "And just who are you exactly?$"

Rt2LassDefeated::
# 79 "data/maps/Route_2/scripts.pory"
	.string "Someone that's tough…$"

Rt2LassPostBattle::
# 83 "data/maps/Route_2/scripts.pory"
	.string "I guess you are a nice person…$"

Rt2CamperIntro::
# 87 "data/maps/Route_2/scripts.pory"
	.string "Do you want to go camping with me?$"

Rt2CamperDefeated::
# 91 "data/maps/Route_2/scripts.pory"
	.string "Aw, you're no fun!$"

Rt2CamperPostBattle::
# 95 "data/maps/Route_2/scripts.pory"
	.string "Do you hear that sound? That's the great\noutdoors calling out to us!$"
