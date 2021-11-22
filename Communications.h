#ifndef COMMUNICATIONS_H
#define COMMUNICATIONS_H
#include "Starlink.h"
using namespace std;

class Communications {  // Observer
   protected:
    Starlink* connection;

   public:
    Communications();
    ~Communications();
    virtual void update() = 0;
    void connectToStarlink(Starlink*);
};
#endif