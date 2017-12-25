#pragma once
#include "GraphicPrimitives2.h"
class GraphicItem
{
public:
	
	GraphicItem();

	virtual ~GraphicItem();
	virtual void draw() = 0;
};

