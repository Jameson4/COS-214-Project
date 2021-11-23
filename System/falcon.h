#ifndef FALCON_H
#define FALCON_H
#include "rocket.h"

class falcon : public rocket {
public:
	falcon(string model);
	string getDescription();
	void setPayload(Payload*);
	void setCores(Falcon9Core*);
	void launch();
	void testEngines();
};

#endif
