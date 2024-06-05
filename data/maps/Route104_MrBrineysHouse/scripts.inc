Route104_MrBrineysHouse_MapScripts::
	.byte 0


MrBrineysHouse_Woman::
	lock
	faceplayer
	msgbox MrBrineysHouse_Woman_Text_0
	waitmessage
	release
	end


MrBrineysHouse_Pelipper::
	lock
	faceplayer
	playmoncry SPECIES_PELIPPER, CRY_MODE_NORMAL
	msgbox MrBrineysHouse_Pelipper_Text_0
	waitmoncry
	release
	end


MrBrineysHouse_Woman_Text_0:
	.string "This house used to be owned by a\n"
	.string "renowned sailor, but he sold it to me\l"
	.string "and my husband a year ago. If you are\l"
	.string "looking for a way to Dewford, you can\l"
	.string "get there now by just walking.$"

MrBrineysHouse_Pelipper_Text_0:
	.string "Peelipp!$"
