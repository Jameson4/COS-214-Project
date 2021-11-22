#ifndef STARLINK_H
#define STARLINK_H
#include <string>
#include <vector>

#include "Communications.h"
using namespace std;

class Starlink {  // Subject
   private:
    vector<Communications *> comms;

   public:
    Starlink();
    ~Starlink();
    void attach(Communications *);
    void detach(Communications *);
    void notify();
};

#endif