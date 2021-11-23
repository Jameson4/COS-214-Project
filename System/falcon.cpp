#include "falcon.h"

falcon::falcon(string model) : rocket("falcon") {

}

string falcon::getDescription() {
	return rocket::getDescription();
}

void falcon::setPayload(Payload* p)
{
	rocket::setPayload(p);
}

void falcon::setCores(Falcon9Core* core)
{
	rocket::setCores(core);
}

void falcon::launch()
{
	rocket::launch();
}

void falcon::testEngines()
{
	rocket::testEngines();
}