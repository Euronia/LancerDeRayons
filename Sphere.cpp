#include <iostream>
#include <cmath>
#include "Point.h"
#include "Sphere.h"
#include "Util.h"

   Sphere::Sphere(const Point& origin,float radius)
    :
        sphereOrigin(origin),
        radius(radius)
        {
        }

    Sphere::~Sphere()
    {
    }

    bool Sphere::intersect(const Rayon &rayon, float dist) const
    {
        Vector OC(sphereOrigin-rayon.getOrigin());
        float k(dotProduct(OC,rayon.getDirect()));
        float h(dotProduct(OC,OC) - k*k);
        if (h <= radius*radius)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

     bool Sphere::intersect(const Rayon &rayon, Hit &hit, float dist) const
     {
        Vector OC(sphereOrigin-rayon.getOrigin());
        float k(dotProduct(OC,rayon.getDirect()));
        float h(dotProduct(OC,OC) - k*k);
        float radiusSquare = radius*radius ;
        if (h <= radiusSquare)
        {
            float teta = sqrt(radiusSquare-h);
            hit.setImpactPoint(rayon.getDistantPoint(k-teta));
            hit.setNormal(Vector(hit.getImpactPoint()-sphereOrigin));
            hit.setU(0.0);
            hit.setV(0.0);
            return true;
        }
        else
        {
            return false;
        }
     }

