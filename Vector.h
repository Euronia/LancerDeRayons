#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

    /*
* This class represents a Vector
* It his defined by 3 floats representing his "movement" in the 3D universe
*
    */


class Vector
{

public :
    Vector() ;
    Vector(float varX, float varY, float varZ);
    Vector(const Point& A);
    float getX() const;
    float getY() const;
    float getZ() const;
    /*
    void setX(float varX) ;
    void setY(float varY) ;
    void setZ(float varZ) ;
    */
    Vector& operator*(float k);
    Vector crossProduct(const Vector& vecA ,const Vector& vecB); // Produit vectoriel
    float dotProduct(const Vector& vecA ,const Vector& vecB); // Produit scalaire

    friend Vector operator + (const Vector &lhs, const Vector &rhs);

protected :

private :
    float x ;
    float y ;
    float z ;
};

#endif
