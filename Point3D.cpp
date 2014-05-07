#include <iostream>
#include "Point3D.h"

    Point3D::Point3D()
    :
        x(0) ,
        y(0) ,
        z(0)
    {
    }

    Point3D::Point3D(int varX, int varY, int varZ)
    :
        x(varX),
        y(varY),
        z(varZ)
    {
    }
