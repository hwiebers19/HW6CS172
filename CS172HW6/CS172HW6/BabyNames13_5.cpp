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
    
    while ( !babyFile.eof() )
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
