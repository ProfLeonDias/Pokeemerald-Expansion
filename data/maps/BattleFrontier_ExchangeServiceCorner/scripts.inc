# 1 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 2 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_MapScripts::
# 3 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.byte 0
# 4 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

.macro setitemandprice item:req, price:req
	setvar VAR_0x8009, \item
	setvar VAR_0x8008, \price
.endm

BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome::
# 6 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize, MSGBOX_DEFAULT
# 7 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowBattlePointsWindow
# 8 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	return
# 9 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 10 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye::
# 11 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints, MSGBOX_DEFAULT
# 12 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 13 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 14 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 15 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 16 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize::
# 17 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	specialvar VAR_TEMP_1, GetFrontierBattlePoints
# 18 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_ge VAR_TEMP_1, VAR_0x8008, BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize
# 19 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints, MSGBOX_DEFAULT
# 20 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 21 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 22 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 23 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 24 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 25 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 26 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGivePrize::
# 27 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 28 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor
# 29 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem
# 30 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 31 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 32 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveDecor::
# 33 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkdecorspace VAR_0x8009
# 34 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor
# 35 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 36 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 37 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	adddecoration VAR_0x8009
# 38 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 39 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 40 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC, MSGBOX_DEFAULT
# 41 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 42 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 43 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 44 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 45 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_NoRoomForDecor::
# 46 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_PCIsFull, MSGBOX_DEFAULT
# 47 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 48 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 49 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 50 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 51 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TryGiveItem::
# 52 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	checkitemspace VAR_0x8009
# 53 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, BattleFrontier_ExchangeServiceCorner_EventScript_BagFull
# 54 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 55 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special TakeFrontierBattlePoints
# 56 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	additem VAR_0x8009
# 57 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special UpdateBattlePointsWindow
# 58 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	playse SE_SHOP
# 59 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize, MSGBOX_DEFAULT
# 60 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto_if_eq VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 61 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 62 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 63 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 64 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BagFull::
# 65 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt, MSGBOX_DEFAULT
# 66 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseBattlePointsWindow
# 67 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 68 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 69 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 70 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk1::
# 71 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 72 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 73 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR1_CLERK
# 74 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 75 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
# 76 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 77 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 78 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1::
# 79 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_1
# 80 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 81 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 82 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 83 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 84 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 85 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster
# 86 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion
# 87 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll
# 88 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll
# 89 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll
# 90 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll
# 91 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll
# 92 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll
# 93 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll
# 94 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll
# 95 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 10, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 96 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 97 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 98 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1::
	bufferdecorationname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 105 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 106 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_KissPoster::
	setitemandprice DECOR_KISS_POSTER, 16
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

BattleFrontier_ExchangeServiceCorner_EventScript_KissCushion::
	setitemandprice DECOR_KISS_CUSHION, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 115 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_SmoochumDoll::
	setitemandprice DECOR_SMOOCHUM_DOLL, 32
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 123 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TogepiDoll::
	setitemandprice DECOR_TOGEPI_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 131 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MeowthDoll::
	setitemandprice DECOR_MEOWTH_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 139 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ClefairyDoll::
	setitemandprice DECOR_CLEFAIRY_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 147 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DittoDoll::
	setitemandprice DECOR_DITTO_DOLL, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 155 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CyndaquilDoll::
	setitemandprice DECOR_CYNDAQUIL_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 163 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChikoritaDoll::
	setitemandprice DECOR_CHIKORITA_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 171 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_TotodileDoll::
	setitemandprice DECOR_TOTODILE_DOLL, 80
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor1

# 179 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_DecorClerk2::
# 180 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 181 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 182 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_DECOR2_CLERK
# 183 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 184 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
# 185 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 186 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 187 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2::
# 188 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_DECOR_VENDOR_2
# 189 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 190 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 191 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 192 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 193 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 194 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll
# 195 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll
# 196 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll
# 197 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll
# 198 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll
# 199 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 200 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 201 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 202 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2::
	bufferdecorationname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseDecor2
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 209 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 210 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_LaprasDoll::
	setitemandprice DECOR_LAPRAS_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

BattleFrontier_ExchangeServiceCorner_EventScript_SnorlaxDoll::
	setitemandprice DECOR_SNORLAX_DOLL, 128
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

# 219 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VenusaurDoll::
	setitemandprice DECOR_VENUSAUR_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

# 227 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_CharizardDoll::
	setitemandprice DECOR_CHARIZARD_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

# 235 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_BlastoiseDoll::
	setitemandprice DECOR_BLASTOISE_DOLL, 256
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseDecor2

