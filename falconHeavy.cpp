#include "falconHeavy.h"

using namespace std;

falconHeavy::falconHeavy():falcon("Heavy")
{
  Falcon9Core* main = new Falcon9Core();
  main->add(new Falcon9Core());
  main->add(new Falcon9Core());
  falcon::setCores(main);
  falcon::setPayload(new Payload());
}

void falconHeavy::launch()
{
  falcon::launch();
}
