#pragma once
#include "Shot.h"
#include "GameBoard.h"
class CheapShot :
	public Shot
{
public:
	CheapShot(float x,float y, float h, float w, float dir,int degats);
	~CheapShot();
	virtual int act() ;
	virtual int draw();
	virtual int move();
	
};

