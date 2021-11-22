#ifndef LANDING_H
#define LANDING_H

#include "rocketState.h"

using namespace std;

class landing : public rocketState
{
    public:
        void changeState(string);
        string getState();
};

#endif
