#include "SpaceCraft.h"

using namespace std;

SpaceCraft::SpaceCraft()
{
	humans = 0;
	cargo = 0;
}

void SpaceCraft::setHumans(Humans* h)
{
	humans = h;
}

Humans* SpaceCraft::getHumans()
{
	return humans;
}

void SpaceCraft::setCargo(Cargo* c)
{
	cargo = c;
}

Cargo* SpaceCraft::getCargo()
{
	return cargo;
}