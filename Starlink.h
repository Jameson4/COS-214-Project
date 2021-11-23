#ifndef STARLINK_H
#define STARLINK_H
#include <string>
#include <vector>

#include "StarlinkSatelite.h"
using namespace std;

class StarlinkSatelite;

class Starlink {  // Subject
   private:
    vector<StarlinkSatelite *> sate;

   public:
    Starlink();
    ~Starlink();
    void attach(StarlinkSatelite *);
    void detach(StarlinkSatelite *);
    void notify();
};

#endif