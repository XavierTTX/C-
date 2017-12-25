#pragma once
#include "DrawMethod.h"
class DrawSelctedCaseMethod :
	public DrawMethod
{
public:
	DrawSelctedCaseMethod();
	~DrawSelctedCaseMethod();
	void draw(float x, float y, float height, float width);
};

