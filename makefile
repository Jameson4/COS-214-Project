Race: launched.o aborted.o landing.o landed.o ready.o rocketState.o EngineFactory.o MerlinEngineFactory.o VacuumEngineFactory.o Engines.o merlinEngine.o vacuumEngine.o Payload.o Falcon9Core.o SpaceCraftFactory.o CrewDragonFactory.o DragonSpaceCraftFactory.o SpaceCraft.o CrewDragon.o DragonSpaceCraft.o falcon.o falcon9.o falcon9Factory.o falconHeavy.o falconHeavyFactory.o rocket.o rocketFactory.o rocketStage.o stageOne.o stageTwo.o StaticFireTest.o Starlink.o Satelite.o simulation.o
	g++ launched.o aborted.o landing.o landed.o ready.o rocketState.o EngineFactory.o MerlinEngineFactory.o VacuumEngineFactory.o Engines.o merlinEngine.o vacuumEngine.o Payload.o Falcon9Core.o SpaceCraftFactory.o CrewDragonFactory.o DragonSpaceCraftFactory.o SpaceCraft.o CrewDragon.o DragonSpaceCraft.o falcon.o falcon9.o falcon9Factory.o falconHeavy.o falconHeavyFactory.o rocket.o rocketFactory.o rocketStage.o stageOne.o stageTwo.o StaticFireTest.o Starlink.o Satelite.o simulation.o -o Create

Simulation.o: simulation.cpp launched.h aborted.h landing.h landed.h ready.h rocketState.h EngineFactory.h MerlinEngineFactory.h VacuumEngineFactory.h Engines.h merlinEngine.h vacuumEngine.h Payload.h Falcon9Core.h  SpaceCraftFactory.h CrewDragonFactory.h DragonSpaceCraftFactory.h SpaceCraft.h CrewDragon.h DragonSpaceCraft.h Cargo.h Humans.h falcon.h falcon9.h falcon9Factory.h falconHeavy.h falconHeavyFactory.h rocket.h rocketFactory.h rocketStage.h stageOne.h stageTwo.h StaticFireTest.h Starlink.h Satelite.h
	g++ -c simulation.cpp

launched.o: launched.cpp launched.h
	g++ -c launched.cpp

aborted.o: aborted.h aborted.cpp
	g++ -c aborted.cpp

landing.o: landing.h landing.cpp
	g++ -c landing.cpp

landed.o: landed.h landed.cpp
	g++ -c landed.cpp

ready.o: ready.cpp ready.h
	g++ -c ready.cpp

rocketState.o: rocketState.cpp rocketState.h
	g++ -c rocketState.cpp

EngineFactory.o: EngineFactory.cpp EngineFactory.h
	g++ -c EngineFactory.cpp

MerlinEngineFactory.o: MerlinEngineFactory.cpp MerlinEngineFactory.h
	g++ -c MerlinEngineFactory.cpp

VacuumEngineFactory.o: VacuumEngineFactory.cpp VacuumEngineFactory.h
	g++ -c VacuumEngineFactory.cpp

Engines.o: Engines.cpp Engines.h
	g++ -c Engines.cpp

merlinEngine.o: merlinEngine.cpp merlinEngine.h
	g++ -c merlinEngine.cpp

vacuumEngine.o: vacuumEngine.cpp vacuumEngine.h
	g++ -c vacuumEngine.cpp

Payload.o: Payload.cpp Payload.h
	g++ -c Payload.cpp

Falcon9Core.o: Falcon9Core.cpp Falcon9Core.h
	g++ -c Falcon9Core.cpp

SpaceCraftFactory.o: SpaceCraftFactory.cpp SpaceCraftFactory.h
	g++ -c SpaceCraftFactory.cpp

CrewDragonFactory.o: CrewDragonFactory.cpp CrewDragonFactory.h 
	g++ -c CrewDragonFactory.cpp

DragonSpaceCraftFactory.o: DragonSpaceCraftFactory.cpp DragonSpaceCraftFactory.h 
	g++ -c DragonSpaceCraftFactory.cpp

SpaceCraft.o: SpaceCraft.cpp SpaceCraft.h
	g++ -c SpaceCraft.cpp

CrewDragon.o: CrewDragon.cpp CrewDragon.h 
	g++ -c CrewDragon.cpp

DragonSpaceCraft.o: DragonSpaceCraft.cpp DragonSpaceCraft.h
	g++ -c DragonSpaceCraft.cpp

falcon.o: falcon.cpp falcon.h 
	g++ -c falcon.cpp

falcon9.o: falcon9.cpp falcon9.h 
	g++ -c falcon9.cpp

falcon9Factory.o: falcon9Factory.cpp falcon9Factory.h 
	g++ -c falcon9Factory.cpp

falconHeavy.o: falconHeavy.cpp falconHeavy.h
	g++ -c falconHeavy.cpp

falconHeavyFactory.o: falconHeavyFactory.cpp falconHeavyFactory.h 
	g++ -c falconHeavyFactory.cpp

rocket.o: rocket.cpp rocket.h 
	g++ -c rocket.cpp

rocketFactory.o: rocketFactory.cpp rocketFactory.h 
	g++ -c rocketFactory.cpp

rocketStage.o: rocketStage.cpp rocketStage.h 
	g++ -c rocketStage.cpp

stageOne.o: stageOne.cpp stageOne.h 
	g++ -c stageOne.cpp

stageTwo.o: stageTwo.cpp stageTwo.h 
	g++ -c stageTwo.cpp

StaticFireTest.o: StaticFireTest.cpp StaticFireTest.h 
	g++ -c StaticFireTest.cpp

Starlink.o: Starlink.cpp Starlink.h 
	g++ -c Starlink.cpp

Satelite.o: Satelite.cpp Satelite.h 
	g++ -c Satelite.cpp

run:
	./Create
clean:
	rm -f launched.o aborted.o landing.o landed.o ready.o rocketState.o EngineFactory.o MerlinEngineFactory.o VacuumEngineFactory.o Engines.o merlinEngine.o vacuumEngine.o Payload.o Falcon9Core.o SpaceCraftFactory.o CrewDragonFactory.o DragonSpaceCraftFactory.o SpaceCraft.o CrewDragon.o DragonSpaceCraft.o falcon.o falcon9.o falcon9Factory.o falconHeavy.o falconHeavyFactory.o rocket.o rocketFactory.o rocketStage.o stageOne.o stageTwo.o StaticFireTest.o simulation.o Starlink.o Satelite.o