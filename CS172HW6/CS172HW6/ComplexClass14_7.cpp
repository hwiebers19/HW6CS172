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
Complex::Complex()
{
    a = 0;
    b = 0;
}
Complex::Complex(double A)
{
    a = A;
}
Complex::Complex(double A, double B)
{
    a = A;
    b = B;
}
double Complex::getA()
{
    return a;
}
double Complex::getB()
{
    return b;
}

Complex Complex::operator+(Complex& num)
{
    return Complex(this-> a+num.getA(), this-> b+num.getB());
}

Complex Complex::operator-(Complex& num)
{
    return Complex(this-> a-num.getA(), this-> b-num.getB());
}

Complex Complex::operator*(Complex& num)
{
    return Complex(this->a*num.getA()-b*num.getB(),this->b*num.getA()+a*num.getB());
}

Complex Complex::operator/(Complex& num)
{
    return Complex((this->a*num.getA() + b*num.getB())/(num.getA()*num.getA() + num.getB()*num.getB()),
                   (this->b*num.getA() - a*num.getB())/(num.getA()*num.getA() + num.getB()*num.getB()));
}
double Complex::abs()
{
    double ABS = pow(pow(getA(), 2) + pow(getB() , 2), .5);
    return ABS;
}
ostream& operator<<(ostream& str, Complex& num)
{
    str << num.getA() << " + " << num.getB();
    return str;
}