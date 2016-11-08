//
//  ComplexClass14_7.hpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef ComplexClass14_7_hpp
#define ComplexClass14_7_hpp
using namespace std;
#include <stdio.h>

//creates the complex class and promises it 
class Complex
{
private:
    double a;
    double b;
    
public:
    Complex();
    Complex(double);
    Complex(double, double);
    
    double getA();
    double getB();
    
    
    double abs();
    Complex operator+(Complex& num);
    Complex operator-(Complex& num);
    Complex operator*(Complex& num);
    Complex operator/(Complex& num);
    
    friend ostream& operator<<(ostream& str, Complex& num);
    

};


#endif /* ComplexClass14_7_hpp */
