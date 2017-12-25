#pragma once
#include "GameBoardPieces.h"
#include "Player.h"
#include "GraphicItem.h"
#include "WorldGLConverter.h"
#include "DrawStandardCaseMethod.h"
#include "glfw3.h"
#include "BaseAsteroid.h"
#include "Shot.h"
#include "UIObjects.h"
#include <algorithm>

class GameBoard : public GraphicItem
{
public:
	GameBoard(int x,int y, Player* player,UIObjects* object);
	~GameBoard();
    int getLine();
	int getCase();
	void draw();
	
	const DrawMethod* getStandardDM();
	GameBoardPieces*** getBoard();
	static GameBoard* instance;
	GameBoardPieces* getSelected();
	void setSelected(GameBoardPieces* selected);
	Player* getPlayer();
	void removeAsteroid(BaseAsteroid* ast);
	void asteroidAdd(BaseAsteroid* ast);
	std::vector<BaseAsteroid*>* GetAsteroids();
	std::vector<Shot*>* getShot();
	void addShot(Shot* sht);
	void removeShot(Shot* sht);
	void clearGame();
	UIObjects* getUI();

private:
	std::vector<BaseAsteroid*> _toDeleteAsteroid;
	std::vector<BaseAsteroid*> _Asteroids;
	std::vector<Shot*> _shot;
	std::vector<Shot*> _toDeleteShot;
	UIObjects* _UI;
	Player* _player;
	static const DrawMethod* stdDM;
	GameBoardPieces* _selected;
	int _line;
	int _colomn;
	GameBoardPieces*** board;

};

