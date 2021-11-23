#ifndef ROCKETSTATE_H
#define ROCKETSTATE_H

#include <iostream>

using namespace std;

class rocketState
{
    public:
        rocketState();
        virtual void changeState(string);
        virtual string getState();
    private:
        string state;
};

#endif
