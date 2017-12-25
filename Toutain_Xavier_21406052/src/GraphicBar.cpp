#include "GraphicBar.h"





GraphicBar::GraphicBar(float x, float y, float height, float width) {
	this->_box = new AABB(x, y, height, width);
	
}

GraphicBar::~GraphicBar()
{
	delete this->_box;
}

void GraphicBar::draw()
{
	
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(),this->_box->getfloatY() , this->_box->getfloatWidth(), this->_box->getfloatHeight(), 1.0f, 0.9f,0.9f);
	/*GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.05f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.9f, 0.9f, 0.9f, 0.9f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.1f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.8f, 0.8f, 0.8f, 0.8f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.15f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.7f, 0.7f, 0.7f, 0.7f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.2f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.6f, 0.6f, 0.6f, 0.6f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.25f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.5f, 0.5f, 0.5f, 0.5f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.3f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.4f, 0.4f, 0.4f, 0.4f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.35f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.3f, 0.3f, 0.3f, 0.3f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.45f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.2f, 0.2f, 0.2f, 0.2f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.5f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.1f, 0.1f, 0.1f, 0.1f); */
	
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.075f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.85f, 0.90f, 0.90f, 0.90f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.125f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.75f, 0.85f, 0.85f, 0.85f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.175f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.65f, 0.80f, 0.80f, 0.80f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.225f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.55f, 0.75f, 0.75f, 0.75f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.275f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.45f, 0.70f, 0.70f, 0.70f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.325f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.35f, 0.65f, 0.65f, 0.65f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.375f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.25f, 0.50f, 0.50f, 0.50f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.425f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.15f, 0.45f, 0.45f, 0.45f);
	GraphicPrimitives2::drawFillRect2D(this->_box->getfloatX(), this->_box->getfloatY() + this->_box->getfloatHeight() * 0.475f, this->_box->getfloatWidth(), this->_box->getfloatHeight() * 0.05f, 0.40f, 0.40f, 0.40f);

}

bool GraphicBar::clickInside(float x, float y)
{
	return this->_box->collisionPointAABB(x, y, *(this->_box));
}

void GraphicBar::perfomClick()
{
}
