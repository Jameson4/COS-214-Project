#ifndef SPACECRAFT_H
#define SPACECRAFT_H

#include "Humans.h"
#include "Cargo.h"

using namespace std;

class SpaceCraft
{
public:
	SpaceCraft();	
	void setHumans(Humans*);
	Humans* getHumans();
	void setCargo(Cargo*);
	Cargo* getCargo();
private:
	Humans* humans;
	Cargo* cargo;
};

#endif