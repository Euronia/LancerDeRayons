#include <iostream>
#include "Rayon.h"


 Rayon::Rayon(const Point& origin, const Vector& direction, const Color& colorCarried)
 :
     originPoint(origin) ,
     directionalVector(direction),
     colorCarried(colorCarried)
    {
    }

Point Rayon::getDistantPoint(float k)
{
    Point distantPoint;
    distantPoint.x = this->originPoint.x + k*this->directionalVector.getX();
    distantPoint.y = this->originPoint.y + k*this->directionalVector.getY();
    distantPoint.z = this->originPoint.z + k*this->directionalVector.getZ();
    return(distantPoint);
}

