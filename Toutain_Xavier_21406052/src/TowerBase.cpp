#include "TowerBase.h"



TowerBase::TowerBase()
{
}


TowerBase::~TowerBase()
{	
	delete this->_box;
}

void TowerBase::upgradeD()
{
	this->_level++;
	this->_levelD++;
}

void TowerBase::upgradeS()
{
	this->_level++;
	this->_levelS++;
}

