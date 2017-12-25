#pragma once
#include "Entity.h"
class Shot
	: public Entity
{
public:
	Shot();
	~Shot();
	virtual int act() = 0;
	virtual int draw() = 0;
	virtual int move() = 0;

protected:
	float _dir;
	float _speed;
	float _degats;
};

