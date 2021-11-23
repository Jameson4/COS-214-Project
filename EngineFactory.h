#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#include "Engines.h"

using namespace std;

class EngineFactory
{
public:
	EngineFactory();
	~EngineFactory();
	virtual Engines* createEngine() = 0;	
};

#endif