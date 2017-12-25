#pragma once
#include "TowerCreationUI.h"
#include "BigShotTower.h"
class BigShotTowerCreationUI :
	public TowerCreationUI
{
public:
	BigShotTowerCreationUI(const char* text, float x, float y, float w, float h, GameBoardPieces * gb, int prix);
	~BigShotTowerCreationUI();
	virtual void draw();
	virtual void createTower();
	virtual void perfomClick();
};

