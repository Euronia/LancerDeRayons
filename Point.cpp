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

    void Point::translate (float k, Vector &vecD)
    {
        vecD = vecD * k ;
        this->x *= vecD.getX();
        this->y *= vecD.getY();
        this->z *= vecD.getZ();
    }
