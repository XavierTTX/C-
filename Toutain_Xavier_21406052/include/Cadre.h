#pragma once
#include "UIObject.h"
#include "AABB.h"
#include "GraphicPrimitives2.h"
class Cadre :
	public UIObject
{
public:
	Cadre(float  BorderH, float BorderW,float x, float y, float height,float width);
	~Cadre();
	virtual void draw();
	virtual bool clickInside(float x, float y);
	virtual void perfomClick();

private :
	AABB* _boxTop;
	AABB* _boxBottom;
	AABB* _boxLeft;
	AABB* _boxRight;


};

