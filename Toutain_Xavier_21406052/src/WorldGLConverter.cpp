#include "WorldGLConverter.h"


int WorldGLConverter::WindowWidth = 0;
int WorldGLConverter::WindowHeight = 0;
int WorldGLConverter::WindowTopBorder = 0;
int WorldGLConverter::WindowDepth = 0;


WorldGLConverter::WorldGLConverter()
{
}


WorldGLConverter::~WorldGLConverter()
{
}

void WorldGLConverter::init(int x, int y,int top,int depth )
{
	WorldGLConverter::WindowHeight = y;
	WorldGLConverter::WindowWidth = x;
	WorldGLConverter::WindowTopBorder = top;
	WorldGLConverter::WindowDepth = depth;
}

float WorldGLConverter::operator<<(int x )
{
	//1 - window
    //y   x
	
	return (float)x / (float)this->WindowWidth;
}

float WorldGLConverter::operator<(int x)
{
	//1 - window
	//y   x
	return (float)x / (float) this->WindowHeight;
}

float WorldGLConverter::operator<<(float x)
{
	return (float)x /(float) this->WindowWidth;;
}

float WorldGLConverter::operator<(float x)
{
	return (float)x / (float)this->WindowHeight;;
}
