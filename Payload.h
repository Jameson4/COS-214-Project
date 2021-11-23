#ifndef PAYLOAD_H
#define PAYLOAD_H

#include "vacuumEngine.h"

#include <iostream>

using namespace std;

class Payload
{
public:
	Payload();
	~Payload();
	void setWeight(double);
	double getWeight();
	void setDescription(string);
	string getDescription();
	void launch();
private:
	double weight;
	string desc;
	vacuumEngine* engine;
};

#endif