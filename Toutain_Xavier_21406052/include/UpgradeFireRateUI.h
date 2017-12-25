#pragma once
#include "TowerCreationUI.h"
class UpgradeFireRateUI :
	public TowerCreationUI
{
public:
	UpgradeFireRateUI(const char* text, float x, float y, float w, float  h, TowerBase* tb, int prix);
	virtual ~UpgradeFireRateUI();
	virtual void draw() ;
	virtual void createTower();
	virtual void perfomClick();

protected :
	TowerBase* _tb;
};


