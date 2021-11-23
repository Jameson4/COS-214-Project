#ifndef VACUUMENGINEFACTORY_H
#define VACUUMENGINEFACTORY_H

#include "EngineFactory.h"

class VacuumEngineFactory : public EngineFactory
{
public:
	VacuumEngineFactory();
	~VacuumEngineFactory();
	Engines* createEngine();
};

#endif