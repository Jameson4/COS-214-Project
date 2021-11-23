#include "CrewDragon.h"

using namespace std;

CrewDragon::CrewDragon()
{
	SpaceCraft::setHumans(new Humans());
	SpaceCraft::setCargo(new Cargo());
}