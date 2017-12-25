#pragma once
#include "DrawMethod.h"
class NoMoneyTowerCreationUIDrawMethod :
	public DrawMethod
{
public:
	NoMoneyTowerCreationUIDrawMethod(const char * text, const char* price);
	~NoMoneyTowerCreationUIDrawMethod();
	void draw(float x, float y, float height, float width);

protected:
	const char* _text;
	const char* _price;
};

