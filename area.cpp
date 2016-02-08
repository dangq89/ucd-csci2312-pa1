//
// Created by Quang Dang on 2/1/16.
//

#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c) {    // Function parameters reference to point


    double s = 0.0;

    a.distanceTo(b);    // Determines the distance from A to B
    a.distanceTo(c);    // Determines the distance from A to C
    c.distanceTo(b);    // Determines the distance from C to B

    s = (a.distanceTo(b) + a.distanceTo(c) + c.distanceTo(b))/2;    // Determines the semiperameter

    // Returns the area of triangle
    return sqrt(s * ((s - a.distanceTo(b)) * (s - a.distanceTo(c)) * (s - c.distanceTo(b))));
};




