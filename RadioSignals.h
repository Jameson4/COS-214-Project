#ifndef RADIOSIGNALS_H
#define RADIOSIGNALS_H
#include "Communications.h"
using namespace std;

class RadioSignals : public Communications {
   public:
    RadioSignals();
    ~RadioSignals();
    void update();
};

#endif