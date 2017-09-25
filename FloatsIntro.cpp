// File: FloatsIntro
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants


// Prototypes


// Main Program Program
int main()
{
    double speed, fe, fr;
    fe = 2e10;
    fr = 2.000004e10;
    speed = 6.685e8 * (fr - fe) / (fr + fe);
    cout << "The speed is " << speed << " miles/hr" << endl;


    return 0;
}

// Function Definitions