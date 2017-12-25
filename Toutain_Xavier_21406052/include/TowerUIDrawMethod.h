#pragma once
#include "DrawMethod.h"
class TowerUIDrawMethod :
	public DrawMethod
{
public:
	TowerUIDrawMethod(const char* text,const char* price);
	~TowerUIDrawMethod();
	void draw(float x, float y, float height, float width);

protected:
	const char* _text;
	const char* _price; 
};

