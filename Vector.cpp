#include <iostream>
#include "Vector.h"
#include <math.h>

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

    Vector Vector::crossProduct(const Vector& vecA , const Vector& vecB)
    {
        float varX , varY, varZ ;
        varX = vecA.getY()*vecB.getZ() - vecA.getZ()*vecB.getY() ;
        varY = vecA.getZ()*vecB.getX() - vecA.getX()*vecB.getZ() ;
        varZ = vecA.getX()*vecB.getY() - vecA.getY()*vecB.getX() ;
        return Vector(varX,varY,varZ);
    }

    float Vector::dotProduct(const Vector& vecA , const Vector& vecB)
    {
        return float(vecA.getX()*vecB.getX() + vecA.getY()*vecB.getY() + vecA.getZ()*vecB.getZ());
    }

    float Vector::getNorm()
    {
        return(sqrt(this->x*this->x + this->y*this->y + this->z*this->z));
    }

    void Vector::normalize()
    {
        float norm(this->getNorm());
        this->x/=norm;
        this->y/=norm;
        this->z/=norm;
    }

    Vector Vector::operator+(const Vector& vec)
    {
        Vector result;
        result.x = this->x + vec.x;
        result.y = this->y + vec.y;
        result.z = this->z + vec.z;
        return(result);
    }
