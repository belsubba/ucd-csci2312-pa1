// A 3-dimensional point class!
// Coordinates are double-precision floating point.
//Point.h file

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
