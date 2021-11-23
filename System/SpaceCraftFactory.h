#ifndef SPACECRAFTFACTORY_H
#define SPACECRAFTFACTORY_H

#include <iostream>
#include "SpaceCraft.h"

using namespace std;

class SpaceCraftFactory
{
public:
	SpaceCraftFactory();
	virtual SpaceCraft* createSpaceCraft() = 0;
};

#endif