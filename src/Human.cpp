//
// Created by gabri on 4/2/2025.
//

#include "../headers/GameSpecs.h"
#include "../headers/Human.h"
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>

Human::Human(City* city, int y, int x) : Organism(city) {
  this->age = 0;
  this->y = y;
  this->x = x;
  this->moved = true;
}

Human::~Human() = default;

OrganismType Human::getType() const{
  return HUMAN;
}

void Human::recruit(Organism* newGrid[GRIDSIZE][GRIDSIZE]){

  std::vector<HumanDirection> possibleDirections;

  //North
  if (y - 1 >= 0) possibleDirections.push_back(NORTH);

  //South
  if (y + 1 < GRIDSIZE) possibleDirections.push_back(SOUTH);

  //West
  if (x - 1 >= 0) possibleDirections.push_back(WEST);

  //East
  if (x + 1 < GRIDSIZE) possibleDirections.push_back(EAST);

//Shuffle
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
std::shuffle(possibleDirections.begin(),possibleDirections.end(),default_random_engine(seed));

  for (HumanDirection dir : possibleDirections) {
    int newY = y, newX = x;

    switch (dir) {
      case NORTH:
        newY--;
        break;

      case SOUTH:
        newY++;
        break;

      case EAST:
        newX++;
        break;

      case WEST:
        newX--;
        break;
    }

    if (newGrid[newY][newX] == nullptr){
      newGrid[newY][newX] = new Human(city ,newY, newX);
      break;
    }
}

}

void Human::move(Organism* newGrid[GRIDSIZE][GRIDSIZE]){

  std::vector<HumanDirection> possibleDirections;

  //North
  if (y - 1 >= 0) possibleDirections.push_back(NORTH);

  //South
  if (y + 1 < GRIDSIZE) possibleDirections.push_back(SOUTH);

  //West
  if (x - 1 >= 0) possibleDirections.push_back(WEST);

  //East
  if (x + 1 < GRIDSIZE) possibleDirections.push_back(EAST);

//Shuffle
unsigned seed = chrono::system_clock::now().time_since_epoch().count();
std::shuffle(possibleDirections.begin(),possibleDirections.end(),default_random_engine(seed));

  for (HumanDirection dir : possibleDirections) {
    int newY = y, newX = x;

    switch (dir) {
      case NORTH:
        newY--;
        break;

      case SOUTH:
        newY++;
        break;

      case EAST:
        newX++;
        break;

      case WEST:
        newX--;
        break;
    }

    if (newGrid[newY][newX] == nullptr){

      //Move to position
      newGrid[newY][newX] = this;

      int oldY = y, oldX = x;

      this->y = newY;
      this->x = newX;

      newGrid[oldY][oldX] = nullptr;

      this->moved=true;
      break;
    }
    }
    }

void Human::turn(Organism* newGrid[GRIDSIZE][GRIDSIZE]){
  this->move(newGrid);

  if (this->age > 0 && (this->age) % HUMAN_BREED == 0){
    this->recruit(newGrid);
  }

  this->age ++;
}