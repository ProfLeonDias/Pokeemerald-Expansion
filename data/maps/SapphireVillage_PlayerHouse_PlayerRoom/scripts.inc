SapphireVillage_PlayerHouse_PlayerRoom_MapScripts::
	.byte 0


SapphireVillage_PlayerHouse_PlayerRoom_Game::
# 5 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	msgbox SapphireVillage_PlayerHouse_PlayerRoom_Game_Text_0
# 6 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	release
	return


SapphireVillage_PlaherHouse_PlayerRoom_PC::
# 10 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	special DoPCTurnOnEffect
# 11 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	playse SE_PC_ON
# 12 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	msgbox SapphireVillage_PlaherHouse_PlayerRoom_PC_Text_0
# 13 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	special BedroomPC
# 14 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	waitstate
# 15 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	releaseall
	return


SapphireVillage_PlayerHouse_PlayerRoom_Game_Text_0:
# 5 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} played Mega Man 4.\nWhoops, lost track of time!$"

SapphireVillage_PlaherHouse_PlayerRoom_PC_Text_0:
# 12 "data/maps/SapphireVillage_PlayerHouse_PlayerRoom/scripts.pory"
	.string "{COLOR GREEN}{PLAYER}{COLOR DARK_GRAY} booted up the PC.$"
