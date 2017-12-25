#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include "glfw3.h"
#include "WindowsManager.h"
#include "GameBoard.h"
#include "WorldGLConverter.h"
#include "DrawSelctedCaseMethod.h"
#include "UIObjects.h"
#include "GraphicBar.h"
#include <vector>
#include <map>
#include "CheapTower.h"
#include "Cadre.h"
#include "NormalAsteroid.h"
#include "Player.h"
#include "CheapTowerCreationUI.h"
#include "TowerCreationUI.h"
#include "MoneyUI.h"
#include "LifeUI.h"
#include "UpgradeDamageUI.h"
#include "UpgradeFireRateUI.h"
#include "BigShotTowerCreationUI.h"
#include "SplitShotTowerCreationUI.h"
#include <ctime>
#include "GeneratorLevel.h"

#define HEIGHT 600
#define WIDTH 700
#define TOP 25
#define DEPTH 5


static UIObjects* mb = nullptr;


void mouse_button_callback(GLFWwindow* window, int button, int action, int mods)
{
	if (button == GLFW_MOUSE_BUTTON_LEFT && action == GLFW_PRESS) {
		GameBoardPieces* sltd = GameBoard::instance->instance->instance->getSelected();
		vector <UIObject*> ::iterator i = GameBoard::instance->getUI()->getContextualWindows()->begin();
		double intX;
		double intY;
		glfwGetCursorPos(window, &intX, &intY);
		WorldGLConverter a = WorldGLConverter();

		for (i; i != GameBoard::instance->getUI()->getContextualWindows()->end(); ++i) {
			if ((*i)->clickInside(-1 + (a << (int)intX) * 2, -1 * (-1 + (a < (int)intY) * 2))) {
				if (GameBoard::instance->getPlayer()->getMoney() >= ((TowerCreationUI*)(*i))->getPrix()) {
					(*i)->perfomClick();
					GameBoard::instance->getPlayer()->setMoney(GameBoard::instance->getPlayer()->getMoney() - ((TowerCreationUI*)(*i))->getPrix());
					GameBoard::instance->getUI()->clear();
				}
				return;
			}
		}
		if (sltd != nullptr) {
			GameBoard::instance->getUI()->clear();
			if (sltd->getTower() == nullptr) {

				GameBoard::instance->getUI()->addContextualItem(new CheapTowerCreationUI("Cheap Tower", sltd->getAABB()->getfloatX() - sltd->getAABB()->getfloatWidth(), sltd->getAABB()->getfloatY() + sltd->getAABB()->getfloatHeight() / 4, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd, 40));
				GameBoard::instance->getUI()->addContextualItem(new BigShotTowerCreationUI("Big Shot Tower", sltd->getAABB()->getfloatX() - sltd->getAABB()->getfloatWidth() * 0.75f / 3, sltd->getAABB()->getfloatY() + sltd->getAABB()->getfloatHeight() * 0.8f, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd, 80));
				GameBoard::instance->getUI()->addContextualItem(new SplitShotTowerCreationUI("Split Tower", sltd->getAABB()->getfloatX() - sltd->getAABB()->getfloatWidth() * 0.75f / 3, sltd->getAABB()->getfloatY() - sltd->getAABB()->getfloatHeight() * 0.3f, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd, 90));
				//GameBoard::instance->getUI()->addContextualItem(new CheapTowerCreationUI("Cheap Tower", sltd->getAABB()->getfloatX() + sltd->getAABB()->getfloatWidth() * 0.55f, sltd->getAABB()->getfloatY() + sltd->getAABB()->getfloatHeight() / 4, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd,140));
			}
			else {
				GameBoard::instance->getUI()->addContextualItem(new UpgradeDamageUI("Damage Augm", sltd->getAABB()->getfloatX() - sltd->getAABB()->getfloatWidth(), sltd->getAABB()->getfloatY() + sltd->getAABB()->getfloatHeight() / 4, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd->getTower(), 50));
				GameBoard::instance->getUI()->addContextualItem(new UpgradeFireRateUI("Fire Rate Augm", sltd->getAABB()->getfloatX() + sltd->getAABB()->getfloatWidth() * 0.55f, sltd->getAABB()->getfloatY() + sltd->getAABB()->getfloatHeight() / 4, sltd->getAABB()->getfloatWidth()* 1.5f, sltd->getAABB()->getfloatHeight()* 0.5f, sltd->getTower(), 50));

			}
		}
		else {
			GameBoard::instance->getUI()->clear();
		}

	}
}



