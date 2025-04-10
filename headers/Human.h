#ifndef _Human_H
#define _Human_H

#include "Organism.h"

class Human : public Organism
{
public:
	Human(City* city,int y, int x);
	virtual ~Human();


	void turn(Organism* newGrid[GRIDSIZE][GRIDSIZE]) override; //all things a human may do on their turn. i.e. a move, and if allowed a recruitment

    void recruit(Organism* newGrid[GRIDSIZE][GRIDSIZE]);

	void move(Organism* newGrid[GRIDSIZE][GRIDSIZE]) override;

	OrganismType getType() const override;
};

#endif
