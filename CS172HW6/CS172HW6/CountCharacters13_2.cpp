//
//  CountCharacters13_2.cpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>
using namespace std;
#include "13_1.hpp"
#include "CountCharacters13_2.hpp"
void countCharacters()
{
    string inputFilename;
    cout<<"Enter a file name: ";
    cin>> inputFilename;
    
    int sumChars =0;
    char currentChar;
    
    ifstream input(inputFilename.c_str());
    
    if(input.fail())
    {
        cout<< inputFilename<<" does not exist" <<endl;
    }
    else
    {
        cout<<"Number of characters in File: "<<endl;
        while(input >> currentChar)
        {
            cout<< currentChar<<" ";
            sumChars++;
        }
        
    }
}