#ifndef STARLINKSATELITE_H
#define STARLINKSATELITE_H
#include "Starlink.h"
#include "rocketState.h"
using namespace std;

class StarlinkSatelite : public Starlink {  // Concrete Subject
   private:
    rocketState* state;

   public:
    StarlinkSatelite();
    ~StarlinkSatelite();
    rocketState* getState();
    void setState(rocketState*);
};
#endif