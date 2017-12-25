#include "BigAsteroid.h"




BigAsteroid::~BigAsteroid()
{
}

using namespace std;


BigAsteroid::BigAsteroid(float x, float y, float h, float w)
{
	this->_box = new AABB(x, y, h, w);
	this->_cycle = 0;
	this->_dir = PI;
	this->_life = 300;
	this->_shield = 0;
	this->_speed = 0.001f;
	this->_bonusS = 0;
}




int  BigAsteroid::act()
{
	this->move();
	this->_cycle += 0.01f;
	this->checkPos();
	return this->_life;
}

void BigAsteroid::checkPos() {
	if (this->_box->getfloatX() < -1)
		this->gloriaHumanumEst();
}

int BigAsteroid::draw()
{

	vector<float> vecX;
	vector<float> vecY;

	float x1 = this->_box->getfloatX() + this->_box->getfloatWidth() / 2;
	float x2 = (this->_box->getfloatX() + this->_box->getfloatWidth() / 2);
	float x3 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);
	float x4 = (this->_box->getfloatX() - this->_box->getfloatWidth() / 2);

	float y1 = (this->_box->getfloatY() + this->_box->getfloatHeight() / 3);
	float y2 = (this->_box->getfloatY() - this->_box->getfloatHeight() / 2);
	float y3 = (this->_box->getfloatY() - this->_box->getfloatHeight() / 2);
	float y4 = (this->_box->getfloatY() + this->_box->getfloatHeight() / 2);

	std::vector<float> vectoX = std::vector<float>();
	vectoX.push_back((x1 - this->_box->getfloatX()) * cos(this->_cycle) - sin(this->_cycle)  * (y1 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x2 - this->_box->getfloatX()) * cos(this->_cycle) - sin(this->_cycle)  * (y2 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x3 - this->_box->getfloatX()) * cos(this->_cycle) - sin(this->_cycle)  * (y3 - this->_box->getfloatY()) + this->_box->getfloatX());
	vectoX.push_back((x4 - this->_box->getfloatX()) * cos(this->_cycle) - sin(this->_cycle)  * (y4 - this->_box->getfloatY()) + this->_box->getfloatX());

	std::vector<float> vectoY;
	vectoY.push_back((x1 - this->_box->getfloatX()) * sin(this->_cycle) + cos(this->_cycle)  * (y1 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x2 - this->_box->getfloatX()) * sin(this->_cycle) + cos(this->_cycle)  * (y2 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x3 - this->_box->getfloatX()) * sin(this->_cycle) + cos(this->_cycle)  * (y3 - this->_box->getfloatY()) + this->_box->getfloatY());
	vectoY.push_back((x4 - this->_box->getfloatX()) * sin(this->_cycle) + cos(this->_cycle)  * (y4 - this->_box->getfloatY()) + this->_box->getfloatY());


	GraphicPrimitives2::drawFillPolygone2D(vectoX, vectoY, 0.40f, .30f, .50f);



	return 0;
}

int BigAsteroid::move()
{
	float x = this->_box->getfloatX() + this->_speed * cos(this->_dir);
	float y = this->_box->getfloatY() + this->_speed * sin(this->_dir);
	this->_box->setfloatX(x);
	this->_box->setfloatY(y);
	return 0;
}

void BigAsteroid::gloriaHumanumEst()
{
	GameBoard::instance->instance->instance->instance->instance->instance->instance->instance->getPlayer()->reduceLife(30);
	GameBoard::instance->removeAsteroid(this);
}
void BigAsteroid::hurt(int i)
{
	this->_life -= i;
	if (this->_life < 0) {
		GameBoard::instance->removeAsteroid(this);
		GameBoard::instance->getPlayer()->setMoney(GameBoard::instance->getPlayer()->getMoney() + 30);
	}
}