void mouseMove(GLFWwindow* w, double x, double y) {
	WorldGLConverter a = WorldGLConverter();
	GameBoardPieces*** Gb = GameBoard::instance->getBoard();
	vector <UIObject*> ::iterator i = GameBoard::instance->getUI()->getContextualWindows()->begin();
	for (i; i != GameBoard::instance->getUI()->getContextualWindows()->end(); ++i) {
		if (GameBoard::instance->getPlayer()->getMoney() < ((TowerCreationUI*)(*i))->getPrix()) {
			((TowerCreationUI*)(*i))->setNoMoneyDM();
		}
		else {
			if ((*i)->clickInside(-1 + (a << (int)x) * 2, -1 * (-1 + (a < (int)y) * 2))) {
				((TowerCreationUI*)(*i))->setSeletedDM();
			}
			else {
				((TowerCreationUI*)(*i))->setStandardDM();
			}
		}
	}
	y = -1 * ((y + DEPTH) - (HEIGHT));
	int xt = (int)((x - DEPTH) / (WIDTH / 2 * Gb[0][0]->getAABB()->getfloatWidth()));
	int yt = (int)((y) / (HEIGHT / 2 * Gb[0][0]->getAABB()->getfloatHeight()));
	GameBoardPieces* sltd = GameBoard::instance->instance->instance->getSelected();
	if (xt < GameBoard::instance->getCase() && yt < GameBoard::instance->getLine()) {
		if (sltd != Gb[yt][xt]) {
			if (sltd != nullptr) {
				sltd->setDrawMethod((DrawMethod*)GameBoard::instance->getStandardDM());
			}
			GameBoard::instance->setSelected(Gb[yt][xt]);
			Gb[yt][xt]->setDrawMethod(new DrawSelctedCaseMethod());
		}
	}
	else {
		if (sltd != nullptr) {
			sltd->setDrawMethod((DrawMethod*)GameBoard::instance->getStandardDM());
		}
		GameBoard::instance->setSelected(nullptr);
	}
}


