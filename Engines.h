#ifndef ENGINES_H
#define ENGINES_H

using namespace std;

class Engines
{
public:
	Engines();
	~Engines();
	virtual bool ignite() = 0;
private:
	int power;
};

#endif