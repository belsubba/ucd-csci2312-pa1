//area.cpp
// Created by Bel Subba on 1/30/2016.

#include "Point.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


double computeArea(const Point &a,const Point &b, const Point &c){
    double S;
    double AB,BC,AC;
    double area;
    AB = sqrt(pow(a.getX()-b.getX(),2)+pow(a.getY()-b.getY(),2)+pow(a.getZ()-b.getZ(),2));
    BC = sqrt(pow(b.getX()-c.getX(),2)+pow(b.getY()-c.getY(),2)+pow(b.getZ()-c.getZ(),2));
    AC = sqrt(pow(a.getX()-c.getX(),2)+pow(a.getY()-c.getY(),2)+pow(a.getZ()-c.getZ(),2));
    S = (AB+BC+AC)/2;
    area = sqrt(S*(S-AB)*(S-BC)*(S-AC));
    cout<<fixed<<setprecision(2)<<area<<endl;
    return area;
}




