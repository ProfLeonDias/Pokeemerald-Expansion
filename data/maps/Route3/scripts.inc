Route3_MapScripts::
	.byte 0


Route3_EventScript_Sign1::
# 4 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_Sign1_Text_0
# 5 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_HoneyGuy::
# 9 "data/maps/Route3/scripts.pory"
	lock
# 10 "data/maps/Route3/scripts.pory"
	faceplayer
# 11 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_HoneyGuy_Text_0
# 12 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_Twins1::
# 16 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_20, Rt3TwinIntroA, Rt3TwinDefeated, Rt3TwinNoPokemon
# 17 "data/maps/Route3/scripts.pory"
	msgbox Rt3TwinPostBattleA, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Twins2::
# 22 "data/maps/Route3/scripts.pory"
	trainerbattle_double TRAINER_20, Rt3TwinIntroB, Rt3TwinDefeated, Rt3TwinNoPokemon
# 23 "data/maps/Route3/scripts.pory"
	msgbox Rt3TwinPostBattleB, MSGBOX_AUTOCLOSE
	end


Route3_EventScript_Youngster::
# 28 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_15, Rt3YoungsterIntro, Rt3YoungsterDefeated
# 29 "data/maps/Route3/scripts.pory"
	msgbox Rt3YoungsterPostBattle
	end


Route3_EventScript_Lass::
# 34 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_16, Rt3LassIntro, Rt3LassDefeated
# 35 "data/maps/Route3/scripts.pory"
	msgbox Rt3LassPostBattle
	end


Route3_EventScript_BugCatcher::
# 40 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_19, Rt3BugCatcherIntro, Rt3BugCatcherDefeated
# 41 "data/maps/Route3/scripts.pory"
	msgbox Rt3BugCatcherPostBattle
	end


Route3_EventScript_BreederM::
# 46 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_17, Rt3BreederMIntro, Rt3BreederMDefeated
# 47 "data/maps/Route3/scripts.pory"
	msgbox Rt3BreederMPostBattle
	end


Route3_EventScript_BreederF::
# 52 "data/maps/Route3/scripts.pory"
	trainerbattle_single TRAINER_18, Rt3BreederFIntro, Rt3BreederFDefeated
# 53 "data/maps/Route3/scripts.pory"
	msgbox Rt3BreederFPostBattle
	end


Route3_EventScript_Sign1_Text_0:
# 4 "data/maps/Route3/scripts.pory"
	.string "Route 3- Canyon Entrance\nIonia City to the east.\pMagmoor City to the west.\nIonia Canyon to the north.$"

Route3_EventScript_HoneyGuy_Text_0:
# 11 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}Have you ever noticed these sweet\nsmelling trees?\pI heard something might happen if you\nslather Honey on them.\pBut I don't want to cross the desert to\nget some more…$"

Rt3BreederFIntro::
# 57 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Check out my babies!$"

Rt3BreederFDefeated::
# 61 "data/maps/Route3/scripts.pory"
	.string "Oh no!$"

Rt3BreederFPostBattle::
# 65 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}I hatched them all myself!$"

Rt3BreederMIntro::
# 69 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}Huff…Huff…\nI'm trying to hatch some eggs!$"

Rt3BreederMDefeated::
# 73 "data/maps/Route3/scripts.pory"
	.string "Cracked!$"

Rt3BreederMPostBattle::
# 77 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}Being a breeder is hard work!$"

Rt3BugCatcherIntro::
# 81 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}There's not a lot of bugs here…$"

Rt3BugCatcherDefeated::
# 85 "data/maps/Route3/scripts.pory"
	.string "Squished!$"

Rt3BugCatcherPostBattle::
# 89 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}I should check the James Woods for\nmore bugs…$"

Rt3LassIntro::
# 93 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}It's time to take out the trash!$"

Rt3LassDefeated::
# 97 "data/maps/Route3/scripts.pory"
	.string "Hmph…$"

Rt3LassPostBattle::
# 101 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}I don't let just anyone pass.\nYou're good though!$"

Rt3YoungsterIntro::
# 105 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}I love jeans!\nThey're comfy and easy to wear!$"

Rt3YoungsterDefeated::
# 109 "data/maps/Route3/scripts.pory"
	.string "Oh!$"

Rt3YoungsterPostBattle::
# 113 "data/maps/Route3/scripts.pory"
	.string "{COLOR BLUE}What's the big deal is with shorts?\nJeans are way better!$"

Rt3TwinIntroA::
# 117 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Me and my sister can't be beat!$"

Rt3TwinIntroB::
# 121 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Sis and I are unstoppable!$"

Rt3TwinDefeated::
# 125 "data/maps/Route3/scripts.pory"
	.string "Mooom!$"

Rt3TwinNoPokemon::
# 129 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Come back when you have some more\nfriends like us!$"

Rt3TwinPostBattleA::
# 133 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Hmph…\nMeanie head!$"

Rt3TwinPostBattleB::
# 137 "data/maps/Route3/scripts.pory"
	.string "{COLOR RED}Leave us alone!$"
