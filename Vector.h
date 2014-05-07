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
    Vector& operator*(float k);

protected :

private :
    float x ;
    float y ;
    float z ;
};

#endif
