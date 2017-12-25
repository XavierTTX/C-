#pragma once
#include "GraphicItem.h"
class UIObject :
	public GraphicItem
{
public:
	UIObject();
	~UIObject();
	virtual void draw() = 0;
	virtual bool clickInside(float x, float y) = 0;
	virtual void perfomClick() = 0;
};

