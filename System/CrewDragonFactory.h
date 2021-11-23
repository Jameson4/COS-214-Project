#ifndef CREWDRAGONFACTORY_H
#define CREWDRAGONFACTORY_H

#include "SpaceCraftFactory.h"

using namespace std;

class CrewDragonFactory : public SpaceCraftFactory
{
public:
	CrewDragonFactory();
	SpaceCraft* createSpaceCraft();
};

#endif