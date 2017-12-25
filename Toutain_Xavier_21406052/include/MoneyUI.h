#pragma once
#include "UIObject.h"
#include "AABB.h"
#include "GameBoard.h"
class MoneyUI :
	public UIObject
{
public:
	MoneyUI(int argent,float x ,float y, float w , float h);
	~MoneyUI();
	void updatePlayerMoney(int argent);
	virtual void draw();
	virtual bool clickInside(float x, float y);
	virtual void perfomClick();
	

protected:
	AABB* _box;
	int _money;
	/*ie 8 is the size of money and 5 is the max amount of money you will be able to get cause 
	you will not have enougth gameplay to get more than 99999 gold and one is for the \n...*/
	char _cMoney[8 + 5 + 1]; 

private :
	void updateStr();
};

