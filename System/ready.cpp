#include "ready.h"

using namespace std;

void ready::changeState(string s)
{
    rocketState::changeState(s);
}

string ready::getState()
{
    return "Rocket is ready to be launched.";
}
