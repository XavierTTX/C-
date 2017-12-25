#pragma once
#include "UIObject.h"
#include "GameBoard.h"
#include "AABB.h"

class LifeUI :
	public UIObject
{
public:
	LifeUI(int life, float x, float y, float w, float h);
	~LifeUI();

	void updatePlayerLife(int life);
	virtual void draw();
	virtual bool clickInside(float x, float y);
	virtual void perfomClick();
protected: 
	AABB* _box;
	int _life;

	//	you can't have more than 100 life*/
	char _cLife[8 + 3 + 1];
};


