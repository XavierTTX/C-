#pragma once
#include "Entity.h"
#include <math.h>
#define PI 3.14159265358979323846 

class BaseAsteroid :
	public Entity
{
public:
	BaseAsteroid();
	~BaseAsteroid();
	virtual int act() = 0;
	virtual int draw() = 0;
	virtual int move() = 0;
	virtual void gloriaHumanumEst() = 0;
	virtual void hurt(int i) =0;
protected :
	float _bonusS;
	float _dir;
	float _speed;
	int _shield;
	int _life;
	double _cycle;
};

