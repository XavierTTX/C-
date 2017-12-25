#pragma once
#include "TowerBase.h"
#include "GameBoard.h"
#include "CheapShot.h"

class SplitTower :
	public TowerBase
{
public:
	SplitTower(float x, float y, float h, float w);
	~SplitTower();
	virtual void draw();
	virtual void act();
};

