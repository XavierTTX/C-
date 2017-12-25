#pragma once
#include "TowerBase.h"
#include "GameBoard.h"
#include "CheapShot.h"
class BigShotTower :
	public TowerBase
{
public:
	BigShotTower(float x, float y, float h, float w);
	~BigShotTower();
	virtual void draw();
	virtual void act();
};

