#include "VacuumEngineFactory.h"
#include "vacuumEngine.h"

#include <iostream>

using namespace std;

VacuumEngineFactory::VacuumEngineFactory()
{

}

VacuumEngineFactory::~VacuumEngineFactory()
{

}

Engines* VacuumEngineFactory::createEngine()
{
	cout << "New Vacuum Engine has been created!" << endl;
	return new vacuumEngine();
}