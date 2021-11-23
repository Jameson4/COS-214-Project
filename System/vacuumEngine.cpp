#include "vacuumEngine.h"
#include <iostream>

using namespace std;

vacuumEngine::vacuumEngine()
{
	power = 150;
}

vacuumEngine::~vacuumEngine()
{

}

bool vacuumEngine::ignite()
{
	cout << "The Vacuum Engine has been ignited!" << endl;
	return true;
}