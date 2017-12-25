#pragma once
class Point
{
public:
	Point();
	virtual ~Point();

	virtual void* getX() = 0;
	virtual void* getY() = 0;

	virtual void setX(void* x) = 0;
	virtual void setY(void* y) = 0;



};

