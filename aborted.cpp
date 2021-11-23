#include "aborted.h"

using namespace std;

void aborted::changeState(string s)
{
    rocketState::changeState(s);
}

string aborted::getState()
{
    return "The rocket launch has been aborted.";
}
