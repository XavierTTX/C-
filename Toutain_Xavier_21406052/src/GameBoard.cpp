#include "GameBoard.h"


const DrawMethod* GameBoard::stdDM = new DrawStandardCaseMethod();
GameBoard*  GameBoard::instance = nullptr;







GameBoard::GameBoard(int x, int y, Player* player,UIObjects* object)
{
	this->_player = player;
	GameBoard::instance = this;
	this->_selected = nullptr;
	this->_UI = object;
	this->_line = y;
	this->_colomn = x;
	WorldGLConverter a = WorldGLConverter();
	//printf("%f", (float)WorldGLConverter::WindowWidth / (float)x);
	float b = (float)(WorldGLConverter::WindowWidth - (2 * WorldGLConverter::WindowDepth)) / (float)x;
	float c = (float)(WorldGLConverter::WindowHeight - WorldGLConverter::WindowTopBorder - (2 * WorldGLConverter::WindowDepth)) / (float)y;

	float objectWidth = a << b;
	float objectHeight = a < c;
	objectHeight *= 2;
	objectWidth *= 2;
	float startGLX = a << WorldGLConverter::WindowDepth;
	//float startGLY = a < WorldGLConverter::WindowTopBorder;
	startGLX *= 2;
	//startGLY *= 2;

	board = new GameBoardPieces**[y];
	for (int i = 0; i < y; ++i) {
		board[i] = new GameBoardPieces*[x];
		for (int j = 0; j < x; j++) {
			board[i][j] = new GameBoardPieces(-1 + startGLX + j * objectWidth, -1 + startGLX + 0 + i * objectHeight, objectWidth, objectHeight);
			board[i][j]->setDrawMethod((DrawMethod*)this->getStandardDM());

		}
	}
}


GameBoard::~GameBoard()
{

	for (int i = 0; i < getLine(); ++i) {
		for (int j = 0; j < getCase(); ++j) {
			delete board[i][j];
		}
		delete[] this->board[i];
	}
	delete[] board;
}

int GameBoard::getLine() {
	return this->_line;
}

int GameBoard::getCase() {
	return this->_colomn;
}

void GameBoard::draw() {
	for (int i = 0; i < getLine(); ++i) {
		for (int j = 0; j < getCase(); ++j) {
			this->board[i][j]->draw();
		}
	}
	//printf("fin %p\n",board[0][0]);

}

const DrawMethod* GameBoard::getStandardDM()
{
	return this->stdDM;
}

GameBoardPieces*** GameBoard::getBoard()
{
	return this->board;
}

GameBoardPieces * GameBoard::getSelected()
{
	return this->_selected;
}

void GameBoard::setSelected(GameBoardPieces * selected)
{
	this->_selected = selected;
}

Player * GameBoard::getPlayer()
{
	return this->_player;
}

void GameBoard::removeAsteroid(BaseAsteroid * ast)
{
	this->_toDeleteAsteroid.push_back(ast);
	// this. 
}

void GameBoard::asteroidAdd(BaseAsteroid * ast)
{
	this->_Asteroids.push_back(ast);
}

std::vector<BaseAsteroid*>* GameBoard::GetAsteroids()
{
	return &(this->_Asteroids);
}

std::vector<Shot*>* GameBoard::getShot()
{
	return &(this->_shot);
}

void GameBoard::addShot(Shot* sht) {
	this->_shot.push_back(sht);
}

void GameBoard::removeShot(Shot* sht){

	this->_toDeleteShot.push_back(sht);
}

void GameBoard::clearGame(){
	for(int i = 0; i < this->_toDeleteAsteroid.size(); i++){
			this->_Asteroids.erase(std::remove(_Asteroids.begin(), _Asteroids.end(), this->_toDeleteAsteroid[i]), _Asteroids.end());
	}
	this->_toDeleteAsteroid.clear();
	for (int i = 0; i < this->_toDeleteShot.size(); i++) 
	{
		this->_shot.erase(std::remove(_shot.begin(), _shot.end(), this->_toDeleteShot[i]), _shot.end());
	}
	this->_toDeleteShot.clear();


}

UIObjects * GameBoard::getUI()
{
	return this->_UI;
}

