#ifndef FALCON9FACTORY_H
#define FALCON9FACTORY_H

#include "rocketFactory.h"
#include "falcon9.h"
#include <iostream>

using namespace std;

class falcon9Factory : public rocketFactory
{
public:
    falcon9* createRocket();
};

#endif
