#include "rocketState.h"

using namespace std;

rocketState::rocketState()
{
    state = "Rocket is ready to be launched.";
}

void rocketState::changeState(string s)
{
    state = s;
}

string rocketState::getState()
{
    return state;
}