#include "rocket.h"
#include <iostream>
#include <sstream>

rocket::rocket(string type) {
	this->type = type;
	this->id = this->id + 1;
	stage = new stageOne();
	state = new rocketState();
}

string rocket::getDescription() {
	return +"Rocket ID: " + to_string(this->id) + "\nType: " + this->type;
}

void rocket::setPayload(Payload* p)
{
	payload = p;
}

void rocket::setCores(Falcon9Core* core)
{
	cores = core;
}

void rocket::launch()
{
	if(state->getState() == "Rocket is ready to be launched.")
	{
		setState(new launched());
		if(stage->getStage() == "Stage One.")
		{
			cores->igniteEngines();
		}
		else
		{
			payload->launch();
		}
	}
	else
	{
		cout << "Rocket is not ready to be launched!" << endl;
	}
}

void rocket::setState(rocketState* s)
{
	state = s;
}

void rocket::setStage(rocketStage* s)
{
	stage = s;
}

void rocket::testEngines()
{
	cores->testEngines();
}
