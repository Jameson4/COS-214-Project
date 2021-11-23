#ifndef READY_H
#define READY_H

#include <iostream>
#include "rocketState.h"

using namespace std;

class ready : public rocketState
{
    public:
        void changeState(string);
        string getState();
};

#endif
