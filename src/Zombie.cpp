//
// Created by gabri on 4/2/2025.
//

#include "../headers/Zombie.h"
#include "../headers/GameSpecs.h"
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include "../headers/Human.h"

Zombie::Zombie(City* city,int y, int x) : Organism(city) {
  this->age = 0;
  this->y = y;
  this->x = x;
  this->moved = true;
  this->timeEaten = 0;
  this->canBreed = false;
}

Zombie::~Zombie() = default;

OrganismType Zombie::getType() const {
  return ZOMBIE;
}

void Zombie::starve(Organism* newGrid[GRIDSIZE][GRIDSIZE]) {

  newGrid[this->y][this->x] = new Human(city,this->y,this->x);
  delete this;
};

void Zombie::breed(Organism* newGrid[GRIDSIZE][GRIDSIZE]){

  vector<ZombieDirection> possibleDirections;

  //North
  if (y - 1 >= 0) possibleDirections.push_back(NORTHz);

  //South
  if (y + 1 < GRIDSIZE) possibleDirections.push_back(SOUTHz);

  //West
  if (x - 1 >= 0) possibleDirections.push_back(WESTz);

  //East
  if (x + 1 < GRIDSIZE) possibleDirections.push_back(EASTz);

  //North West
  if (y - 1 >= 0 && x - 1 >= 0) possibleDirections.push_back(NORTH_WESTz);

  //North East
  if (y - 1 >= 0 && x + 1 < GRIDSIZE) possibleDirections.push_back(NORTH_EASTz);


  //South West
  if (y + 1 < GRIDSIZE && x - 1 >= 0) possibleDirections.push_back(SOUTH_WESTz);


  //South East
  if (y + 1 < GRIDSIZE && x + 1 < GRIDSIZE) possibleDirections.push_back(SOUTH_EASTz);


  //Shuffle
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(possibleDirections.begin(),possibleDirections.end(),default_random_engine(seed));

  for (ZombieDirection dir : possibleDirections) {
    int newY = y, newX = x;

    switch (dir) {
      case NORTHz:
        newY--;
      break;

      case SOUTHz:
        newY++;
      break;

      case EASTz:
        newX++;
      break;

      case WESTz:
        newX--;
      break;

      case NORTH_WESTz:
        newY--;
      newX--;
      break;

      case SOUTH_WESTz:
        newY++;
      newX--;
      break;

      case NORTH_EASTz:
        newY--;
      newX++;
      break;

      case SOUTH_EASTz:
        newY++;
      newX++;
      break;
    }

    //Trying to get human
    if (newGrid[newY][newX] != nullptr && newGrid[newY][newX]->getType() == HUMAN) {

      //Human
      Organism* toEat = newGrid[newY][newX];

      //Replace Human for BREED
      newGrid[newY][newX] = new Zombie(city, newY, newX);

      //"Eat Human"
      delete toEat;

      this->canBreed = false;
      break;
    }
  }
}

void Zombie::movement(Organism *newGrid[GRIDSIZE][GRIDSIZE]) {
  vector<ZombieDirection> possibleDirections;

  //North
  if (y - 1 >= 0) possibleDirections.push_back(NORTHz);

  //South
  if (y + 1 < GRIDSIZE) possibleDirections.push_back(SOUTHz);

  //West
  if (x - 1 >= 0) possibleDirections.push_back(WESTz);

  //East
  if (x + 1 < GRIDSIZE) possibleDirections.push_back(EASTz);

  //North West
  if (y - 1 >= 0 && x - 1 >= 0) possibleDirections.push_back(NORTH_WESTz);

  //North East
  if (y - 1 >= 0 && x + 1 < GRIDSIZE) possibleDirections.push_back(NORTH_EASTz);


  //South West
  if (y + 1 < GRIDSIZE && x - 1 >= 0) possibleDirections.push_back(SOUTH_WESTz);


  //South East
  if (y + 1 < GRIDSIZE && x + 1 < GRIDSIZE) possibleDirections.push_back(SOUTH_EASTz);


  //Shuffle
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(possibleDirections.begin(),possibleDirections.end(),default_random_engine(seed));
  //After looping through all directions to try and eat human, if failed, move normally
  for (ZombieDirection dir : possibleDirections) {
    int newY = y, newX = x;

    switch (dir) {
      case NORTHz:
        newY--;
      break;

      case SOUTHz:
        newY++;
      break;

      case EASTz:
        newX++;
      break;

      case WESTz:
        newX--;
      break;

      case NORTH_WESTz:
        newY--;
      newX--;
      break;

      case SOUTH_WESTz:
        newY++;
      newX--;
      break;

      case NORTH_EASTz:
        newY--;
      newX++;
      break;

      case SOUTH_EASTz:
        newY++;
      newX++;
      break;
    }

    //Moving
    if (newGrid[newY][newX] == nullptr){

      newGrid[newY][newX] = this;

      int oldY = y, oldX = x;

      this->y = newY;
      this->x = newX;

      newGrid[oldY][oldX] = nullptr;

      return;
    }
  }
}

