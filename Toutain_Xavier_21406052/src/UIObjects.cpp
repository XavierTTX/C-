#include "UIObjects.h"



UIObjects::UIObjects()
{
}


UIObjects::~UIObjects()
{
}

void UIObjects::draw()
{
	vector <UIObject*> ::iterator i = this->UIItems.begin();
	for (i ; i != this->UIItems.end(); ++i) {
		(*i)->draw();
	}
	i = this->UIContextualItems.begin();
	for (i; i != this->UIContextualItems.end(); ++i) {
		(*i)->draw();
	}
}

void UIObjects::addItem(UIObject* item){
	this->UIItems.push_back(item);
}

void UIObjects::addContextualItem(UIObject * item)
{
	this->UIContextualItems.push_back(item);

}

vector<UIObject*>* UIObjects::getUI()
{
	return &(this->UIItems);
}

vector<UIObject*>* UIObjects::getContextualWindows()
{
	return &(this->UIContextualItems);
}

void UIObjects::clear()
{
	for (int i = 0; i < UIContextualItems.size(); i++) {
		delete UIContextualItems[i];
	}
	this->UIContextualItems.clear();
}
