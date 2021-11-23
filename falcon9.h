#ifndef FALCON9_H
#define FALCON9_H

#include "falcon.h"
#include <iostream>

using namespace std;

class falcon9 : public falcon
{
public:
	falcon9();
	void launch();
	void testEngines();
};

#endif

