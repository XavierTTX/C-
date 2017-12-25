#include "GameBoardPieces.h"



GameBoardPieces::GameBoardPieces(float x , float y , float w, float h )
{
	//printf("%f", w);
	this->_box = new AABB(x, y, h, w);
	
	
}

void GameBoardPieces::draw()
{
	this->_dM->draw(_box->getfloatX(), _box->getfloatY(), _box->getfloatHeight(), _box->getfloatWidth());
	if (this->_tower != nullptr) {
		this->_tower->draw();
		this->_tower->act();
	}
}

void GameBoardPieces::setDrawMethod(DrawMethod* dm)
{
	this->_dM = dm;
}

AABB* GameBoardPieces::getAABB()
{
	return _box;
}

void  GameBoardPieces::addTower(TowerBase * tower)
{
	this->_tower = tower;
}

TowerBase * GameBoardPieces::getTower()
{
	return this->_tower;
}

GameBoardPieces::~GameBoardPieces()
{

}


