#pragma once
#include "BaseAsteroid.h"
#include "GameBoard.h"

class BigAsteroid :
	public BaseAsteroid
{
public:
	BigAsteroid(float x, float y, float h, float w);
	~BigAsteroid();
	virtual int act();
	void checkPos();
	virtual int draw();
	virtual int move();
	virtual void hurt(int i);
	virtual void gloriaHumanumEst();
};

