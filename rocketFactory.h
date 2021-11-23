#ifndef ROCKETFACTORY_H
#define ROCKETFACTORY_H

#include "rocket.h"

class rocketFactory {
public:
	virtual rocket* createRocket() = 0;
};

#endif
