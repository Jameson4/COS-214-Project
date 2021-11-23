#include "DragonSpaceCraftFactory.h"
#include "DragonSpaceCraft.h"

using namespace std;

DragonSpaceCraftFactory::DragonSpaceCraftFactory()
{

}

SpaceCraft* DragonSpaceCraftFactory::createSpaceCraft()
{
	return new DragonSpaceCraft();
}