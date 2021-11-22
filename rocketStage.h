#ifndef ROCKETSTAGE_H
#define ROCKETSTAGE_H

#include <iostream>

using namespace std;

//strategy participant

class rocketStage {
public:
    virtual string stage() = 0;
};

#endif