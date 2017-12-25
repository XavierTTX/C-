#pragma once
#include "BaseAsteroid.h"

class NormalAsteroid :
	public BaseAsteroid
{
public:
	
	NormalAsteroid(float x, float y, float h, float w);
	~NormalAsteroid();
	virtual int act() ;
	void checkPos();
	virtual int draw();
	virtual int move();
	virtual void hurt(int i) ;
	virtual void gloriaHumanumEst();

};

