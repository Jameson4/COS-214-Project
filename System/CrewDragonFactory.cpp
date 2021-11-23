#include "CrewDragonFactory.h"
#include "CrewDragon.h"

using namespace std;

CrewDragonFactory::CrewDragonFactory()
{

}

SpaceCraft* CrewDragonFactory::createSpaceCraft()
{
	return new CrewDragon();
}