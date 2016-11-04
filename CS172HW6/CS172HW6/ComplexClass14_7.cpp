//
//  ComplexClass14_7.cpp
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
#include "ComplexClass14_7.hpp"
void complexClass()
{
    double A1, A2, B1, B2;
    cout<<"Enter the first complex number: " <<endl;
    cin>>A1>>A1;
    cout<<"Enter the second complex number: " <<endl;
    cin>>B2>>B2;
    
    _Complex num1(A1, B1);
    _Complex num2(A2, B2);
    
    _Complex num3 = num1.add(num2);
    
    cout<<"\n" << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.subtract(num2);
    
    cout<<"\n" << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.multiply(num2);
    
    cout<<"\n" << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
    num3 =num1.divide(num2);
    
    cout<<"\n" << num1.toString() <<" + " <<num2.toString() <<" = " << num3.toString();
    
}