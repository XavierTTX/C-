#pragma once
#include "TowerCreationUI.h"
class UpgradeDamageUI :
	public TowerCreationUI
{
public:
	UpgradeDamageUI(const char* text, float x, float y, float w, float  h, TowerBase* tb, int prix);
	virtual ~UpgradeDamageUI();
	virtual void draw();
	virtual void createTower();
	virtual void perfomClick();

protected:
	TowerBase* _tb;
};

