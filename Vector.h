#ifndef VECTOR_H
#define VECTOR_H
#include "Point.h"

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
    Vector crossProduct(Vector vecA , Vector vecB); // Produit vectoriel
    float dotProduct(Vector vecA , Vector vecB); // Produit scalaire

protected :

private :
    float x ;
    float y ;
    float z ;
};

#endif
