#include "LifeUI.h"



LifeUI::LifeUI(int life, float x, float y, float w, float h)
{
	this->_life = life;
	this->_box = new AABB(x, y, h, w);
	strcpy(this->_cLife, "Life = ");
	_itoa(life, (this->_cLife + 7), 10);	
}


LifeUI::~LifeUI()
{
}

void LifeUI::updatePlayerLife(int life)
{
	_itoa(life, (this->_cLife + 7), 10);
	this->_life = life;
}

void LifeUI::draw()
{
	updatePlayerLife(GameBoard::instance->getPlayer()->getLife());
	GraphicPrimitives2::drawText2D(this->_cLife, this->_box->getfloatX(), this->_box->getfloatY(), 0, 0, 0);
}

bool LifeUI::clickInside(float x, float y)
{
	return false;
}

void LifeUI::perfomClick()
{
}
