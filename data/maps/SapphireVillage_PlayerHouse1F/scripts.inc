SapphireVillage_PlayerHouse1F_MapScripts::
	.byte 0


SapphireVillage_PlayerHouse1F_EventScript_Mom::
# 4 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	lock
# 5 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	faceplayer
# 6 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	goto_if_set FLAG_SYS_POKEMON_GET, SapphireVillage_PlayerHouse1F_EventScript_Mom_1
# 20 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	createfieldmugshot MUGSHOT_MOM, 0
# 21 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_2
# 22 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	closemessage
# 23 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	removefieldmugshot
# 24 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	applymovement SVMom, movSVmom1
# 25 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	waitmovement 0
# 26 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	release
	end

SapphireVillage_PlayerHouse1F_EventScript_Mom_1:
# 7 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	createfieldmugshot MUGSHOT_MOM, 0
# 8 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_0
# 9 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	closemessage
# 10 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	removefieldmugshot
# 11 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	call MomScriptP2
# 12 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	createfieldmugshot MUGSHOT_MOM, 0
# 13 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	msgbox SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_1
# 14 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	closemessage
# 15 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	removefieldmugshot
# 16 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	release
	end


MomScriptP2::
# 32 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 33 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	playfanfare MUS_RG_HEAL
# 34 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	waitfanfare
# 35 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	special HealPlayerParty
# 36 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
	return


# 40 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
movSVmom1:
# 41 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	face_original_direction
	step_end

SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_0:
# 8 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR GREEN}{PLAYER}{COLOR RED}!\nYou should eat and go to bed!$"

SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_1:
# 13 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	.string "{COLOR RED}Mom: Oh, good!\nYou and your Pokémon are looking good!\pDon't forget to come home more often!$"

SapphireVillage_PlayerHouse1F_EventScript_Mom_Text_2:
# 21 "data/maps/SapphireVillage_PlayerHouse1F/scripts.pory"
	.string "{COLOR RED}Mom: {COLOR GREEN}{PLAYER}{COLOR RED}!\pDid Alex talk to you already?\nHe's always getting into trouble…\pAnyway, I had to go through a lot for\nAllen to give you a Pokémon.\pYou're running late, so get going!\nDon't you want your gift?$"
