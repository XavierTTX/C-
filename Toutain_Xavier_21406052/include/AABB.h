#pragma once
#include "FloatPoint.h"

class AABB
{
public:

	AABB();
	virtual ~AABB();
	AABB(const float x, const float y, const float h, const float w);
	AABB(const AABB& cpy);
	AABB* operator+(int i);
	void operator=(const AABB& cpy);

	virtual int collisionPointAABB(float curseur_x, float curseur_y, AABB& box);
	virtual int CollisionPointAABB(FloatPoint& p, AABB& box) ;
	virtual int CollisionAABBvsAABB(AABB& box1, AABB& box2);


	virtual float getfloatX();
	virtual float getfloatY();

	virtual void setfloatX(float x) ;
	virtual void setfloatY(float y);

	virtual float getfloatHeight();
	virtual float getfloatWidth();

	virtual void setfloatHeight(float x);
	virtual void setfloatWidth(float y);


protected:

	float _Fx;
	float _Fy;

	float _FHeight;
	float _FWidth;

};

