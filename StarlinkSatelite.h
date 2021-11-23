#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H
#include "Starlink.h"
using namespace std;

class StarlinkSatelite {  // Observer
   public:
    StarlinkSatelite(){};
    ~StarlinkSatelite(){};
    virtual void update() = 0;
};
#endif