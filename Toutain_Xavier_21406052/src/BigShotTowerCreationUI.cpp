#include "BigShotTowerCreationUI.h"
#define PRICE "80 Gold"


BigShotTowerCreationUI::BigShotTowerCreationUI(const char* text, float x, float y, float w, float h, GameBoardPieces * gb, int prix) {
	this->_box = new AABB(x, y, h, w);
	this->_text = new const char[(strlen(text) + 1)];
	strcpy((char*)this->_text, text);
	this->_DM = new TowerUIDrawMethod(this->_text, PRICE);
	this->_NoMoneyDM = new NoMoneyTowerCreationUIDrawMethod(this->_text, PRICE);
	this->_SelectedDM = new SelectedTowerCreationUIDrawMethod(this->_text, PRICE);
	this->_currentDM = this->_DM;
	this->_gBP = gb;
	this->_prix = prix;
}


BigShotTowerCreationUI::~BigShotTowerCreationUI()
{
	delete this->_DM;
	delete this->_SelectedDM;
	delete this->_NoMoneyDM;
}

void BigShotTowerCreationUI::draw()
{
	this->_currentDM->draw(_box->getfloatX(), _box->getfloatY(), _box->getfloatHeight(), _box->getfloatWidth());

}

void BigShotTowerCreationUI::createTower()
{
	this->_gBP->addTower(new BigShotTower(_gBP->getAABB()->getfloatX() + _gBP->getAABB()->getfloatWidth() / 2, _gBP->getAABB()->getfloatY() + _gBP->getAABB()->getfloatHeight() / 2, _gBP->getAABB()->getfloatHeight()* 0.6f, _gBP->getAABB()->getfloatWidth()*0.6f));
}

void BigShotTowerCreationUI::perfomClick()
{
	this->createTower();
}
