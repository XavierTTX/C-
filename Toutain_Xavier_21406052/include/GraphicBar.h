#pragma once
#include "UIObject.h"
#include "AABB.h"
#include "GraphicPrimitives2.h"

class GraphicBar :
	public UIObject
{
public:

	GraphicBar(float x,float y,float height, float width );
	~GraphicBar();
	virtual void draw();
	virtual bool clickInside(float x, float y);
	virtual void perfomClick();

private :
	AABB* _box;
};

