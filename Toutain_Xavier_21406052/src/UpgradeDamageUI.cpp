#include "UpgradeDamageUI.h"
#define PRICE "50"


UpgradeDamageUI::UpgradeDamageUI(const char* text, float x, float y, float w, float  h, TowerBase* tb, int prix)
{
	this->_box = new AABB(x, y, h, w);
	this->_text = new const char[(strlen(text) + 1)];
	strcpy((char*)this->_text, text);
	this->_DM = new TowerUIDrawMethod(this->_text, PRICE);
	this->_NoMoneyDM = new NoMoneyTowerCreationUIDrawMethod(this->_text, PRICE);
	this->_SelectedDM = new SelectedTowerCreationUIDrawMethod(this->_text, PRICE);
	this->_currentDM = this->_DM;
	this->_prix = prix;
	this->_tb = tb;
}


UpgradeDamageUI::~UpgradeDamageUI()
{
	delete this->_DM;
	delete this->_SelectedDM;
	delete this->_NoMoneyDM;
}

void UpgradeDamageUI::draw()
{
	this->_currentDM->draw(_box->getfloatX(), _box->getfloatY(), _box->getfloatHeight(), _box->getfloatWidth());
}

void UpgradeDamageUI::createTower()
{
	this->_tb->upgradeD();
}

void UpgradeDamageUI::perfomClick()
{
	this->createTower();

}
