//
// Created by gabri on 4/9/2025.
//

#include "../headers/Color.h"
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

void Col(int c)
{
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, c);
    return;
}
