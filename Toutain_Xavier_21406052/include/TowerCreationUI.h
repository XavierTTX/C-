#pragma once
#include "UIObject.h"
#include "AABB.h"
#include "GameBoardPieces.h"
#include "TowerUIDrawMethod.h"
#include "NoMoneyTowerCreationUIDrawMethod.h"
#include "SelectedTowerCreationUIDrawMethod.h"
class TowerCreationUI :
	public UIObject
{
public:
	TowerCreationUI();
	virtual ~TowerCreationUI();
	virtual void draw() = 0;
	virtual void createTower() = 0;
	virtual bool clickInside(float x, float y);
	virtual void setStandardDM();
	virtual void setSeletedDM();
	virtual void setNoMoneyDM();
	virtual int getPrix();

protected :
	AABB* _box;
	const char* _text;
	GameBoardPieces* _gBP;
	int _prix;
	DrawMethod* _currentDM;
	DrawMethod* _DM;
	DrawMethod* _SelectedDM;
	DrawMethod* _NoMoneyDM;

};

