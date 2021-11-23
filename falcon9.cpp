#include "falcon9.h"
#include <iostream>

using namespace std;

falcon9::falcon9():falcon("9")
{
  falcon::setCores(new Falcon9Core());
  falcon::setPayload(new Payload());
}

void falcon9::launch()
{
  falcon::launch();
}

void falcon9::testEngines()
{
  falcon::testEngines();
}
