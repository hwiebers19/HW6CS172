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
//initalizes a and b
Complex::Complex()
{
    a = 0;
    b = 0;
}
//sets a
Complex::Complex(double A)
{
    a = A;
}
//
Complex::Complex(double A, double B)
{
    a = A;
    b = B;
}
//gets A
double Complex::getA()
{
    return a;
}
//gets B
double Complex::getB()
{
    return b;
}
//does the addition using pointers
Complex Complex::operator+(Complex& num)
{
    return Complex(this-> a+num.getA(), this-> b+num.getB());
}
//does the subtraction using pointers
Complex Complex::operator-(Complex& num)
{
    return Complex(this-> a-num.getA(), this-> b-num.getB());
}
//does the multiplication using pointers
Complex Complex::operator*(Complex& num)
{
    return Complex(this->a*num.getA()-b*num.getB(),this->b*num.getA()+a*num.getB());
}
//does the division using pointers
Complex Complex::operator/(Complex& num)
{
    return Complex((this->a*num.getA() + b*num.getB())/(num.getA()*num.getA() + num.getB()*num.getB()),
                   (this->b*num.getA() - a*num.getB())/(num.getA()*num.getA() + num.getB()*num.getB()));
}
//does the absolute value
double Complex::abs()
{
    double ABS = pow(pow(getA(), 2) + pow(getB() , 2), .5);
    return ABS;
}
//changes the oporator 
ostream& operator<<(ostream& str, Complex& num)
{
    str << num.getA() << " + " << num.getB();
    return str;
}