#include <iostream>
#include "Point.h"
#include "Vector.h"

    Point::Point()
    :
        x(0.0) ,
        y(0.0) ,
        z(0.0)
    {
    }

    Point::Point(float varX, float varY, float varZ)
    :
        x(varX),
        y(varY),
        z(varZ)
    {
    }

    Point& Point::operator-= (const Point& point)
    {
        this->x -= point.x ;
        this->y -= point.y ;
        this->z -= point.z ;
        return *this;
    }

      Point Point::operator- (const Point& pointA)
     {
         return Point( this->x - pointA.x , this->y -pointA.y, this->z -pointA.z) ;
     }

    void Point::translate (const Vector& vecD)
    {
        this->x += vecD.getX();
        this->y += vecD.getY();
        this->z += vecD.getZ();
    }
