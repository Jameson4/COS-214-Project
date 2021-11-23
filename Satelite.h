#ifndef SATELITE_H
#define SATELITE_H

#include "Communications.h"
#include "StarlinkSatelite.h"
using namespace std;

class Satelite : public StarlinkSatelite {  // Concrete Observer
   private:
    Communications* connection;
    int observerState;

   public:
    Satelite();
    ~Satelite();
    void update();
    void connect(Communications*);
};
#endif