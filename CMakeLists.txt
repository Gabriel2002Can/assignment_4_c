cmake_minimum_required(VERSION 3.30)
project(zombieSim)

set(CMAKE_CXX_STANDARD 20)

add_executable(zombieSim src/main.cpp
        src/City.cpp
        ../headers/City.h
        src/Organism.cpp
        ../headers/Organism.h
        src/Zombie.cpp
        ../headers/Zombie.h
        src/Human.cpp
        ../headers/Human.h
        ../headers/GameSpecs.h)
