#ifndef VACUUMENGINE_H
#define VACUUMENGINE_H

#include "Engines.h"

using namespace std;

class vacuumEngine : public Engines
{
public:
	vacuumEngine();
	~vacuumEngine();
	bool ignite();
private:
	int power;
};

#endif