#include "Engines.h"
#include <iostream>

using namespace std;

Engines::Engines()
{

}

Engines::~Engines()
{

}

bool Engines::ignite()
{
	cout << "Engine has been ignited!" << endl;
	return true;
}