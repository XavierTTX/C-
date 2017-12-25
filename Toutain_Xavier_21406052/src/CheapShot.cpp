#include "CheapShot.h"



CheapShot::CheapShot(float x, float y, float h, float w, float dir, int degats ) {

	this->_box = new AABB(x, y, h, w);
	this->_dir = dir;
	this->_speed = 0.03f;
	this->_degats = degats;
	
}


CheapShot::~CheapShot()
{
}

int CheapShot::act()
{
	
	for (int i = 0; i < GameBoard::instance->GetAsteroids()->size(); i++) {
		if (this->_box->CollisionAABBvsAABB(*this->_box, *(*(GameBoard::instance->GetAsteroids()))[i]->getBox())) {
			(*(GameBoard::instance->GetAsteroids()))[i]->hurt(5);
			GameBoard::instance->removeShot(this);
			return 1;
		}
	}
	move();
	if (this->_box->getfloatX() > 1 || this->_box->getfloatY() > 1 || this->_box->getfloatX() < -1) {
		GameBoard::instance->removeShot(this);
	}
	return 1;
}

int CheapShot::draw()
{

	float x1 = this->_box->getfloatX() + this->_box->getfloatWidth() / 2;
	float x2 = (this->_box->getfloatX() + this->_box->getfloatWidth() / 2);
	float x3 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);
	float x4 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);

	float y1 = (this->_box->getfloatY() + this->_box->getfloatHeight() / 2);
	float y2 = (this->_box->getfloatY() - this->_box->getfloatHeight() / 2);
	float y3 = (this->_box->getfloatY() - this->_box->getfloatHeight() / 2);
	float y4 = (this->_box->getfloatY() + this->_box->getfloatHeight() / 2);
	std::vector<float> vectoX = std::vector<float>();
	vectoX.push_back((x1 - this->_box->getfloatX()) * cos(this->_dir) - sin(this->_dir) * (y1 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x2 - this->_box->getfloatX()) * cos(this->_dir) - sin(this->_dir) * (y2 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x3 - this->_box->getfloatX()) * cos(this->_dir) - sin(this->_dir) * (y3 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x4 - this->_box->getfloatX()) * cos(this->_dir) - sin(this->_dir) * (y4 - this->_box->getfloatY()) + this->_box->getfloatX());

	std::vector<float> vectoY;
	vectoY.push_back((x1 - this->_box->getfloatX()) * sin(this->_dir) + cos(this->_dir) * (y1 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x2 - this->_box->getfloatX()) * sin(this->_dir) + cos(this->_dir) * (y2 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x3 - this->_box->getfloatX()) * sin(this->_dir) + cos(this->_dir) * (y3 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x4 - this->_box->getfloatX()) * sin(this->_dir) + cos(this->_dir) * (y4 - this->_box->getfloatY()) + this->_box->getfloatY());


	GraphicPrimitives2::drawFillPolygone2D(vectoX, vectoY, 1.0f, 1.0f, 1.0f);

	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX() - this->_box->getfloatWidth() / 2, this->_box->getfloatY() - this->_box->getfloatHeight() / 2, 0.01f, 0.01f, 1.0f, 1.0f, 1.0f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX() + this->_box->getfloatWidth() / 2, this->_box->getfloatY() + this->_box->getfloatHeight() / 2, 0.01f, 0.01f, 1.0f, 1.0f, 1.0f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX() + this->_box->getfloatWidth() / 2, this->_box->getfloatY() - this->_box->getfloatHeight() / 2, 0.01f, 0.01f, 1.0f, 1.0f, 1.0f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX() - this->_box->getfloatWidth() / 2, this->_box->getfloatY() + this->_box->getfloatHeight() / 2, 0.01f, 0.01f, 1.0f, 1.0f, 1.0f);
	GraphicPrimitives2::drawOutlinedPolygone2D(vectoX, vectoY, 1.0f, 0.5f, 1.0f);

	return 1;
}

int CheapShot::move()
{
	
	float x = this->_box->getfloatX() + this->_speed * cos(this->_dir);
	float y = this->_box->getfloatY() + this->_speed * sin(this->_dir);
	//std::cout << x << std::endl;
	this->_box->setfloatX(x);
	this->_box->setfloatY(y);
	
	return 0;
}
