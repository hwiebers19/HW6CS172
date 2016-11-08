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
    int count = 0;
    string fileName;
    cout << "Enter a file name (make sure to use exact punctuation ie capitals): ";
    getline(cin, fileName);
    
    // Open a file for input
    fstream iofile(fileName, ios::in);
    // check to see if the file exists already or not
    if ( ! iofile )
    {
        cout << "Error: file could not be opened ";
    }
    else
    {
        char characters;
        //counts the characters
        while(iofile >> characters)
        {
            count++;
        }
        //iofile.clear();
        //iofile.seekg(0, ios::end);
        //outputs results
        cout << "This file has " << count << " characters." << endl;
    }
   
}

