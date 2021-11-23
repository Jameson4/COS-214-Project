#ifndef ABORTED_H
#define ABORTED_H

#include "rocketState.h"
#include <iostream>

using namespace std;

class aborted : public rocketState
{
    public:
        void changeState(string);
        string getState();
};

#endif
