#ifndef LASERS_H
#define LASERS_H
#include "Communications.h"
using namespace std;

class Lasers : public Communications {
   public:
    Lasers();
    ~Lasers();
    void update();
};

#endif