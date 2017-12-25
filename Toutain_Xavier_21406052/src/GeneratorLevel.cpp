#include "GeneratorLevel.h"



GeneratorLevel::GeneratorLevel()
{
}


GeneratorLevel::~GeneratorLevel()
{
}

void GeneratorLevel::LancerVague(int i)
{
	switch (i)
	{
	case 0: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, (( static_cast <float> (rand()) / static_cast <float> (RAND_MAX))* 2 ) -1 , 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		break;
	}
	case 1: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		break;

	}
	case 2: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.4f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		break;
	}
	case 3: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.4, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.5, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.4, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.5, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		break;
	}
	
	case 4: {
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.0F, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(5.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(6.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(7.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 5: {
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(6.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(7.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 6: {
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));


		break;
	}
	case 7: {
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 8: {
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 9: {
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 10: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));

		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.3f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 11: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.3f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		break;
	}
	case 12: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		
		break;
	}
	case 13: {

		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.20f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));

		break;
	}
	case 14: {
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(3.5f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		break;
	}
	case 15: {
		//big mac
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.1f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(4.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(3.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new BigAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new FastAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.1f, 0.1f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.0f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.2f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.7f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(1.4f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		GameBoard::instance->asteroidAdd(new NormalAsteroid(2.4f, ((static_cast <float> (rand()) / static_cast <float> (RAND_MAX)) * 2) - 1, 0.2f, 0.2f));
		break;
	}
	default:
		break;
	}

}
