// File: Average
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
    // TASK: Prompt the user to enter 3 integers
    // Calculate and Display the average of the input
    // Hint: You can capture multiple inputs at once
    // ex: cin >> i1 >> i2;

    int x, y, z;
    double avg;

    cout << "Please enter three numbers, separated by spaces" << endl;
    cin >> x >> y >> z;
    avg = ((x + y + z) / 3.0); //one member of the equation should have a floating point
    cout << "The average of the three numbers entered is "
         << avg << endl;

    return 0;
}

// Function Definitions