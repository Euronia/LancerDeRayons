#include <iostream>
#include "Hit.h"
#include "Point.h"
#include "Vector.h"

Hit::Hit()
:
    impactPoint(),
    normal(),
    u(-1),
    v(-1)
{

}

Hit::Hit(const Point& impactPoint, const Vector& normal, float u, float v)
:
    impactPoint(impactPoint),
    normal(normal),
    u(u),
    v(v)
    {

    }

    Point Hit::getImpactPoint() const
    {
        return impactPoint;
    }

    void Hit::setImpactPoint(const Point& impact)
    {
        impactPoint = impact ;
    }

    void Hit::setNormal(const Vector& normal)
    {
        this->normal = normal ;
    }

    void Hit::setU(float u)
    {
        u = u ;
    }

    void Hit::setV(float v)
    {
        v = v ;
    }
