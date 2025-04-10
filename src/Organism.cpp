//
// Created by gabri on 4/2/2025.
//

#include "../headers/Organism.h"

Organism::Organism() : city(nullptr), x(0), y(0), age(0), moved(false) {}

Organism::Organism(City *city) : city(city), x(0), y(0), age(0), moved(false) {}

Organism::~Organism() {}

bool Organism::getMoved() {
  return moved;
}

void Organism::setMoved(bool moved) {
  this->moved = moved;
}

int Organism::getAge() {
  return age;
}
