#include <iostream>
#include "Hit.h"
#include "Point.h"
#include "Vector.h"

Hit::Hit(Point impactPoint, Vector normal, Vector u, Vector v)
:
    impactPoint(impactPoint),
    normal(normal),
    u(u),
    v(v)
    {

    }