# 243 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_VitaminClerk::
# 244 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 245 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 246 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_VITAMIN_CLERK
# 247 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 248 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
# 249 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 250 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 251 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin::
# 252 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_VITAMIN_VENDOR
# 253 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 254 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 255 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 256 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 257 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 258 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Protein
# 259 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_Calcium
# 260 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_Iron
# 261 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_Zinc
# 262 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Carbos
# 263 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_HPUp
# 264 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 265 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 266 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 267 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin::
	bufferitemname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseVitamin
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 274 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 275 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_Protein::
	setitemandprice ITEM_PROTEIN, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

BattleFrontier_ExchangeServiceCorner_EventScript_Calcium::
	setitemandprice ITEM_CALCIUM, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

# 284 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Iron::
	setitemandprice ITEM_IRON, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

# 292 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Zinc::
	setitemandprice ITEM_ZINC, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

# 300 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Carbos::
	setitemandprice ITEM_CARBOS, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin

# 308 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HPUp::
	setitemandprice ITEM_HP_UP, 1
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseVitamin


# 316 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_HoldItemClerk::
# 317 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 318 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	faceplayer
# 319 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_TEMP_2, EXCHANGE_CORNER_HOLD_ITEM_CLERK
# 320 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	call BattleFrontier_ExchangeServiceCorner_EventScript_ClerkWelcome
# 321 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	goto BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
# 322 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 323 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 324 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem::
# 325 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BF_EXCHANGE_CORNER_HOLD_ITEM_VENDOR
# 326 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowFrontierExchangeCornerItemIconWindow
# 327 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special ShowScrollableMultichoice
# 328 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	waitstate
# 329 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	special CloseFrontierExchangeCornerItemIconWindow
# 330 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	switch VAR_RESULT
# 331 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 0, BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers
# 332 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 1, BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb
# 333 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 2, BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw
# 334 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 3, BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb
# 335 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 4, BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder
# 336 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 5, BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand
# 337 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 6, BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock
# 338 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 7, BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand
# 339 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 8, BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens
# 340 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case 9, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 341 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	case MULTI_B_PRESSED, BattleFrontier_ExchangeServiceCorner_EventScript_ClerkGoodbye
# 342 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 343 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem::
	bufferitemname STR_VAR_1, VAR_0x8009
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BattleFrontier_ExchangeServiceCorner_EventScript_ChooseHoldItem
	goto BattleFrontier_ExchangeServiceCorner_EventScript_TryPurchasePrize
# 350 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 351 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_EventScript_Leftovers::
	setitemandprice ITEM_LEFTOVERS, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

BattleFrontier_ExchangeServiceCorner_EventScript_WhiteHerb::
	setitemandprice ITEM_WHITE_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 360 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_QuickClaw::
	setitemandprice ITEM_QUICK_CLAW, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 368 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_MentalHerb::
	setitemandprice ITEM_MENTAL_HERB, 48
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 376 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Brightpowder::
	setitemandprice ITEM_BRIGHT_POWDER, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 384 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ChoiceBand::
	setitemandprice ITEM_CHOICE_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 392 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_KingsRock::
	setitemandprice ITEM_KINGS_ROCK, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 400 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_FocusBand::
	setitemandprice ITEM_FOCUS_BAND, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 408 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_ScopeLens::
	setitemandprice ITEM_SCOPE_LENS, 64
	goto BattleFrontier_ExchangeServiceCorner_EventScript_PurchaseHoldItem

# 416 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Man::
# 417 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll, MSGBOX_NPC
# 418 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 419 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 420 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Sailor::
# 421 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher, MSGBOX_NPC
# 422 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 423 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 424 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_PokefanF::
# 425 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	lock
# 426 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant, MSGBOX_DEFAULT
# 427 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	release
# 428 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 429 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 430 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_RichBoy::
# 431 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls, MSGBOX_NPC
# 432 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 433 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 434 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_EventScript_Girl::
# 435 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	msgbox BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord, MSGBOX_NPC
# 436 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	end
# 437 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 438 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WelcomePleaseChoosePrize:
# 439 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hello, this is the Exchange Service\n"
# 440 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Corner.\p"
# 441 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We exchange the Battle Points you\n"
# 442 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "have collected for lovely prizes.\p"
# 443 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 444 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 445 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
@ Unused
# 446 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PleaseChoosePrize:
# 447 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please choose a prize from this list.$"
# 448 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

BattleFrontier_ExchangeServiceCorner_Text_ConfirmPurchase:
	.string "You've chosen the {STR_VAR_1}.\n"
	.string "Is that correct?$"
