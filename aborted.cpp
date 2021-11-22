#include "aborted.h"

using namespace std;

void aborted::changeState(string s)
{
    if(rocketState::getState() == "Rocket has been launched")
    {
        rocketState::changeState(s);
    }
    else
    {
        cout << "Rocket has yet been launched!" << endl;   
    }
}

string aborted::getState()
{
    return "The rocket has been launched";
}
