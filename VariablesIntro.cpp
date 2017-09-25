// File: VariablesIntro
// Created by Sean Bigler on 9/25/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>

using namespace std;

// Constants


// Prototypes


// Main Program Program
int main()          //First Function, entry point
{
    //cout is for standard out
    // << redirection operators
    //"Double quotes, which makes a string"
    //endl - end of the line
    cout << "Hello CS1410" << endl;
    cout << "You are learning C++" << endl;
    cout << "Wow, I like it";
    cout << endl;

    //Variables
    //Integers, floating points, etc.
    //int is "signed" (supports positive and negative values
    int i;      //declaring a label (i) for an integer
    unsigned int n;     //declare an unsigned (only + values)
    cout << i << endl;
    i = 7;
    cout << i << endl;
    // int i = 9...Do not redeclare variables!
    cout << "i is = " << i << "and is " << sizeof(int) << " bytes" << endl;
    n = 1234;
    cout << "n is = " << n << "and is " << sizeof(int) << "bytes" << endl;
    cout << "A short int is " << sizeof(short) << " bytes" << endl;
    cout << "A long int is " << sizeof(long) << " bytes" << endl;
    cout << "A char is " << sizeof(char) << " byte" << endl;

    // Floating point - supports decimal values
    float f = 1.2;
    cout << "A float is " << sizeof(float) << " bytes" << endl;
    double d = 2.05;
    cout << "A double is " << sizeof(double) << " bytes" << endl;
    //Every statement ends with a ";"
    return 0;       //Required (the return type
    //must match the function type
    //of the function
}

// Function Definitions