#pragma once
#include "GraphicItem.h"
#include "AABB.h" 
#define PI 3.14159265358979323846 
//#include "GameBoard.h"


class TowerBase :
	public GraphicItem
{
public:

	TowerBase();
	virtual ~TowerBase();
	virtual void draw() = 0;
	virtual void act() = 0;
	virtual void upgradeD();
	virtual void upgradeS();

protected :

	AABB* _box;
	float _dir;
	int nextshot;
	int _level;
	int _levelD;
	int _levelS;

};

