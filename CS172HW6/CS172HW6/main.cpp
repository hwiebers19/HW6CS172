//
//  main.cpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/3/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include <cctype>
#include <vector>
#include "13_1.hpp"
#include "CountCharacters13_2.hpp"
#include "BabyNames13_5.hpp"
#include "CircleClass14_3.hpp"
#include "ComplexClass14_7.hpp"
using namespace std;

//EX06_01 – Liang Programming Exercise 13.1: Create a text file
//EX06_02 – Liang Programming Exercise 13.2: Count characters
//EX06_03 – Liang Programming Exercise 13.5: Baby names
//EX06_04 – Liang Programming Exercise 14.3: The Circle class
//EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class


int main() {
    //EX06_01 – Liang Programming Exercise 13.1: Create a text file
    cout << "EX06_01 13.1" <<endl;
    cout <<endl;
    createTextFile();
    
    //EX06_02 – Liang Programming Exercise 13.2: Count characters
    cout << "EX06_02 13.2" <<endl;
    //countCharacters();
    
    //EX06_03 – Liang Programming Exercise 13.5: Baby names
    cout << "EX06_03 13.5" <<endl;
    babyName();
    
    //EX06_04 – Liang Programming Exercise 14.3: The Circle class
    cout << "EX06_04 14.3" <<endl;
    Circle c1(6);
    Circle c2(14);
    
    if(c1 < c2)
        cout << "The first circle is smaller than the second circle" << endl;
    if(c1 <= c2)
        cout << "The fist circle is smaller than or equal to the second circle" << endl;
    if(c1 == c2)
        cout << "The first circle is equal to the second circle" << endl;
    if(c1 != c2)
        cout << "The first circle is not equal to the second circle" << endl;
    if(c1 > c2)
        cout << "The first circle is greater than the second circle" << endl;
    if(c1 >= c2)
        cout << "The first circle is greater than or equal to the second circle" << endl;
    cout <<endl;
    
    //EX06_05 – Liang Programming Exercise 14.7: Math: The Complex class
    cout << "EX06_05 14.7" <<endl;
    double A;
    double B;
    double C;
    double D;
    
    cout << "Enter the first complex number: ";
    cin >> A, B;
    
    cout << "Enter the second complex number: ";
    cin >> C, D;
    cout <<endl;
    Complex result;
    Complex complex1(A, B);
    Complex complex2(C, D);
    
    result = complex1+complex2;
    result = complex1-complex2;
    result = complex1*complex2;
    result = complex1/complex2;
    double abs = complex1.abs();
    
    cout << "(" << complex1 << "i) + (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) - (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) * (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "(" << complex1 << "i) / (" << complex2 << "i) = " << result <<"i" <<endl;
    cout << "|" << complex1 << "i| = " << result <<endl;
    
    return 0;
}
