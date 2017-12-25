#include "SplitTower.h"
#include "TowerCreationUI.h"
class SplitShotTowerCreationUI :
	public TowerCreationUI
{
public:
	SplitShotTowerCreationUI(const char* text, float x, float y, float w, float h, GameBoardPieces * gb, int prix);
	~SplitShotTowerCreationUI();
	virtual void draw();
	virtual void createTower();
	virtual void perfomClick();
};
