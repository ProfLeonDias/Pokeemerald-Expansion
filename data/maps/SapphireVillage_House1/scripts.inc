SapphireVillage_House1_MapScripts::
	.byte 0


SapphireVillage_House1_EventScript_Woman::
# 4 "data/maps/SapphireVillage_House1/scripts.pory"
	lock
# 5 "data/maps/SapphireVillage_House1/scripts.pory"
	msgbox SapphireVillage_House1_EventScript_Woman_Text_0
# 6 "data/maps/SapphireVillage_House1/scripts.pory"
	release
	return


SapphireVillage_House1_EventScript_Man::
# 10 "data/maps/SapphireVillage_House1/scripts.pory"
	lock
# 11 "data/maps/SapphireVillage_House1/scripts.pory"
	faceplayer
# 12 "data/maps/SapphireVillage_House1/scripts.pory"
	msgbox SapphireVillage_House1_EventScript_Man_Text_0
# 13 "data/maps/SapphireVillage_House1/scripts.pory"
	release
	return


SapphireVillage_House1_EventScript_Woman_Text_0:
# 5 "data/maps/SapphireVillage_House1/scripts.pory"
	.string "{COLOR RED}I wonder what I should cook today…$"

SapphireVillage_House1_EventScript_Man_Text_0:
# 12 "data/maps/SapphireVillage_House1/scripts.pory"
	.string "{COLOR BLUE}Hello {COLOR GREEN}{PLAYER}{COLOR BLUE}.\nHow are you doing today?$"
