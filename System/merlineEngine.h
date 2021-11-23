#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engines.h"

using namespace std;

class merlineEngine : public Engines
{
public:
	merlineEngine();
	~merlineEngine();
	bool ignite();
private:
	int power;
};

#endif