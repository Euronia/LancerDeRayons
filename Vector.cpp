#include <iostream>
#include "Vector.h"

 Vector::Vector()
    :
        x(0.0) ,
        y(0.0) ,
        z(0.0)
    {
    }

    Vector::Vector(float varX, float varY, float varZ)
    :
        x(varX),
        y(varY),
        z(varZ)
    {
    }

    Vector::Vector(Point &A,Point &B)
    :
        x(B.x-A.x),
        y(B.y-A.y),
        z(B.z-A.z)
    {
    }

    float Vector::getX() const
    {
        return this->x ;
    }

    float Vector::getY() const
    {
        return this->y ;
    }

    float Vector::getZ() const
    {
        return this->z ;
    }

    Vector& Vector::operator*(float k)
    {
        this->x = x*k ;
        this->y = y*k ;
        this->z = z*k ;
        return *this;
    }
