#include "AABB.h"
#include <vector>

AABB::~AABB(){
}


float AABB::getfloatHeight()
{
	return this->_FHeight;
}

float AABB::getfloatWidth()
{
	return this->_FWidth;
}

void AABB::setfloatHeight(float x)
{
}

void AABB::setfloatWidth(float y)
{
}


AABB::AABB() {
	_Fx = 0;
	_Fy = 0;
	_FHeight = 0;
	_FWidth = 0;
}


AABB::AABB(const AABB& cpy)
{
	_Fx = cpy._Fx;
	_Fy = cpy._Fy;
	_FHeight = cpy._FHeight;
	_FWidth = cpy._FWidth;
}

AABB::AABB(const float x, const float y, const float h, const float w) {
	this->_Fx = x;
	this->_Fy = y;
	this->_FHeight = h;
	this->_FWidth = w;
}

AABB* AABB::operator+(int i)
{
	
	AABB* res = new AABB(*this);
	res->setfloatX(res->getfloatX() + i);
	res->setfloatY(res->getfloatY() + i);

	return res;
}

void AABB::operator=(const AABB & cpy)
{
	this->_Fx = cpy._Fx;
	this->_Fy = cpy._Fy;
	this->_FHeight = cpy._FHeight;
	this->_FHeight = cpy._FHeight;

}


int AABB::collisionPointAABB(float curseur_x, float curseur_y, AABB& box) {
	if (curseur_x >= box.getfloatX()
		&& curseur_x < box.getfloatX() + box.getfloatWidth()
		&& curseur_y >= box.getfloatY()
		&& curseur_y < box.getfloatY() + box.getfloatHeight())
		return 1;
	else
		return 0;

}

int AABB::CollisionPointAABB(FloatPoint& p, AABB& box)
{
	if ((*(float*)(p.getX())) >= box.getfloatX()
		&& (*(float*)(p.getX())) < box.getfloatX() + box.getfloatWidth()
		&& (*(float*)(p.getY())) >= box.getfloatY()
		&& (*(float*)(p.getY())) < box.getfloatY() + box.getfloatHeight())
		return 1;
	else
		return 0;


}


int AABB::CollisionAABBvsAABB(AABB & box1, AABB & box2)
{	if ((box2.getfloatX() >= box1.getfloatX() + box1.getfloatWidth())      // trop à droite
		|| (box2.getfloatX() + box2.getfloatWidth() <= box1.getfloatX()) // trop à gauche
		|| (box2.getfloatY() >= box1.getfloatY() + box1.getfloatHeight()) // trop en bas
		|| (box2.getfloatY() + box2.getfloatHeight() <= box1.getfloatY()))  // trop en haut
		return 0;
	else
		return 1;
}


float AABB::getfloatX()
{
	return this->_Fx;
}

float AABB::getfloatY()
{
	return this->_Fy;
}

void AABB::setfloatX(float x)
{
	this->_Fx = x;
}

void AABB::setfloatY(float y)
{
	this->_Fy = y;
}

