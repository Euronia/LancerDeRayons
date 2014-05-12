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

    Vector::Vector(const Point &A)    // Point A is supposed to be the result
    :                           // Of two points subtraction
        x(A.x),
        y(A.y),
        z(A.z)
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
    /*
    void Vector::setX(float varX)
    {
        this->x = varX ;
    }

    void Vector::setY(float varY)
    {
        this->y = varY ;
    }

    void Vector::setZ(float varZ)
    {
        this->z = varZ ;
    }
    */
    Vector& Vector::operator*(float k)
    {
        this->x = x*k ;
        this->y = y*k ;
        this->z = z*k ;
        return *this;
    }

    Vector Vector::crossProduct(Vector& vecA , Vector& vecB)
    {
        float varX , varY, varZ ;
        varX = vecA.getY()*vecB.getZ() - vecA.getZ()*vecB.getY() ;
        varY = vecA.getZ()*vecB.getX() - vecA.getX()*vecB.getZ() ;
        varZ = vecA.getX()*vecB.getY() - vecA.getY()*vecB.getX() ;
        return Vector(varX,varY,varZ);
    }

    float Vector::dotProduct(Vector& vecA , Vector& vecB)
    {
        return float(vecA.getX()*vecB.getX() + vecA.getY()*vecB.getY() + vecA.getZ()*vecB.getZ());
    }
