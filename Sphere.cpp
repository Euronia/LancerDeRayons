#include <iostream>
#include <cmath>
#include "Point.h"
#include "Sphere.h"
#include "Util.h"

    Sphere::Sphere()
    :
        sphereOrigin(),
        diameter(0.0)
        {
        }

    Sphere::Sphere(const Optic& o)
    :
        Geometry(o)
    {

    }

   Sphere::Sphere(const Optic& o,const Point& origin,float diamet)
    :
        Geometry(o),
        sphereOrigin(origin),
        diameter(diamet)
        {
        }

    bool Sphere::pointBelongsTo (const Point& point)
    {
      return std::pow((point.x-sphereOrigin.x),2)+std::pow((point.y-sphereOrigin.y),2)
      + std::pow((point.z-sphereOrigin.z),2) == std::pow(diameter,2) ;

    }
