//
// Created by W0068332 on 11/21/2021.
//
//Example main.cpp
//This supposes that city->step() calls the move method of each organism in the city
//in a single pass causing each to perform all tasks that it can.

#include <iostream>
#include <chrono>
#include <thread>
#include "../headers/Organism.h"
#include "../headers/City.h"

using namespace std;

void ClearScreen()
{
    cout << "\n\n\n";

    //cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}

int main() {
    std::cout << "Program started!" << std::endl;

    City *city = new City();

    std::cout << "City created!" << std::endl;

    chrono:: milliseconds interval(INTERVAL);

    std::cout << "Humans: " << city->getNumberHumans() << ", Zombies: " << city->getNumberZombies() << std::endl;
    std::cout << "Diversity check: " << city->hasDiversity() << std::endl;

    //while (city->getNumberZombies() != 0 || city->getNumberHumans() != 0) {


    while (city->hasDiversity()) { //while both humans and zombies exist
        this_thread::sleep_for(interval);

        ClearScreen();

        city->step(); 
        city->reset(); //resets moved flags

        cout << *city; //prints city
        cout << "GENERATION " << city->getGeneration() << endl;
        cout << "HUMANS: " << city->getNumberHumans() << endl;
        cout << "ZOMBIES: " << city->getNumberZombies() << endl;

        if (city->getNumberHumans() == 0 && city->getNumberZombies() == 0) {
            cout << "ERROR: No organisms present!" << endl;
            break;
        }

    }//end while
}//end main

