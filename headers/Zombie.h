#ifndef _Zombie_H
#define _Zombie_H

#include "Organism.h"

class Zombie : public Organism
{
private:
	int timeEaten = 0;
	bool canBreed = false;

public:
	Zombie(City* city, int y, int x);

	virtual ~Zombie();

	bool eat(Organism* newGrid[GRIDSIZE][GRIDSIZE]);

	void movement(Organism *newGrid[GRIDSIZE][GRIDSIZE]);

	OrganismType getType() const override;

    void starve(Organism* newGrid[GRIDSIZE][GRIDSIZE]);

	void move(Organism *newGrid[GRIDSIZE][GRIDSIZE]) override;

    void breed(Organism* newGrid[GRIDSIZE][GRIDSIZE]);

	void turn(Organism* newGrid[GRIDSIZE][GRIDSIZE]) override; //all things a zombie may do on their turn. i.e. an eat/move or a regular move, and if allowed a bite or convert back to human
	
};

#endif
