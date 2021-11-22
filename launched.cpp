#include "launched.h"

using namespace std;

void launched::changeState(string s)
{   
    if(rocketState::getState() == "Rocket is ready to be launched.")
    {
        rocketState::changeState(s);
    }
    else
    {
        cout << "Rocket is not ready to be launched or has already been launched!" << endl;
    }
}

string launched::getState()
{
    return "Rocket has been launched";
}
