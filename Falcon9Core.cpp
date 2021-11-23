#include "Falcon9Core.h"
#include "merlinEngine.h"
#include <iostream>

using namespace std;

Falcon9Core::Falcon9Core()
{
	next = NULL;
	for(int x = 0;x < 9;x++)
	{
		engines.push_back(new merlinEngine());
	}
	test = new StaticFireTest();

}

Falcon9Core::~Falcon9Core()
{
	engines.clear();
}

void Falcon9Core::add(Falcon9Core* newFalcon)
{
	if(next)
	{
		next->add(newFalcon);
	}
	else
	{
		next = newFalcon;
	}
}

void Falcon9Core::igniteEngines()
{
	for(int x = 0;x < 9;x++)
	{
		cout << "#" << x << " ";
		engines.at(x)->ignite();
	}
	if(next)
	{
		next->igniteEngines();
	}
}

void Falcon9Core::testEngines()
{
	for(int x = 0;x < 9;x++)
	{
		cout << "#" << x << " ";
		test->EngineTest(engines.at(x));
	}
	if(next)
	{
		next->testEngines();
	}
}