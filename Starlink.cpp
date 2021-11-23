#include "Starlink.h"

#include <iostream>
using namespace std;

Starlink::Starlink() {}

Starlink::~Starlink() {}

void Starlink::attach(Communications* c) { comms.push_back(c); };

void Starlink::detach(Communications* c) {
    for (vector<Communications*>::iterator it = comms.begin();
         it != comms.end(); ++it) {
        if (*it == c) {
            comms.erase(it);
            break;
        }
    }
}

void Starlink::notify() {
    //for (vector<Communications*>::iterator it = comms.begin();it != comms.end(); ++it)
        //(*it)->update();
}