#pragma once
#include "AABB.h"
#include <vector>
#include "GraphicPrimitives2.h"
#include <math.h>

class Entity
{
public:
	Entity();
	virtual ~Entity() = 0;
	virtual int act() = 0;
	virtual int draw() = 0;
	virtual int move() = 0;
	virtual AABB* getBox();

protected:

	AABB* _box;

};

