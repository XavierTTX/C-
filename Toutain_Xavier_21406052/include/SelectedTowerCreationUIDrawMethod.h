
#include "DrawMethod.h"
class SelectedTowerCreationUIDrawMethod :
	public DrawMethod
{
public:
	SelectedTowerCreationUIDrawMethod(const char * text, const char* price);
	~SelectedTowerCreationUIDrawMethod();

	void draw(float x, float y, float height, float width);

protected:
	const char* _text;
	const char* _price;
};
