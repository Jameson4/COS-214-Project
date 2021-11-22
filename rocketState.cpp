#include "rocketState.h"

using namespace std;

void rocketState::changeState(string s)
{
    state = s;
}

string rocketState::getState()
{
    return state;
}