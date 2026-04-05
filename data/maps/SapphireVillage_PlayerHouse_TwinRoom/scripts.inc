SapphireVillage_PlayerHouse_TwinRoom_MapScripts::
	.byte 0


SapphireVillage_PlayerHouse_TwinRoom_Game::
# 4 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	checkplayergender
# 5 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, SVGame1
# 6 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, SVGame2
	return


SVGame1::
# 10 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	msgbox SVGame1_Text_0
# 11 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	release
	return


SVGame2::
# 15 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	msgbox SVGame2_Text_0
# 16 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	release
	return


SapphireVillage_PlayerHouse_TwinRoom_PC::
# 20 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	msgbox SapphireVillage_PlayerHouse_TwinRoom_PC_Text_0
# 21 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	release
	return


SVGame1_Text_0:
# 10 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	.string "You know Egypt hates it if you touch\nher save files.$"

SVGame2_Text_0:
# 15 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	.string "You know Anthony hates it if you touch\nhis save files.$"

SapphireVillage_PlayerHouse_TwinRoom_PC_Text_0:
# 20 "data/maps/SapphireVillage_PlayerHouse_TwinRoom/scripts.pory"
	.string "Yu-Gi-Oh Master Duel is currently open.\nThey should ban Maxx 'C'!$"
