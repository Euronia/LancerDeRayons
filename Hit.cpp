#include <iostream>
#include "Hit.h"
#include "Point.h"
#include "Vector.h"

Hit::Hit(const Point& impactPoint, const Vector& normal, float u, float v)
:
    impactPoint(impactPoint),
    normal(normal),
    u(u),
    v(v)
    {

    }
