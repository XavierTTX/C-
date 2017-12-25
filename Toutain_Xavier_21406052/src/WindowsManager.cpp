#include "WindowsManager.h"
#include "glfw3.h"



WindowsManager::WindowsManager() {	
	if (!glfwInit()) {
		this->_state = false;
	}
	else {
		this->_state = true;
	}
}


WindowsManager::~WindowsManager()
{
	glfwTerminate();
		
}

GLFWwindow*  WindowsManager::Create_window(const int h,const int w, const char* name){
	if (this->_state) { 
		return glfwCreateWindow(w, h, name, NULL, NULL);
		glClearColor(0.0, 0.0, 0.0, 0.0);

		//enable the base state
		glEnable(GL_DEPTH_TEST);
		glEnable(GL_COLOR_MATERIAL);
		glEnable(GL_TEXTURE_2D);
		glEnable(GL_BLEND);
		glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	}

	return nullptr;
}

GLFWwindow*  WindowsManager::CreateFullScreen_window(const int h, const int w, const char* name) {
	if (this->_state) {
		return glfwCreateWindow(h, w, name, glfwGetPrimaryMonitor(), NULL);
	}

	return nullptr;

}

GLFWscrollfun WindowsManager::addZoomHandler(GLFWwindow* window,GLFWscrollfun callback) {
	if(window != NULL)
		
		return glfwSetScrollCallback(window, callback);
	return NULL;
}

GLFWkeyfun WindowsManager::addKeyboardHandler(GLFWwindow* window,GLFWkeyfun callback) {
	if (window != NULL)
		
		return glfwSetKeyCallback(window, callback);
	return NULL;
}

GLFWcursorposfun WindowsManager::addMouseMotionCallBack(GLFWwindow* window, GLFWcursorposfun callback) {
	if (window != NULL)
		return glfwSetCursorPosCallback(window, callback);
	return NULL;
}
GLFWmousebuttonfun WindowsManager::addMouseHandler(GLFWwindow* window,GLFWmousebuttonfun callback) {
	if (window != NULL)
		return glfwSetMouseButtonCallback(window, callback);
	return NULL;
}

/*!
* Create a windows with 1000px width and 1000px height
* @name the name of the window
*
*/
GLFWwindow*  WindowsManager::Create_window(const char* name) {
	if (this->_state) {
		return glfwCreateWindow(1000,1000,name, NULL, NULL);
	}

	return nullptr;
}
