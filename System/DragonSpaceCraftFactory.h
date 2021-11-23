#ifndef DRAGONSPACECRAFTFACTORY_H
#define DRAGONSPACECRAFTFACTORY_H

#include "SpaceCraftFactory.h"

using namespace std;

class DragonSpaceCraftFactory:public SpaceCraftFactory
{
public:
	DragonSpaceCraftFactory();
	SpaceCraft* createSpaceCraft();
};

#endif