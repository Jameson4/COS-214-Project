#include "Starlink.h"

#include <iostream>
using namespace std;

Starlink::Starlink() {}

Starlink::~Starlink() {}

void Starlink::attach(StarlinkSatelite* c) { sate.push_back(c); };

void Starlink::detach(StarlinkSatelite* c) {
    for (vector<StarlinkSatelite*>::iterator it = sate.begin();
         it != sate.end(); ++it) {
        if (*it == c) {
            sate.erase(it);
            break;
        }
    }
}

void Starlink::notify() {
    for (vector<StarlinkSatelite*>::iterator it = sate.begin();
         it != sate.end(); ++it)
        (*it)->update();
}