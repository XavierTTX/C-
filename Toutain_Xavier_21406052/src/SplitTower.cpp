#include "SplitTower.h"

float directioTo2(float x1, float y1, float x2, float y2);

float directioTo2(float x1, float y1, float x2, float y2) {
	return atan2((y2 - y1), (x2 - x1));
}

SplitTower::SplitTower(float x, float y, float h, float w)
{
	this->_box = new AABB(x, y, h, w);
	this->nextshot = 120;
	this->_level = 0;
	this->_levelD = 0;
	this->_levelS = 0;

}


SplitTower::~SplitTower()
{
	delete _box;
}

void SplitTower::draw()
{
	double d = (0);



	float x1 = this->_box->getfloatX() + this->_box->getfloatWidth() / 2;
	float x2 = (this->_box->getfloatX() + this->_box->getfloatWidth() / 2);
	float x3 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);
	float x4 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);

	float y1 = (this->_box->getfloatY() + this->_box->getfloatHeight() / 8);
	float y2 = (this->_box->getfloatY() - this->_box->getfloatHeight() / 8);
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


	GraphicPrimitives2::drawFillPolygone2D(vectoX, vectoY, 1.0f, 0.30f, 0.20f);

	GraphicPrimitives2::drawOutlinedPolygone2D(vectoX, vectoY, 1.0f, 0.5f, 1.0f);

}


void SplitTower::act()
{

	float minX = 1;
	int minI = -1;
	for (int i = 0; i < GameBoard::instance->GetAsteroids()->size(); i++) {

		if (minX >(*(GameBoard::instance->GetAsteroids()))[i]->getBox()->getfloatX()) {
			minX = (*(GameBoard::instance->GetAsteroids()))[i]->getBox()->getfloatX();
			minI = i;
		}
	}
	if (-1 != minI) {
		BaseAsteroid* b = (*(GameBoard::instance->GetAsteroids()))[minI];
		if (b != nullptr) {
			this->_dir = directioTo2(this->_box->getfloatX(), this->_box->getfloatY(), b->getBox()->getfloatX(), b->getBox()->getfloatY());
			if (!this->nextshot % (120 - 5 * _levelS)) {
					GameBoard::instance->addShot(new CheapShot(this->_box->getfloatX(), this->_box->getfloatY(), this->_box->getfloatHeight() *0.05f, this->_box->getfloatWidth()*0.1, this->_dir - PI / 16, 3 + _levelD * 3));
				GameBoard::instance->addShot(new CheapShot(this->_box->getfloatX(), this->_box->getfloatY(), this->_box->getfloatHeight() *0.05f, this->_box->getfloatWidth()*0.1, this->_dir + PI / 16, 3 + _levelD * 3));
				GameBoard::instance->addShot(new CheapShot(this->_box->getfloatX(), this->_box->getfloatY(), this->_box->getfloatHeight() *0.05f, this->_box->getfloatWidth()*0.1, this->_dir , 3 + _levelD * 3));
				
				this->nextshot = 120 - 5 * _levelS;
			}
			nextshot--;
		}
	}
}
