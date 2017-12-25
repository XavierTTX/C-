#pragma once
class Player
{
public:
	Player(int life, int money);
	~Player();
	void reduceLife(int i);
	int getLife();
	int getMoney();
	void setLife(int life);
	void setMoney(int money);
private :	
	int _life;
	int _money;

};

