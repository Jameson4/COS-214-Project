#include "launched.h"

using namespace std;

void launched::changeState(string s)
{
    rocketState::changeState(s);
}

string launched::getState()
{
    return "Rocket has been launched";
}