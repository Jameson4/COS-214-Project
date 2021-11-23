#include "StaticFireTest.h"

#include <iostream>

using namespace std;

StaticFireTest::StaticFireTest()
{

}

bool StaticFireTest::EngineTest(Engines* engine)
{
	if(engine->ignite())
	{
		cout << "Engine is ready!" << endl;
		return true;
	}
	else
	{
		cout << "Engine is not ready for use!" << endl;
		return false;
	}
}