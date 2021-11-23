#include "Satelite.h"

#include <iostream>
using namespace std;

Satelite::Satelite() : connection(nullptr) {}

Satelite::~Satelite() {}

void Satelite::connect(Communications* s) { connection = s; }

void Satelite::update() {
    if (connection == nullptr) {
        cout << "No connection to a Communications line has been established."
             << endl;
    } else {
        observerState = connection->getState();
        switch (observerState) {
            case 0:
                cout << "Starlink is not currently communicating." << endl;
                connection->setState(1);
                break;
            case 1:
                cout << "Starlink is currently communicating with other "
                        "starlinks."
                     << endl;
                connection->setState(2);
                break;
            case 2:
                cout << "Starlink is currently communicating with users on "
                        "Earth."
                     << endl;
                connection->setState(0);
                break;
            default:
                break;
        }
    }
}