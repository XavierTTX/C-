#pragma once
#include "BaseAsteroid.h"
#include "GameBoard.h"
class FastAsteroid :
	public BaseAsteroid
{
public:
	FastAsteroid(float x, float y, float h, float w);
	~FastAsteroid();
	virtual int act();
	void checkPos();
	virtual int draw();
	virtual int move();
	virtual void hurt(int i);
	virtual void gloriaHumanumEst();
};

