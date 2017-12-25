#pragma once
#include "glfw3.h"

class WindowsManager
{
public:
	WindowsManager();
	~WindowsManager();
	GLFWwindow* Create_window(const int h,const int w, const char* name);
	GLFWwindow * CreateFullScreen_window(const int h, const int w, const char * name);
	GLFWscrollfun addZoomHandler(GLFWwindow * window, GLFWscrollfun callback);
	GLFWkeyfun addKeyboardHandler(GLFWwindow * window, GLFWkeyfun callback);
	GLFWcursorposfun addMouseMotionCallBack(GLFWwindow * window, GLFWcursorposfun callback);
	GLFWmousebuttonfun addMouseHandler(GLFWwindow * window, GLFWmousebuttonfun callback);
	GLFWwindow* Create_window(const char * name);
private:	
	bool _state;
};



/*
//ControlEngineBase
void KeyboardCallback(unsigned char key, int x, int y) {
	Engine::crtE_->KeyboardCallback(key, x, y);
}

void KeyboardReleaseCallback(unsigned char key, int x, int y) {
	Engine::crtE_->KeyboardReleaseCallback(key, x, y);
}

void specialCallback(int key, int x, int y) {
	Engine::crtE_->specialCallback(key, x, y);
}


void MouseCallback(int button, int state, int x, int y) {
	Engine::crtE_->MouseCallback(button, state, x, y);
}

void MotionCallback(int x, int y) {
	Engine::crtE_->MotionCallback(x, y);
}

void PassiveMotionCallback(int x, int y) {
	Engine::crtE_->PassiveMotionCallback(x, y);
}

void MouseEntry(int state) {
	Engine::crtE_->MouseEntry(state);
}


void JoystickCallback(unsigned int state,
	int x, int y, int z) {
	Engine::crtE_->JoystickCallback(state, x, y, z);
}

void Engine::controlBoot() {
	glutKeyboardFunc(KeyboardCallback);
	glutKeyboardUpFunc(KeyboardReleaseCallback);
	glutSpecialFunc(specialCallback);
	glutMouseFunc(MouseCallback);
	glutMotionFunc(MotionCallback);
	glutPassiveMotionFunc(PassiveMotionCallback);
	glutJoystickFunc(JoystickCallback, 25);
	glutEntryFunc(MouseEntry);
}

//GraphicEngineBase
void display() {

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
	Engine::grE_->Draw();
	glutSwapBuffers();
	// glDisable(GL_TEXTURE_2D);
	glEnable(GL_DEPTH_TEST); // Turn depth testing back on

	glMatrixMode(GL_PROJECTION);
	glPopMatrix(); // revert back to the matrix I had before.
	glMatrixMode(GL_MODELVIEW);
	glPopMatrix();
}

void ReshapeCallback(int width, int height) {
	glViewport(0, 0, width, height);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45, float(width) / float(height), 0.1, 100);
	glMatrixMode(GL_MODELVIEW);
	Engine::grE_->reshape(width, height);
}

void Engine::graphicBoot() {
	glutDisplayFunc(display);
	glutReshapeFunc(ReshapeCallback);
}

//GameEngineBase
void IdleCallback(void) {
	Engine::gmE_->idle();
	glutPostRedisplay();
}


void Engine::gameBoot() {
	glutIdleFunc(IdleCallback);
}


//Engine

Engine::Engine(int argc, char * argv[], int width, int height, char * title) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
	glutInitWindowSize(width, height);
	glutCreateWindow(title);

	//glutFullScreen();

	glClearColor(0.0, 0.0, 0.0, 0.0);

	//enable the base state
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_COLOR_MATERIAL);
	glEnable(GL_TEXTURE_2D);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

	//suppression de la repetitions des touche
	glutIgnoreKeyRepeat(true);

	controlBoot();
	graphicBoot();
	gameBoot();

}

void Engine::start() {
	glutMainLoop();
}

ControlEngineBase * Engine::crtE_ = new ControlEngineBase();
GameEngineBase * Engine::gmE_ = new GameEngineBase();
GraphicEngineBase * Engine::grE_ = new GraphicEngineBase();
*/