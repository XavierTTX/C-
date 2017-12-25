#pragma once
#include "GraphicItem.h"
#include <vector>
#include "UIObject.h"
using namespace std;

class UIObjects :
	public GraphicItem
{
public:
	UIObjects();
	~UIObjects();
	virtual void draw();
	void addItem(UIObject* item);
	void addContextualItem(UIObject* item);
	vector<UIObject*>* getUI();
	vector<UIObject*>* getContextualWindows();
	void clear();

private:

	vector<UIObject*> UIItems;
	vector<UIObject*> UIContextualItems;


};

