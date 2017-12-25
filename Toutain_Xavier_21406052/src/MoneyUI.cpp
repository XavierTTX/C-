#include "MoneyUI.h"



MoneyUI::MoneyUI(int argent,  float x, float y, float w, float h)
{
	this->_money = argent;
	this->_box = new AABB(x,y,h,w);
	strcpy(this->_cMoney, "Money = ");
	_itoa(argent, (this->_cMoney + 8), 10);
}


MoneyUI::~MoneyUI()
{
	delete this->_box;
}

void MoneyUI::updatePlayerMoney(int argent)
{
	_itoa(argent, (this->_cMoney + 8), 10);
	this->_money = argent;
}

void MoneyUI::draw()
{
	updatePlayerMoney(GameBoard::instance->getPlayer()->getMoney());
	GraphicPrimitives2::drawText2D(this->_cMoney,this->_box->getfloatX(), this->_box->getfloatY(),0,0,0);
}

bool MoneyUI::clickInside(float x, float y)
{
	
	return false;
}

void MoneyUI::perfomClick()
{
	//nothing

}

void MoneyUI::updateStr()
{
}
