VajraPyramidBF1_MapScripts::
	.byte 0


hideBF1StairsPyramid::
	return


stepOnBF1Switch::
	lock
	playse SE_CLICK
	setmetatile 38, 3, METATILE_VajraPyramid_PyramidLadderBottom, FALSE
	setmetatile 38, 2, METATILE_VajraPyramid_PyramidLadderTop, TRUE
	setmetatile 38, 15, METATILE_pyramidpuzzles_pyramidButtonPressed, FALSE
	special DrawWholeMapView
	setvar VAR_TEMP_0, 1
	waitse
	release
	end
