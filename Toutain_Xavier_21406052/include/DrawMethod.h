#pragma once
#include "GraphicPrimitives2.h"

class DrawMethod 
{
public:
	DrawMethod();
	~DrawMethod();
	virtual void draw(float x, float y, float height, float width) = 0;

protected :
	float redOut;
	float blueOut;
	float greenOut;
	float redIn;
	float blueIn;
	float greenIn;

};

