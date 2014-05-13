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

    bool Sphere::pointBelongsTo (Point point)
    {
      return std::pow((point.x-this->sphereOrigin.x),2)+std::pow((point.y-this->sphereOrigin.y),2)
      + std::pow((point.z-this->sphereOrigin.z),2) == std::pow(this->diameter,2) ;

    }
