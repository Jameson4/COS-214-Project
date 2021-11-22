#ifndef LANDED_H
#define LANDED_H

#include "rocketState.h"
#include <iostream>

using namespace std;

class landed : public rocketState
{
    public:
        void changeState(string);
        string getState();
};

#endif
