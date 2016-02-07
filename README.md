## CSCI 2312: Programming Assignment 1

_working with objects_

* * *

```c++
//point.h
#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    double __x, __y, __z;  // co-ordinate z added

public:
    // Constructors
    Point(): Point(0,0,0){}; //default constructors
        // default constructor
    Point(double x, double y, double z): __x(x),__y(y),__z(z){};// three argument constructor
    double distanceTo(const Point &point) const; // Added member function

    //destructor
    ~Point(){};

    // Mutator methods
  inline  void setX(double newX){__x = newX;}
  inline  void setY(double newY){__y = newY;}
  inline  void setZ(double newZ){__z = newZ;}

    // Accessor methods
   inline double getX() const {return __x;}
   inline double getY() const {return __y;}
   inline double getZ() const {return __z;}
};

#endif // __POINT_H

```
//Point.cpp

```
#include "Point.h"
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//Public memberfunction definition
double Point:: distanceTo(const Point &other) const {
double dist;
Point p;            // Calls Point::Point(). Notice the lack of parentheses!
dist = sqrt(pow(other.getX()-p.getX()),2) + pow(other.getY()-p.getY()),2) +pow(other.getZ()-p.getZ()),2)); // dist formula in 3D
return dist;
```

   ```c++
   #include "Point.h"
   #include <cmath>
   #include <iostream>
   #include <iomanip>
   ```

   ```c++
   double S;
    double AB,BC,AC;
    double area;
    AB = sqrt(pow(a.getX()-b.getX(),2)+pow(a.getY()-b.getY(),2)+pow(a.getZ()-b.getZ(),2)); // claculates distance AB
    BC = sqrt(pow(b.getX()-c.getX(),2)+pow(b.getY()-c.getY(),2)+pow(b.getZ()-c.getZ(),2)); // calculates distance BC
    AC = sqrt(pow(a.getX()-c.getX(),2)+pow(a.getY()-c.getY(),2)+pow(a.getZ()-c.getZ(),2)); // calculates distance AC
    S = (AB+BC+AC)/2;
    area = sqrt(S*(S-AB)*(S-BC)*(S-AC)); // Heron's formula
    cout<<fixed<<setprecision(2)<<area<<endl;
    return area;
};
   ```

  


cmake_minimum_required(VERSION 3.3)
project(ucd_csci2312_pa1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        main.cpp
        area.cpp
        Point.cpp
        Point.h
        PointTests.h
        PointTests.cpp
        ErrorContext.cpp
        ErrorContext.h)

add_executable(ucd_csci2312_pa1 ${SOURCE_FILES})
```

  
   ```
./ucd_csci2312_pa1
```

  

  
