#include "Player.h"



Player::Player(int life,int money)
{
	this->_life = life;
	this->_money = money;
}


Player::~Player()
{
}

void Player::reduceLife(int i)
{
	this->_life -= i;
}

int Player::getLife()
{
	return this->_life;
}

int Player::getMoney()
{
	return this->_money;
}

void Player::setLife(int life)
{
	this->_life = life;
}

void Player::setMoney(int money)
{
	this->_money = money;
}
