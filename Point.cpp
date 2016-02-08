//
// Created by Quang Dang on 2/1/16.
//
#include <iostream>
#include <cmath>
#include "Point.h"

using namespace std;

Point::Point() {    // initializing variables to zero.
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double __x, double __y, double __z) {
    x = __x;
    y = __y;
    z = __z;
}

double Point::distanceTo(const Point &dist) const{  // equation to determine the instance
    return sqrt(pow(x - dist.getX(), 2) + pow(y - dist.getY(), 2) + pow(z - dist.getZ(), 2));
}

Point::~Point() {
}

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

