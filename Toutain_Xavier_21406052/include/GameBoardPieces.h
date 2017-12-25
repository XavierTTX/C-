#pragma once
#include "AABB.h"
#include "GraphicItem.h"
#include "DrawMethod.h"
#include <GraphicPrimitives.h>
#include "TowerBase.h" 

class GameBoardPieces : GraphicItem
{
public:
	GameBoardPieces(float posx, float posy, float w, float h);

	virtual ~GameBoardPieces();
	virtual void draw();
	virtual void setDrawMethod(DrawMethod* dm);
	AABB* getAABB();
	void addTower(TowerBase* tower);
	TowerBase* getTower();

private:
	AABB* _box;
	DrawMethod* _dM;
	TowerBase* _tower;
};

