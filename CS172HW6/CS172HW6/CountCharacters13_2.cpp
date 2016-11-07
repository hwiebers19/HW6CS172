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
/*
void countCharacters()
{
    string fileName;
    cout << "Enter a file name: ";
    getline(cin, fileName);

    fstream iofile(fileName, ios::in | ios::out);
    int count =0;
    if(!iofile)
    {
        cout << "ERROR: Could not open file" << endl;
    }
  
    else
    {
        char character;
            while( iofile >> character)
            {
                count++;
            }
            iofile.clear();
        cout << "The file has " << count << " characters" << endl;
    }
        iofile.close();
}
*/
/*
int ex02()
{
    ifstream input;
    
    input.open("Invite.txt");
    cout << "Counting characters: " <
    if(input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    int count = 0;
    while (!input.eof())
    {
        intput.get();
        count++;
    }
    count--;
    input.close();
    cout << "Number of character in the file: " << count << endl;
    system ("pause");
    return 0;
    
}
*/