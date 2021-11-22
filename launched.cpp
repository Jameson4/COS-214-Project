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
        cout << "Rocket launch has been aborted or has already been launched!" << endl;
    }
}

string launched::getState()
{
    return "Rocket has been launched";
}
