#ifndef LAUNCHED_H
#define LAUNCHED_H

#include "rocketState.h"

class launched : public rocketState
{
    public:
        void changeState(string);
        string getState();  
};

#endif