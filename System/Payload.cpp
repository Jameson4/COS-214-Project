#include "Payload.h"
#include <iostream>

using namespace std;

Payload::Payload()
{
	engine = new vacuumEngine();
}

Payload::~Payload()
{

}

void Payload::setWeight(double w)
{
	weight = w;
}

double Payload::getWeight()
{
	return weight;
}

void Payload::setDescription(string d)
{
	desc = d;
}

string Payload::getDescription()
{
	return desc;
}

void Payload::launch()
{
	engine->ignite();
}