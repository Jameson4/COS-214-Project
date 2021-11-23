#include "falcon9Factory.h"

using namespace std;

falcon9* falcon9Factory::createRocket()
{
	return new falcon9();
}
