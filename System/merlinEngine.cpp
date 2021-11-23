#include "merlinEngine.h"
#include <iostream>

using namespace std;

merlinEngine::merlinEngine()
{
	power = 100;
}

merlinEngine::~merlinEngine()
{

}

bool merlinEngine::ignite()
{
	cout << "Merlin Engine has been ignited!" << endl;
	return true;
}