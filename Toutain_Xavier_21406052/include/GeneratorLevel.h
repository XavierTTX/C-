#pragma once
#include "GameBoard.h"
#include "BigAsteroid.h"
#include "FastAsteroid.h"
#include "NormalAsteroid.h"
class GeneratorLevel
{
	public:
		GeneratorLevel();
		~GeneratorLevel();
		//Les niveaux sont coder en dur .
		void LancerVague(int i);		
		int _vague = 0;
};

