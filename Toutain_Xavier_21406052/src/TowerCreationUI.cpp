#include "TowerCreationUI.h"






TowerCreationUI::TowerCreationUI()
{
}

TowerCreationUI::~TowerCreationUI()
{

}

void TowerCreationUI::draw()
{

}


bool TowerCreationUI::clickInside(float x, float y)
{
	return this->_box->collisionPointAABB(x, y, *(this->_box));;
}

void TowerCreationUI::setStandardDM()
{
	this->_currentDM = this->_DM;

}

void TowerCreationUI::setSeletedDM()
{
	this->_currentDM = this->_SelectedDM;

}

void TowerCreationUI::setNoMoneyDM()
{
	this->_currentDM = this->_NoMoneyDM;

}

int TowerCreationUI::getPrix()
{
	return this->_prix;

}
