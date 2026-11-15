#ifndef INPUT_H
#define INPUT_H

#include "DEFS.h"
#include "UI_Info.h" 
#include "CMUgraphicsLib\CMUgraphics.h"
#include "CellPosition.h"

// forward declarations (their includes are in the cpp)
class Output;  

class Input		// The application manager & grid (phase 2) should have a pointer to this class
{
private:

	window *pWind;	// Pointer to the Graphics Windo

public:

	// ========== General Functions ==========

	Input(window *pW);  // Consturctor: Points to the passed window pointer

	void GetPointClicked(int &x, int &y) const; // Wait for a Mouse Click and Gets the real coordinates (x,y) of it

	string GetString(Output* pO) const;  // Returns a string entered by the user

	///TODO: IMPLEMENT THE FOLLOWING FUNCTION
	int GetInteger(Output* pO) const;    // Returns an integer entered by the user
	int Input::GetInteger(Output* pO) const
	{
		string s = GetString(pO);
		if (s.empty())
			return 0;
		return stoi(s);
	}
	// ========== Game Functions ==========
	
	///TODO: COMPLETE THE IMPLEMENTATIN OF THE FOLLOWING FUNCTION
	ActionType GetUserAction() const;	 // Reads a user click and map it to its corresponding ActionType
	CellPosition Input::GetCellClicked() const
	{
		int x, y;
		pWind->WaitMouseClick(x, y);

		CellPosition cellPos;

		if (y >= UI.ToolBarHeight && y <= (UI.height - UI.StatusBarHeight))
		{
			int vCell = (y - UI.ToolBarHeight) / UI.CellHeight;
			int hCell = x / UI.CellWidth;

			cellPos.SetVCell(vCell);
			cellPos.SetHCell(hCell);
		}
		else
		{
			cellPos.SetVCell(-1);
			cellPos.SetHCell(-1);
		}

		return cellPos;
	}
	///TODO: COMPLETE THE IMPLEMENTATIN OF THE FOLLOWING FUNCTION
	CellPosition GetCellClicked() const; // Wait for a Mouse Click and Gets the CellPosition of it (VCell and HCell)
	CellPosition Input::GetCellClicked() const
	{
		int x, y;
		pWind->WaitMouseClick(x, y);

		CellPosition cellPos;

		if (y >= UI.ToolBarHeight && y <= (UI.height - UI.StatusBarHeight))
		{
			int vCell = (y - UI.ToolBarHeight) / UI.CellHeight;
			int hCell = x / UI.CellWidth;

			cellPos.SetVCell(vCell);
			cellPos.SetHCell(hCell);
		}
		else
		{
			cellPos.SetVCell(-1);
			cellPos.SetHCell(-1);
		}

		return cellPos;
	}								 // If the click is NOT on a cellposition, (-1,-1) is returned
										 // This function is like GetPointClicked but returns Cell Position NOT Real Coordinates
};

#endif
