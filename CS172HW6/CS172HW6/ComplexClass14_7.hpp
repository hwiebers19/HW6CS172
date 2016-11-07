//
//  ComplexClass14_7.hpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef ComplexClass14_7_hpp
#define ComplexClass14_7_hpp

#include <stdio.h>
//void complexClass();
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
    
    Complex add(Complex&, Complex&);
    Complex subtract(Complex&, Complex&);
    Complex multiply(Complex&, Complex&);
    Complex divide(Complex&, Complex&);
    double abs(Complex&, Complex&);
};


#endif /* ComplexClass14_7_hpp */
