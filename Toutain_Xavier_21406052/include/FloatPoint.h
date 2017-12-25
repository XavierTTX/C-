#pragma once
#include "Point.h"
class FloatPoint :
	public Point
{
public:
	FloatPoint();
	FloatPoint(const FloatPoint & pts);
	FloatPoint(const float x, const float y);
	~FloatPoint();
	void operator=(const FloatPoint pts);
	void* getX();
	void* getY();
	void setX(void * x);
	void setY(void * y);
private:

	float _x;
	float _y;
};

