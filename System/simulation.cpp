#include <iostream>
#include "rocketState.h"
#include "ready.h"
#include "falcon9Factory.h"
#include "falconHeavyFactory.h"

using namespace std;

int main()
{
    falcon9Factory* test = new falcon9Factory();
    falcon9* tester = test->createRocket();
    tester->launch();

    cout << endl;

    falconHeavyFactory* heavy = new falconHeavyFactory();
    falconHeavy* Heavy = heavy->createRocket();
    Heavy->launch();
}
