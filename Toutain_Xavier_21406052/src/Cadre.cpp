#include "Cadre.h"






Cadre::Cadre(float borderH,float borderW,float x, float y, float height, float width)
{
	this->_boxTop = new AABB(x,y ,borderH,width);
	this->_boxBottom;//= new AABB(x, y, height, borderSize;
	this->_boxLeft = new AABB(x ,-1, height, borderW);// 
	this->_boxRight;

}

Cadre::~Cadre()
{
}

void Cadre::draw()
{
	GraphicPrimitives2::drawFillRect2D(this->_boxTop->getfloatX(), this->_boxTop->getfloatY(), this->_boxTop->getfloatWidth(), this->_boxTop->getfloatHeight(), 1.0f, 0.5f, 0.5f);
	GraphicPrimitives2::drawFillRect2D(this->_boxLeft->getfloatX(), this->_boxLeft->getfloatY(), this->_boxLeft->getfloatWidth(), this->_boxLeft->getfloatHeight(), 1.0f, 0.5f, 0.5f);

}

bool Cadre::clickInside(float x, float y)
{
	return false;
}

void Cadre::perfomClick()
{
}

