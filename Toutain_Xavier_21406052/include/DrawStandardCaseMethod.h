#pragma once
#include "DrawMethod.h"
class DrawStandardCaseMethod :
	public DrawMethod
{
public:
	DrawStandardCaseMethod();
	~DrawStandardCaseMethod();
	void draw(float x, float y, float height, float width);

};

