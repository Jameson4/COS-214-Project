#ifndef FALCON9CORE_H
#define FALCON9CORE_H

#include <iostream>
#include <vector>
#include "Engines.h"
#include "StaticFireTest.h"

using namespace std;

class Falcon9Core
{
public:
	Falcon9Core();
	~Falcon9Core();
	void add(Falcon9Core*);
	void igniteEngines();
	void testEngines();
private:
	vector<Engines*> engines;
	Falcon9Core* next;
	StaticFireTest* test;
};

#endif