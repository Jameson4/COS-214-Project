#ifndef ROCKET_H
#define ROCKET_H

#include "Payload.h"
#include "Falcon9Core.h"
#include "rocketState.h"
#include "rocketStage.h"
#include "launched.h"
#include "stageOne.h"
#include <iostream>

using namespace std;

class rocket {
private:
	rocketState* state;
	rocketStage* stage;
	string type;
	double price;
	int id;
	Payload* payload;
	Falcon9Core* cores;
public:
	rocket(string type);
	virtual string getDescription();
	void setPayload(Payload*);
	void setCores(Falcon9Core*);
	void launch();
	void setState(rocketState*);
	void setStage(rocketStage*);
	void testEngines();
};

#endif
