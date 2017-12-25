#pragma once
#include "TowerBase.h"
#include "GameBoard.h"
#include <vector>
#include "CheapShot.h"
#include "helpers.h"

class CheapTower :
	public TowerBase
{
public:
	
	CheapTower(float x, float y, float h, float w);
	~CheapTower();
	virtual void draw();
	virtual void act();

	
	
};

