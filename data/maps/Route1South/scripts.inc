Route1South_MapScripts::
	.byte 0


Route1S_EventScript_Sign::
# 4 "data/maps/Route1South/scripts.pory"
	msgbox Route1S_EventScript_Sign_Text_0
# 5 "data/maps/Route1South/scripts.pory"
	release
	return


Route1S_EventScript_Fisherman::
# 9 "data/maps/Route1South/scripts.pory"
	lock
# 10 "data/maps/Route1South/scripts.pory"
	faceplayer
# 11 "data/maps/Route1South/scripts.pory"
	msgbox Route1S_EventScript_Fisherman_Text_0
# 12 "data/maps/Route1South/scripts.pory"
	release
	return


Route1S_EventScript_Lass::
# 18 "data/maps/Route1South/scripts.pory"
	trainerbattle_single TRAINER_01, Rt1LassIntro, Rt1LassDefeated
# 19 "data/maps/Route1South/scripts.pory"
	msgbox Rt1LassPostBattle, MSGBOX_AUTOCLOSE
# 20 "data/maps/Route1South/scripts.pory"
	waitmessage
	return


Route1S_EventScript_Sign_Text_0:
# 4 "data/maps/Route1South/scripts.pory"
	.string "Route 1 - Sapphire Path\pJames Woods to the north.\nJasper Town to the south.$"

Route1S_EventScript_Fisherman_Text_0:
# 11 "data/maps/Route1South/scripts.pory"
	.string "Going fishing is the world's best stress\nrelief, hands down. Don't you agree?$"

Rt1LassIntro::
# 23 "data/maps/Route1South/scripts.pory"
	.string "Look at my adorable Pokémon!$"

Rt1LassDefeated::
# 27 "data/maps/Route1South/scripts.pory"
	.string "Your Pokémon is adorable too!$"

Rt1LassPostBattle::
# 31 "data/maps/Route1South/scripts.pory"
	.string "One day, I'll catch the cutest little\nPokémon! Just you wait!$"
