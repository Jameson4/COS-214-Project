#include "falconHeavyFactory.h"

using namespace std;

falconHeavy* falconHeavyFactory::createRocket()
{
	return new falconHeavy();
}
