#ifndef DEFS_H
#define DEFS_H

#include "CMUgraphicsLib\CMUgraphics.h"

// This file contains some global constants and definitions to be used in the project.

enum ActionType // The actions supported (add more as needed)
{
	//  [1] Actions of Design Mode  =========================
	ADD_CARD,		// Add Card Action	
	
	///TODO: Add more action types of Design Mode
	add_ladder ,
	add_snake,
	cut_card,

	SELECT_CARD,		// Select Card
	COPY_CARD,			// Copy Card
	PASTE_CARD,			// Paste Card
	DELETE_CARD,		// Delete Card
	MOVE_CARD,			// Move Card
	SHUFFLE_CARD,		// Shuffle Card
	SAVE_GRID,			// Save Grid
	OPEN_GRID,			// Open Grid


	EXIT,			// Exit Application
	TO_PLAY_MODE,	// Go to Play Mode



	//  [2] Actions of Play Mode    =========================

	ROLL_DICE,		// Roll Dice Action

	///TODO: Add more action types of Play Mode

	INPUT_DICE_VALUE,	// Input Dice Value (user types 1-6)
	NEW_GAME,			// Restart the game



	TO_DESIGN_MODE,	// Go to Design Mode



	//  [3] Others

	EMPTY,				// Empty Area in ToolBar (NOT inside any action icon)
	GRID_AREA,			// Inside Grid Area
	STATUS 				// Inside StatusBar Area
};

#endif