int main(int argv, char* argc) {
	char _cround[8 + 4];
	strcpy(_cround, "round = ");
	_itoa(0, (_cround + 8), 10);
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	GeneratorLevel lG = GeneratorLevel();
	WindowsManager* manager = new WindowsManager();
	GLFWwindow* win = manager->Create_window(HEIGHT, WIDTH, "Engine.lib");
	WorldGLConverter a = WorldGLConverter();
	a.init(WIDTH, WIDTH, TOP, DEPTH);
	WorldGLConverter::WindowHeight = HEIGHT;
	WorldGLConverter::WindowWidth = WIDTH;
	WorldGLConverter::WindowTopBorder = TOP;
	WorldGLConverter::WindowDepth = DEPTH;
	Player* player = new Player(100, 300);
	mb = new UIObjects();
	mb->addItem(new GraphicBar(-1.0f, 1 - (a < TOP) * 2, (a < TOP) * 2, (a << WIDTH) * 2));
	mb->addItem(new Cadre(a < DEPTH * 2, (a << DEPTH) * 2, -1.0f, 1 - (a < TOP) * 2 - ((a < DEPTH) * 2), (a < HEIGHT - TOP) * 2, (a << WIDTH) * 2));//(a < TOP) * 2
	mb->addItem(new MoneyUI(70, -1.0f, 1 - (a < TOP) * 2, (a < TOP) * 2, 0.1));
	mb->addItem(new LifeUI(100, -1.0f + ((a < TOP) * 2) * 3, 1 - (a < TOP) * 2, (a < TOP) * 2, 0.1));

	GameBoard* Gb = new GameBoard(10, 5, player, mb);
	/* Make the window's context current */
	glfwMakeContextCurrent(win);
	manager->addMouseMotionCallBack(win, mouseMove);
	manager->addMouseHandler(win, mouse_button_callback);
	//NormalAsteroid* ast = new NormalAsteroid(1, 0, 0.2f, 0.2f);
	//Gb->asteroidAdd(ast);

	double tr = 0.01;
	double starttime = glfwGetTime();
	printf("%ld", starttime);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(win)) {
		if (player->getLife() < 0) {
			glMatrixMode(GL_PROJECTION);
			glPushMatrix(); // save
			glLoadIdentity();// and clear
			glMatrixMode(GL_MODELVIEW);
			glPushMatrix();
			glLoadIdentity();

			glDisable(GL_DEPTH_TEST); // also disable the depth test so renders on top


			glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
			glMatrixMode(GL_MODELVIEW);
			glLoadIdentity();

			GraphicPrimitives2::drawText2D("YOU LOSE", 0, 0, 1.0f, 1.0f, 1.0f);


			/* Swap front and back buffers */
			glfwSwapBuffers(win);

			//end of GP fct
			glEnable(GL_DEPTH_TEST); // Turn depth testing back on

			glMatrixMode(GL_PROJECTION);
			glPopMatrix(); // revert back to the matrix I had before.
			glMatrixMode(GL_MODELVIEW);
			glPopMatrix();
			//
			/* Poll for and process events */
			glfwPollEvents();
		}
		else if (lG._vague > 15) {
			if (player->getLife() < 0) {
				glMatrixMode(GL_PROJECTION);
				glPushMatrix(); // save
				glLoadIdentity();// and clear
				glMatrixMode(GL_MODELVIEW);
				glPushMatrix();
				glLoadIdentity();

				glDisable(GL_DEPTH_TEST); // also disable the depth test so renders on top


				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();

				GraphicPrimitives2::drawText2D("YOU Win", 0, 0, 1.0f, 1.0f, 1.0f);


				/* Swap front and back buffers */
				glfwSwapBuffers(win);

				//end of GP fct
				glEnable(GL_DEPTH_TEST); // Turn depth testing back on

				glMatrixMode(GL_PROJECTION);
				glPopMatrix(); // revert back to the matrix I had before.
				glMatrixMode(GL_MODELVIEW);
				glPopMatrix();
				//
				/* Poll for and process events */
				glfwPollEvents();
			}
		}
		else {
			if (glfwGetTime() - starttime > tr)
			{
				starttime = glfwGetTime();

				if (Gb->GetAsteroids()->size() == 0) {
					lG.LancerVague(lG._vague++);
				}

				glMatrixMode(GL_PROJECTION);
				glPushMatrix(); // save
				glLoadIdentity();// and clear
				glMatrixMode(GL_MODELVIEW);
				glPushMatrix();
				glLoadIdentity();

				glDisable(GL_DEPTH_TEST); // also disable the depth test so renders on top

				glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
				glMatrixMode(GL_MODELVIEW);
				glLoadIdentity();

				Gb->draw();
				for (int i = 0; i < Gb->getShot()->size(); i++) {
					(*(Gb->getShot()))[i]->draw();
					(*(Gb->getShot()))[i]->act();
				}
				for (int i = 0; i < Gb->GetAsteroids()->size(); i++) {
					(*(Gb->GetAsteroids()))[i]->draw();
					(*(Gb->GetAsteroids()))[i]->act();
				}

				Gb->clearGame();
				mb->draw();
				strcpy(_cround, "round = ");
				_itoa(lG._vague, (_cround + 8), 10);
				GraphicPrimitives2::drawText2D(_cround, 0.5f, 1 - (a < TOP) * 2, 0, 0, 0);

				/* Swap front and back buffers */
				glfwSwapBuffers(win);

				//end of GP fct
				glEnable(GL_DEPTH_TEST); // Turn depth testing back on

				glMatrixMode(GL_PROJECTION);
				glPopMatrix(); // revert back to the matrix I had before.
				glMatrixMode(GL_MODELVIEW);
				glPopMatrix();
				//
				/* Poll for and process events */
				glfwPollEvents();
			}

		}
	}
	return 1;

}

