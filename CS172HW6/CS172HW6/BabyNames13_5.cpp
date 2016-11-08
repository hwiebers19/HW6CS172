//
//  BabyNames13_5.cpp
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
#include "BabyNames13_5.hpp"

void babyName()
{
    //initalizes
    int year;
    int rank;
    string bscore;
    string gscore;
    char ch;
    string name;
    string bname;
    string gname;
    string filename;
//asks user to imput the year
cout << "Enter the year: ";
cin >> year;
//calls correct textfile
switch (year)
{
    case 2010:filename = "Babynameranking2010.txt";
        break;
    case 2011:filename = "Babynameranking2011.txt";
        break;
    case 2012: filename = "Babynameranking2012.txt";
        break;
    case 2013: filename = "Babynameranking2013.txt";
        break;
    case 2014: filename = "Babynameranking2014.txt";
        break;
    default: cout << "wrong entry year!";
        
}
    
    //asks user for gender
        cout << "Enter the gender: ";
        cin >> ch;
    //asks user for name
        cout << "Enter the name: ";
        cin >> name;
    //checks if file exists
        ifstream input(filename.c_str());
    
        if (input.fail())
        {
            cout << filename << "file not exist. \n Exit program";
        }
        if (!input.eof())
        {
            //finds the ranking for the specific name and year entered and outputs it
            while (!input.eof())
            {
                //males
                input >> rank >> bname >> bscore >> gname >> gscore;
                if (ch == 'M' || ch == 'm')
                {
                    if (name == bname)
                    {
                        cout << name << "is ranked #" << rank << " in year " << year <<endl;
                    }
                }
                //females
                else if (ch == 'F' || ch == 'f')
                {
                    if (name == gname)
                    {
                        cout << name << "is ranked #" << rank << " in year " << year<<endl;
                    }
                }
            }
        }
        input.close();
}

 