bool Zombie::eat(Organism* newGrid[GRIDSIZE][GRIDSIZE]) {
  vector<ZombieDirection> possibleDirections;

  //North
  if (y - 1 >= 0) possibleDirections.push_back(NORTHz);

  //South
  if (y + 1 < GRIDSIZE) possibleDirections.push_back(SOUTHz);

  //West
  if (x - 1 >= 0) possibleDirections.push_back(WESTz);

  //East
  if (x + 1 < GRIDSIZE) possibleDirections.push_back(EASTz);

  //North West
  if (y - 1 >= 0 && x - 1 >= 0) possibleDirections.push_back(NORTH_WESTz);

  //North East
  if (y - 1 >= 0 && x + 1 < GRIDSIZE) possibleDirections.push_back(NORTH_EASTz);


  //South West
  if (y + 1 < GRIDSIZE && x - 1 >= 0) possibleDirections.push_back(SOUTH_WESTz);


  //South East
  if (y + 1 < GRIDSIZE && x + 1 < GRIDSIZE) possibleDirections.push_back(SOUTH_EASTz);


  //Shuffle
  unsigned seed = chrono::system_clock::now().time_since_epoch().count();
  std::shuffle(possibleDirections.begin(),possibleDirections.end(),default_random_engine(seed));

  for (ZombieDirection dir : possibleDirections) {
    int newY = y, newX = x;

    switch (dir) {
      case NORTHz:
        newY--;
      break;

      case SOUTHz:
        newY++;
      break;

      case EASTz:
        newX++;
      break;

      case WESTz:
        newX--;
      break;

      case NORTH_WESTz:
        newY--;
      newX--;
      break;

      case SOUTH_WESTz:
        newY++;
      newX--;
      break;

      case NORTH_EASTz:
        newY--;
      newX++;
      break;

      case SOUTH_EASTz:
        newY++;
      newX++;
      break;
    }

    //Trying to get human
    if (newGrid[newY][newX] != nullptr && newGrid[newY][newX]->getType() == HUMAN) {

      //Human
      Organism* toEat = newGrid[newY][newX];

      //Replace Human
      newGrid[newY][newX] = this;

      //"Eat Human"
      delete toEat;

      int oldY = y, oldX = x;

      this->y = newY;
      this->x = newX;

      newGrid[oldY][oldX] = nullptr;

      this->timeEaten = 0;

      return true;
    }
  }
  return false;
}

void Zombie::move(Organism *newGrid[GRIDSIZE][GRIDSIZE]) {

  if (!this->eat(newGrid)) {

    this->movement(newGrid);

  }

  this->setMoved(true);
}

void Zombie::turn(Organism* newGrid[GRIDSIZE][GRIDSIZE]){

  this->move(newGrid);

  if (this->age > 0 && (this->age) % ZOMBIE_BREED == 0){
    this->canBreed = true;
  }

  if (canBreed) {
    this->breed(newGrid);
  }

  if (this->timeEaten > 0 && this->timeEaten % ZOMBIE_STARVE == 0) {
    this->starve(newGrid);
    return;
  }

  this->age ++;
  this->timeEaten ++;
}