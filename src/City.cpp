//
// Created by gabri on 4/2/2025.
//

#include "../headers/City.h"
#include "../headers/GameSpecs.h"
#include "../headers/Human.h"
#include "../headers/Zombie.h"
#include "../headers/Organism.h"
#include <vector>

City::City(){
generation = 0; numberHumans = 0; numberZombies = 0;
  for (int y = 0; y < GRIDSIZE; y++) {
    for (int x = 0; x < GRIDSIZE; x++) {
      grid[y][x] = nullptr;
    }
  }


  //Random seed
  srand(static_cast<unsigned int>(time(nullptr)));

  std::cout << "Trying to place " << HUMAN_STARTCOUNT << " humans." << std::endl;

  //Placing humans
  int placedHumans = 0;
  while (placedHumans < HUMAN_STARTCOUNT) {
    int y = rand() % GRIDSIZE;
    int x = rand() % GRIDSIZE;

    if (grid[y][x] == nullptr) {
      std::cout << "Placing human at: " << y << ", " << x << std::endl;

      grid[y][x] = new Human(this, y, x);
      placedHumans++;
      numberHumans++;
    }
  }

  std::cout << "Trying to place " << ZOMBIE_STARTCOUNT << " zombies." << std::endl;

  //Place Zombies
  int placedZombies = 0;
  while (placedZombies < ZOMBIE_STARTCOUNT) {
    int y = rand() % GRIDSIZE;
    int x = rand() % GRIDSIZE;

    if (grid[y][x] == nullptr) {
      std::cout << "Placing zombie at: " << y << ", " << x << std::endl;

      grid[y][x] = new Zombie(this, y, x);
      placedZombies++;
      numberZombies++;
    }
  }

  std::cout << "Humans placed: " << numberHumans << std::endl;
  std::cout << "Zombies placed: " << numberZombies << std::endl;

  for(int y = 0; y < GRIDSIZE; y++){
    for(int x = 0; x < GRIDSIZE; x++) {
      Organism* org = grid[y][x];

      if (org == nullptr) {
        cout << "-";
      }

      else if (org->getType() == HUMAN) {
        cout << "H";
      }

      else if (org->getType() == ZOMBIE) {
        cout << "Z";
      }
    }
    cout << endl;
  }
}



City::~City() {
  for (int y = 0; y < GRIDSIZE; y++) {
    for (int x = 0; x < GRIDSIZE; x++) {
      delete grid[y][x];
    }
  }
}


void City::setOrganism( Organism *organism, int y, int x ){
    grid[y][x] = organism;
};

Organism *City::getOrganism( int y, int x ){
  return grid[y][x];
};

ostream& operator<<(ostream& os, City& city) {
  for(int y = 0; y < GRIDSIZE; y++){
    for(int x = 0; x < GRIDSIZE; x++) {
      Organism* org = city.grid[y][x];

      if (org == nullptr) {
        os << "-";
      }

      else if (org->getType() == HUMAN) {
        os << "H";
      }

      else if (org->getType() == ZOMBIE) {
        os << org->getAge();
      }
    }
    os << endl;
  }
  return os;
}

void City::setNumberHumans(int newNumber) {
  numberHumans += newNumber;
}

void City::setNumberZombies(int newNumber) {
  numberZombies += newNumber;
}


void City::step(){
  numberHumans = 0;
  numberZombies = 0;
  for(int y = 0; y < GRIDSIZE; y++){
    for(int x = 0; x < GRIDSIZE; x++){

      //Valid Organism to move
      if(grid[y][x] != nullptr && !grid[y][x]->getMoved()){

        grid[y][x]->turn(grid);

      }
    }
  }
  for (int counterY = 0; counterY < GRIDSIZE; counterY++) {
    for (int counterX = 0; counterX < GRIDSIZE; counterX++) {

      //For counting

      if (grid[counterY][counterX] != nullptr && grid[counterY][counterX]->getType() == HUMAN) {
        numberHumans++;
      }
      else if (grid[counterY][counterX] != nullptr && grid[counterY][counterX]->getType() == ZOMBIE) {
        numberZombies++;
      }
    }
  }
  generation += 1;
  this->reset();
};

void City::reset() {
  for(int y = 0; y < GRIDSIZE; y++) {
    for(int x = 0; x < GRIDSIZE; x++) {
      if (grid[y][x] != nullptr) {
        grid[y][x]->setMoved(false);
      }
    }
  }
}

int City::getNumberHumans() {
 return numberHumans;
}

int City::getNumberZombies() {
  return numberZombies;
};

int City::getGeneration() {
  return generation;
};

bool City::hasDiversity() {
  if (numberHumans <= 0 || numberZombies <= 0) {
    return false;
  }
  return true;
}