#include "landed.h"

using namespace std;

void landed::changeState(string s)
{
    if(rocektState::getSate() == "Rocket is busy landing.")
    {
        rocketState::changeState(getState());
    }
    else
    {
        cout << "Rocket is is not ready to land yet!" << endl;
    }
}

string getState()
{
    return "Rocekt has landed successfully!";
}
