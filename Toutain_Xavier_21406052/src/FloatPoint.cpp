#include "FloatPoint.h"



FloatPoint::FloatPoint() : _x(0), _y(0)
{

}

FloatPoint::FloatPoint(const FloatPoint& pts) : _x(pts._x), _y(pts._y)
{

}

FloatPoint::FloatPoint(const float x, const float y) : _x(x), _y(y)
{

}


FloatPoint::~FloatPoint()
{

}
void FloatPoint::operator=(const FloatPoint pts) {
	_x = pts._x;
	_y = pts._y;

}

void* FloatPoint::getX() {
	return (void*)&this->_x;
}

void* FloatPoint::getY() {
	return (void*)&this->_x;
}

void FloatPoint::setX(void* x) {
	this->_x = (float)(*(float*)x);
}
void FloatPoint::setY(void* y) {
	this->_y = (float)(*(float*)y);
}

