#ifndef MERLINENGINEFACTORY_H
#define MERLINENGINEFACTORY_H

#include "EngineFactory.h"
#include "Engines.h"

using namespace std;

class MerlinEngineFactory : public EngineFactory
{
public:
	MerlinEngineFactory();
	~MerlinEngineFactory();
	Engines* createEngine();
};

#endif