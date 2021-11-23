#ifndef MERLINENGINE_H
#define MERLINENGINE_H

#include "Engines.h"

using namespace std;

class merlinEngine : public Engines
{
public:
	merlinEngine();
	~merlinEngine();
	bool ignite();
private:
	int power;
};

#endif