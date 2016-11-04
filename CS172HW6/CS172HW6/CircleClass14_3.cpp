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
/*
void classTest()
{
    Circle temp;
    
    Circle arrayOfCircles[SIZE] = {Circle(3.5), Circle(2.33), Circle(9.81)};
    
    for (int i= 0; i< SIZE-1; i++)
    {
        for (int j=SIZE -1; j>0; j--)
        {
            if (arrayOfCircles[j] < arrayOfCircles[j-1])
            {
                temp = arrayOfCircles[j];
                arrayOfCircles[j] = arrayOfCircles[j-1];
                arrayOfCircles[j-1] =temp;
            }
        }
        for (int i= 0; i< SIZE; i++)
            cout << " Circle [" << i << "]: area of " <<arrayOfCircles[i].getArea() << ", radius of " <<arrayOfCircles[i].getRadius()<<endl;
    }
    
}

*/





