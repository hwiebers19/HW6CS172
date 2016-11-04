//
//  13_1.cpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include "13_1.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cctype>
#include <vector>
#include <fstream>
using namespace std;
void createTextFile()
{
    
    ofstream output;
    
    output.open ("Exercise13_1.txt", fstream::out | fstream::app);
    
    
    srand ((unsigned int)time(NULL));
    
    for(int i=0; i<100; i++)
    {
        int x = rand() %100;
        output<< x << " "<<endl;
    }
    
    output.close();
}