# 568 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 569 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WellSendItToPC:
# 570 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you!\n"
# 571 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "We'll send it to your PC at home.$"
# 572 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 573 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HereIsYourPrize:
# 574 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Here is your prize!$"
# 575 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 576 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveEnoughPoints:
# 577 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 578 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have enough Battle Points…$"
# 579 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 580 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_PCIsFull:
# 581 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 582 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Your PC appears to be full…$"
# 583 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 584 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DontHaveSpaceToHoldIt:
# 585 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I'm so sorry…\n"
# 586 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You don't have space to hold it…$"
# 587 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 588 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ThankYouVisitWithPoints:
# 589 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Thank you very much.\p"
# 590 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Please visit us when you have\n"
# 591 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "saved up Battle Points.$"
# 592 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 593 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WishIHadAllDolls:
# 594 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Oh, they're so nice!\n"
# 595 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them!\l"
# 596 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Cute cushions!\l"
# 597 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Big plush Dolls!\l"
# 598 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Little plush Dolls!\l"
# 599 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I wish I had them all!$"
# 600 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 601 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GetYouAnythingYouWant:
# 602 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Leave it to your mommy!\p"
# 603 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If it's anything you want, I'll go\n"
# 604 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "through anything to get it, honey!$"
# 605 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 606 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ItemsWillGetMonTougher:
# 607 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If I can get hold of the items here,\n"
# 608 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "my Pokémon will get tougher.\p"
# 609 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "You bet they will!\n"
# 610 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "No question about it!$"
# 611 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 612 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_GoGetYourOwnDoll:
# 613 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Hah?\n"
# 614 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "What are you gawking at?\p"
# 615 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "I don't like you staring at my plush\n"
# 616 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "doll like that.\p"
# 617 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you want it, go get one yourself!\n"
# 618 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Isn't that right, Smoochum?$"
# 619 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 620 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MoreBattlePointsForRecord:
# 621 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Did you know?\p"
# 622 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "If you stretch your record at any of\n"
# 623 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the Battle facilities, they start\l"
# 624 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "giving you more and more Battle Points.$"
# 625 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 626 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissPosterDesc::
# 627 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large poster with a Smoochum print.$"
# 628 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 629 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KissCushionDesc::
# 630 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Smoochum cushion.\n"
# 631 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 632 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 633 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_SmoochumDollDesc::
# 634 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Smoochum Doll.\n"
# 635 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 636 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 637 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TogepiDollDesc::
# 638 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Togepi Doll.\n"
# 639 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 640 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 641 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MeowthDollDesc::
# 642 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Meowth Doll.\n"
# 643 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 644 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 645 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ClefairyDollDesc::
# 646 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Clefairy Doll.\n"
# 647 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 648 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 649 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_DittoDollDesc::
# 650 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Ditto Doll.\n"
# 651 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 652 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 653 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CyndaquilDollDesc::
# 654 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Cyndaquil Doll.\n"
# 655 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 656 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 657 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChikoritaDollDesc::
# 658 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Chikorita Doll.\n"
# 659 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 660 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 661 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_TotodileDollDesc::
# 662 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A Totodile Doll.\n"
# 663 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 664 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 665 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LargeDollDesc::
# 666 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A large Doll.\n"
# 667 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Place it on a mat or a desk.$"
# 668 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 669 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ProteinDesc::
# 670 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat Attack of one\n"
# 671 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 672 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 673 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CalciumDesc::
# 674 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat Sp. Atk of one\n"
# 675 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 676 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 677 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_IronDesc::
# 678 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat Defense of one\n"
# 679 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 680 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 681 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ZincDesc::
# 682 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat Sp. Def of one\n"
# 683 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 684 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 685 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_CarbosDesc::
# 686 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the stat Speed of one\n"
# 687 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Pokémon.$"
# 688 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 689 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_HPUpDesc::
# 690 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises the HP of one Pokémon.$"
# 691 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 692 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_LeftoversDesc::
# 693 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that gradually restores\n"
# 694 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "HP in battle.$"
# 695 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 696 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_WhiteHerbDesc::
# 697 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that restores any\n"
# 698 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "lowered stat.$"
# 699 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 700 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_QuickClawDesc::
# 701 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally allows\n"
# 702 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "the first strike.$"
# 703 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 704 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_MentalHerbDesc::
# 705 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that snaps Pokémon out\n"
# 706 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "of infatuation.$"
# 707 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 708 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_BrightpowderDesc::
# 709 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that casts a glare to\n"
# 710 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "reduce accuracy.$"
# 711 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 712 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ChoiceBandDesc::
# 713 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "Raises a move's power, but permits\n"
# 714 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "only that move.$"
# 715 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 716 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_KingsRockDesc::
# 717 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that may cause flinching\n"
# 718 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "when the foe is hit.$"
# 719 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 720 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_FocusBandDesc::
# 721 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that occasionally\n"
# 722 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "prevents fainting.$"
# 723 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"

# 724 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
BattleFrontier_ExchangeServiceCorner_Text_ScopeLensDesc::
# 725 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "A hold item that raises the\n"
# 726 "data/maps/BattleFrontier_ExchangeServiceCorner/scripts.pory"
	.string "critical-hit rate.$"
