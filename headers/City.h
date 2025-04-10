#ifndef _CITY_H
#define _CITY_H

#include <iostream>
#include "GameSpecs.h"

using namespace std;

class Organism;

class City
{
protected:
	Organism *grid[GRIDSIZE][GRIDSIZE];
	int generation;
	int numberHumans;
	int numberZombies;

public:
	City();
	virtual ~City();

	int getNumberHumans();
	int getNumberZombies();
	void setNumberHumans(int newNumber);
	void setNumberZombies(int newNumber);
	int getGeneration();

	bool hasDiversity();

	Organism *getOrganism( int y, int x );
	void setOrganism( Organism *organism, int y, int x );

	void step(); //includes all actions except reset, counting, and printing in this solution.
	void reset();

	friend ostream& operator<<( ostream &output, City &city );
	
	void col(int c);   //for colors
};

#endif

