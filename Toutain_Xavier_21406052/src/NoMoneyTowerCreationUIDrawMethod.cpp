#include "NoMoneyTowerCreationUIDrawMethod.h"
#define RED_OUTLINE 120.0f / 255.0f
#define BLUE_OUTLINE 10.0f / 255.0f 
#define GREEN_OUTLINE 10.0f / 255.0f 
#define RED_INLINE 148.0f / 255.0f
#define BLUE_INLINE 148.0f / 255.0f 
#define GREEN_INLINE 148.0f / 255.0f 


NoMoneyTowerCreationUIDrawMethod::NoMoneyTowerCreationUIDrawMethod(const char * text, const char* price)
{
	this->redOut = RED_OUTLINE;
	this->blueOut = BLUE_OUTLINE;
	this->greenOut = GREEN_OUTLINE;
	this->redIn = RED_INLINE;
	this->blueIn = BLUE_INLINE;
	this->greenIn = GREEN_INLINE;
	this->_text = text;
	this->_price = price;
}


NoMoneyTowerCreationUIDrawMethod::~NoMoneyTowerCreationUIDrawMethod()
{
}

void NoMoneyTowerCreationUIDrawMethod::draw(float x, float y, float height, float width)
{
	GraphicPrimitives2::drawFillRect2D(x, y, width, height, this->redOut, this->greenOut, this->blueOut);
	GraphicPrimitives2::drawOutlinedRect2D(x, y, width, height, this->redIn, this->greenIn, this->blueIn);
	GraphicPrimitives2::drawText2D((char *)this->_text, x + width * 0.1f, y + height * 0.8f, 1.0f, 0.0f, 0);
	GraphicPrimitives2::drawText2D((char *)this->_price, x + width * 0.2f, y + height * 0.4f, 1.0f, 0.f, 0);
}
