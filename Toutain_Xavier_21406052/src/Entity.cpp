#include "Entity.h"


Entity::Entity(){
}

Entity::~Entity(){
}

AABB * Entity::getBox()
{
	return this->_box;
}

/*
int Entity::drawOutlinedRect2D(AABB & a, float r, float g, float b){

	GraphicPrimitives::drawOutlinedRect2D(a.getfloatX(), a.getfloatWidth(), a.getfloatWidth(), a.getfloatHeight(), r, g, b);
	
	return 1;
}
*/