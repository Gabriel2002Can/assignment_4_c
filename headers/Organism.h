#ifndef _Organism_H
#define _Organism_H

#include <iostream>
#include "../headers/GameSpecs.h"

using namespace std;

enum OrganismType { HUMAN, ZOMBIE, OTHER };

class City;

class Organism
{
protected:
	int x;
	int y;
    int age;
	bool moved;
	City *city;

public:
	Organism();
	Organism( City *city);
	virtual ~Organism();

	int getAge();

	virtual void turn(Organism* newGrid[GRIDSIZE][GRIDSIZE]) = 0;

    virtual void move(Organism* newGrid[GRIDSIZE][GRIDSIZE]) = 0;

    bool getMoved();
    void setMoved(bool moved);

	virtual OrganismType getType() const = 0;

	friend ostream& operator<<( ostream &output, Organism *organism );
};

#endif
