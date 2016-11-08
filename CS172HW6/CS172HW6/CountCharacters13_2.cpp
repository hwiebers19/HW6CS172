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
    cout << "Enter a file name: ";
    getline(cin, fileName);
    
    ifstream iofile(fileName, ios::in); // Open a file for input/output
    if ( ! iofile ) // check to see if the file exists already or not
    {
        cout << "Error: file could not be opened ";
    }
    else
    {
        char characters;
        while(iofile >> characters)
        {
            count++;
        }
        iofile.clear();
        iofile.seekg(0, ios::end);
        //iofile << "This file has" << count << " characters." << endl;
    }
   
}

