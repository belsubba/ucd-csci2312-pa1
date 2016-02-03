//Point.cpp


#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//Public member Function
double Point:: distanceTo(const Point &other) const {
    double dist;
    Point p;
    dist = sqrt(pow((other.getX()-p.getX()),2) +pow(other.getY()-p.getZ(),2)+pow(other.getZ()-p.getZ(),2));
    return dist;
}





