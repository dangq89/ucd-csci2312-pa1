//
// Created by Quang Dang on 2/1/16.
//

#include <iostream>
#include <cmath>

#include "Point.h"

using namespace std;

double computeArea(const Point &a, const Point &b, const Point &c) {


    double s = 0.0;     // determines the semiperameter

    a.distanceTo(b);
    a.distanceTo(c);
    c.distanceTo(b);

    s = (a.distanceTo(b) + a.distanceTo(c) + c.distanceTo(b))/2;

    return sqrt(s * ((s - a.distanceTo(b)) * (s - a.distanceTo(c)) * (s - c.distanceTo(b))));
};




