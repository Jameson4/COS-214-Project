#include "MerlinEngineFactory.h"
#include "merlinEngine.h"
#include "Engines.h"

#include <iostream>

using namespace std;

MerlinEngineFactory::MerlinEngineFactory()
{

}

MerlinEngineFactory::~MerlinEngineFactory()
{

}

Engines* MerlinEngineFactory::createEngine()
{
	cout << "New Merlin Engine has been created!" << endl;
	return new merlinEngine();
}