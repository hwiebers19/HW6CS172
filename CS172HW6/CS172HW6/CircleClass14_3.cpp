//
//  CircleClass14_3.cpp
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
#include "CircleClass14_3.hpp"

int Circle::numberOfObjects=0;

//construct a circle object
Circle::Circle()
{
    radius=1;
    numberOfObjects++;
}

//construct a circle object
Circle::Circle(double NewRadius)
{
    radius=NewRadius;
    numberOfObjects++;
}

//Return the area of the circle
double Circle::getArea() const
{
    return radius * radius * 3.14159;
}

//Return the radius of this circle
double Circle::getRadius() const
{
    return radius;
}

//Set a new radius
void Circle::setRadius(double newRadius)
{
    radius= (newRadius >= 0) ? newRadius:0;
}

//Return the number of circle objects
int Circle::getNumberOfObjects()
{
    return numberOfObjects;
}
//returns if circle is less than
bool Circle::operator<(Circle& c)
{
    if(getRadius() < c.getRadius())
        return true;
    else
        return false;
}
//returns if circle is less than or equal
bool Circle::operator<=(Circle& c)
{
    if(getRadius() <= c.getRadius())
        return true;
    else
        return false;
}
//returns if circle is equal
bool Circle::operator==(Circle& c)
{
    if(getRadius() == c.getRadius())
        return true;
    else
        return false;
}
//returns if circle is not equal
bool Circle::operator!=(Circle& c)
{
    if(getRadius() != c.getRadius())
        return true;
    else
        return false;
}
//returns if circle is greater than
bool Circle::operator>(Circle& c)
{
    if(getRadius() > c.getRadius())
        return true;
    else
        return false;
}
//returns if circle is greater than or equal 
bool Circle::operator>=(Circle& c)
{
    if(getRadius() >= c.getRadius())
        return true;
    else
        return false;
}





