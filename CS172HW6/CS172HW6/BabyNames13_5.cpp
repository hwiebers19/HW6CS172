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
    int year;
    int rank;
    int bscore;
    int gscore;
char ch;
string name, bname, gname, filename;
cout << "Enter the year: ";
cin >> year;
    
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
    

        cout << "Enter the gender: ";
        cin >> ch;
        cout << "Enter the name: ";
        cin >> name;
    
        ifstream input(filename.c_str());
    
        if (input.fail())
        {
            cout << filename << "file not exist. \n Exit program";
        }
        if (!input.eof())
        {
            while (!input.eof())
            {
                input >> rank >> bname >> bscore >> gname >> gscore;
                if (ch == 'M' || ch == 'm')
                {
                    if (name == bname)
                    {
                        cout << name << "is ranked #" << rank << "in year" << year;
                    }
                }
                else if (ch == 'F' || ch == 'f')
                {
                    if (name == gname)
                    {
                        cout << name << "is ranked #" << rank << "in year" << year;
                    }
                }
            }
        }
        input.close();
}
/*
void babyName()
{
    string year;
    cout<<"Enter the year: ";
    cin>>year;
    
    string gender;
    cout<<"Enter the gender: ";
    cin>>gender;
    
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    
    
    
    ifstream babyFile;
    babyFile.open("Babynameranking2010.txt", fstream::in);
    babyFile.open("Babynameranking2011.txt", fstream::in);
    babyFile.open("Babynameranking2012.txt", fstream::in);
    babyFile.open("Babynameranking2013.txt", fstream::in);
    babyFile.open("Babynameranking2014.txt", fstream::in);
    
    string line;
    string female_name;
    string male_name;
    string rank;
    if( !babyFile.eof() )
    {
        cout << "Error, file can not be opened. "<<endl;
    }
    else
    {
        
        babyFile >> rank >> male_name >> female_name;
        
        
        if ( male_name == name )
        {
            cout << "Male ranking is " << rank << endl;
        }
        if ( female_name == name )
        {
            cout << "Female ranking is " << rank << endl;
        }
    }
    
    babyFile.close();
    
    
}
*/
 
