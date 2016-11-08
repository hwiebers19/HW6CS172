//
//  CircleClass14_3.hpp
//  CS172HW6
//
//  Created by Heidi Wiebers on 11/4/16.
//  Copyright © 2016 Heidi Wiebers. All rights reserved.
//

#ifndef CircleClass14_3_hpp
#define CircleClass14_3_hpp

#include <stdio.h>
int ex04();
//the circle class
//promises the compondents of the class
class Circle
{
private:
    double radius;
    static int numberOfObjects;
    
public:
    Circle();
    Circle(double);
    double getArea() const;
    double getRadius() const;
    void setRadius(double newRadius);
    static int getNumberOfObjects();
    void classTest();
    bool operator<(Circle&);
    bool operator<=(Circle&);
    bool operator==(Circle&);
    bool operator!=(Circle&);
    bool operator>(Circle&);
    bool operator>=(Circle&);
};


#endif /* CircleClass14_3_hpp */
