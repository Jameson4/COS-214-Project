#include "landing.h"

using namespace std;

void landing::changeState(string s)
{
    if(rocketState::getState() == "Rocket has been launched")
    {
        rocketState::changeState(s);
    }
    else
    {
        cout << "Rocket launch has either been aborted or has not launched yet!" << endl;
    }
}

string landing::getState()
{
    return "Rocket is busy landing.";
}
