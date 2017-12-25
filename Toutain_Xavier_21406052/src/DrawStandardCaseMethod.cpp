#include "DrawStandardCaseMethod.h"
#define RED_OUTLINE 48.0f / 255.0f
#define BLUE_OUTLINE 48.0f / 255.0f 
#define GREEN_OUTLINE 48.0f / 255.0f 
#define RED_INLINE 148.0f / 255.0f
#define BLUE_INLINE 148.0f / 255.0f 
#define GREEN_INLINE 148.0f / 255.0f 


DrawStandardCaseMethod::DrawStandardCaseMethod()
{
	this->redOut = RED_OUTLINE;
	this->blueOut = BLUE_OUTLINE;
	this->greenOut = GREEN_OUTLINE;
	this->redIn = RED_INLINE;
	this->blueIn = BLUE_INLINE;
	this->greenIn = GREEN_INLINE;
}


DrawStandardCaseMethod::~DrawStandardCaseMethod()
{
}

void DrawStandardCaseMethod::draw(float x, float y, float height, float width)
{
	GraphicPrimitives2::drawFillRect2D(x, y, width, height, redOut, greenOut, blueOut);
	GraphicPrimitives2::drawOutlinedRect2D(x, y, width, height, redIn, greenIn, blueIn);
	GraphicPrimitives2::drawFillRect2D(x + width * 0.09f, y + height* 0.1f, width * 0.90f, height * 0.90f, redOut*1.1f, greenOut*1.1f, blueOut*1.1f);

	//printf("x = %f ,y = %f,h = %f,w = %f,r = %f, g = %f,b = %f \n", x, y, height, width, redOut, greenOut, blueOut);
	
}
