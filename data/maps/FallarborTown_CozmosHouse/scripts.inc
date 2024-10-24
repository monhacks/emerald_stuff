FallarborTown_CozmosHouse_MapScripts::
	.byte 0

FallarborTown_CozmosHouse_EventScript_ProfCozmo::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_GaveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	giveitem ITEM_TM23
	setflag FLAG_RECEIVED_TM27
	release
	end

FallarborTown_CozmosHouse_EventScript_PlayerHasMeteorite::
	call_if_unset FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_NoticeMeteorite
	call_if_set FLAG_TEMP_2, FallarborTown_CozmosHouse_EventScript_AskForMeteorite
	goto_if_eq VAR_RESULT, NO, FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	giveitem ITEM_TM27
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setvar VAR_0x8004, ITEM_METEORITE
	call Common_EventScript_PlayerHandedOverTheItem
	setflag FLAG_RECEIVED_TM27
	msgbox FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_NoticeMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow, MSGBOX_DEFAULT
	msgbox FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_AskForMeteorite::
	msgbox FallarborTown_CozmosHouse_Text_MayIHaveMeteorite, MSGBOX_YESNO
	return

FallarborTown_CozmosHouse_EventScript_DeclineGiveMeteorite::
	setflag FLAG_TEMP_2
	msgbox FallarborTown_CozmosHouse_Text_CrushedWithDisappointment, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveMeteorite::
	goto_if_eq FLAG_ITEM_GALLADITE, FallarborTown_CozmosHouse_EventScript_GaveGalladite
	goto_if_eq FLAG_IS_CHAMPION, FallarborTown_CozmosHouse_EventScript_GiveGalladite
	msgbox FallarborTown_CozmosHouse_Text_PleaseUseThisTM, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GaveGalladite::
	msgbox FallarborTown_CozmosHouse_Text_AMan, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_GiveGalladite::
	msgbox FallarborTown_CozmosHouse_Text_HelloAgain, MSGBOX_DEFAULT
	giveitem ITEM_GALLADITE
	setflag FLAG_ITEM_GALLADITE
	msgbox FallarborTown_CozmosHouse_Text_PickedUp, MSGBOX_DEFAULT
	goto FallarborTown_CozmosHouse_EventScript_GaveGalladite

FallarborTown_CozmosHouse_EventScript_CozmosWife::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM27, FallarborTown_CozmosHouse_EventScript_CozmoIsHappy
	goto_if_set FLAG_DEFEATED_EVIL_TEAM_MT_CHIMNEY, FallarborTown_CozmosHouse_EventScript_CozmoIsSad
	msgbox FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsSad::
	msgbox FallarborTown_CozmosHouse_Text_FeelSorryForCozmo, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_EventScript_CozmoIsHappy::
	msgbox FallarborTown_CozmosHouse_Text_CozmoIsSoHappy, MSGBOX_DEFAULT
	release
	end

FallarborTown_CozmosHouse_Text_MeteoriteWillNeverBeMineNow:
	.string "Prof. Cozmo: Oh…\n"
	.string "I never should have let myself be\l"
	.string "conned into telling Team Magma where\l"
	.string "you can find Meteorites…\p"
	.string "That Meteorite from Meteor Falls…\n"
	.string "It's never going to be mine now…\p"
	.string "But I need to thank you, as well.\n"
	.string "You truly saved me from disaster.\p"
	.string "I hope you'll take this TM as some\n"
	.string "small form of repayment.$"

FallarborTown_CozmosHouse_Text_IsThatMeteoriteMayIHaveIt:
	.string "Oh!\n"
	.string "Hah?\p"
	.string "That item…\p"
	.string "Could it be?\p"
	.string "Is it the Meteorite that Team Magma\n"
	.string "took from Meteor Falls?\p"
	.string "Please, may I have it?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_PleaseUseThisTM:
	.string "Prof. Cozmo: This TM, it represents\n"
	.string "my feeling of gratitude.\l"
	.string "Please use it!$"

FallarborTown_CozmosHouse_Text_ReallyGoingToHelpMyResearch:
	.string "Prof. Cozmo: Oh, I can't believe it.\n"
	.string "This is really, really great!\p"
	.string "This is really going to help my research!$"

FallarborTown_CozmosHouse_Text_CrushedWithDisappointment:
	.string "Prof. Cozmo: Oh, but…\n"
	.string "I'm crushed with disappointment…$"

FallarborTown_CozmosHouse_Text_MayIHaveMeteorite:
	.string "Prof. Cozmo: Please, may I have that\n"
	.string "Meteorite?\p"
	.string "I'm not asking for it for free.\n"
	.string "How about in exchange for this TM?$"

FallarborTown_CozmosHouse_Text_CozmoWentToMeteorFalls:
	.string "Prof. Cozmo went off to Meteor Falls\n"
	.string "on Route 114 with some people from\l"
	.string "Team Magma.$"

FallarborTown_CozmosHouse_Text_FeelSorryForCozmo:
	.string "Poor Prof. Cozmo…\n"
	.string "He's so depressed… I feel sorry for him.$"

FallarborTown_CozmosHouse_Text_CozmoIsSoHappy:
	.string "Look at Prof. Cozmo…\n"
	.string "He's so happy! I think it's cute.$"

FallarborTown_CozmosHouse_Text_HelloAgain:
	.string "Oh! Why, hello again!\p"
	.string "What good fortune...\p"
	.string "I'd been thinking that if I saw you\n"
	.string "again, I would want to give you this...$"

FallarborTown_CozmosHouse_Text_PickedUp::
	.string "I happened to pick this up some\n"
	.string "time ago, while doing excavation\l"
	.string "at Meteor Falls.\p"
	.string "I hoped it might help you and your\n"
	.string "team along on your journey.\p"
	.string "But I'm still astounded by it all.\p"
	.string "A relationship between the Mega\n"
	.string "Stones, Key Stones and Meteorites...\p"
	.string "My, but new facts do come to light\n"
	.string "every day! This is what makes my\l"
	.string "research feel worthwhile!"

FallarborTown_CozmosHouse_Text_AMan::
	.string "I know a man, a dear friend in the\n"
	.string "Kalos region, who has been researching\l"
	.string "Mega Evolution.\p"
	.string "We worked together a few years back\n"
	.string "here at Meteor Falls researching\l"
	.string "Meteorites.\p"
	.string "I'll have to share this information\n"
	.string "with him at once.$" 
