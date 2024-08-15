LehtiTown_PlayersHouse_0F_MapScripts::
	.byte 0


lehtiTown_PlayerMom::
	lock
	faceplayer
	msgbox lehtiTown_PlayerMom_Text_0, MSGBOX_NPC
	release
	end


lehtiTown_Swinub::
	lock
	msgbox lehtiTown_Swinub_Text_0, MSGBOX_SIGN
	release
	end


lehtiTown_Kitchen::
	msgbox lehtiTown_Kitchen_Text_0, MSGBOX_SIGN
	return


lehtiTown_Window::
	msgbox lehtiTown_Window_Text_0, MSGBOX_SIGN
	return


lehtiTown_KitchenDrink::
	lock
	msgbox lehtiTown_KitchenDrink_Text_0, MSGBOX_DEFAULT
	msgbox lehtiTown_KitchenDrink_Text_1, MSGBOX_DEFAULT
	closemessage
	release
	end


lehtiTown_TV::
	msgbox lehtiTown_TV_Text_0, MSGBOX_SIGN
	return


lehtiTown_PlayerMom_Text_0:
	.string "TODO$"

lehtiTown_Swinub_Text_0:
	.string "Zzz... Mom's Swinub is sleeping\n"
	.string "peacefully.$"

lehtiTown_Kitchen_Text_0:
	.string "The scent of freshly cooked food fills\n"
	.string "the air, yummy!$"

lehtiTown_Window_Text_0:
	.string "You peer out of the window and see a\n"
	.string "pidgey sitting on the roof!$"

lehtiTown_KitchenDrink_Text_0:
	.string "You drank some of mom's specialty hot\n"
	.string "chocolate...$"

lehtiTown_KitchenDrink_Text_1:
	.string "Alright, time to go!$"

lehtiTown_TV_Text_0:
	.string "A shady looking business man named\n"
	.string "Tanaka is hosting a Shopping Channel on\l"
	.string "the TV... You decide not to purchase\l"
	.string "anything.$"
