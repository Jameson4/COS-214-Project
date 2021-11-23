#ifndef FALCONHEAVYFACTORY_H
#define FALCONHEAVYFACTORY_H

#include "rocketFactory.h"
#include "falconHeavy.h"
#include <iostream>

using namespace std;

class falconHeavyFactory : public rocketFactory
{
public:
    falconHeavy* createRocket();
};

#endif
