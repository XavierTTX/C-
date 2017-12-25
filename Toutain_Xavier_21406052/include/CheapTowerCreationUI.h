#pragma once
#include "TowerCreationUI.h"
#include "CheapTower.h"
#include <cstring>

class CheapTowerCreationUI :
	public TowerCreationUI
{
public:
	CheapTowerCreationUI(const char* text, float x, float y, float w, float  h, GameBoardPieces* gb, int prix);
	virtual ~CheapTowerCreationUI();
	virtual void draw() ;
	virtual void createTower();
	virtual void perfomClick();
};

