#include <iostream>
#include <cmath>
#include "Sphere.h"
#include "Hit.h"

   Sphere::Sphere(const Point& origin,float radius)
    :
        sphereOrigin(origin),
        radius(radius)
        {
        }

    Sphere::~Sphere()
    {
    }

    bool Sphere::intersect(const Rayon &rayon, float& dist) const
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

     bool Sphere::intersect(const Rayon &rayon, Hit &hit, float& dist) const
     {
        const float m_Pi = 3.14159265358979323846;
        Vector OC(sphereOrigin-rayon.getOrigin());
        float k(dotProduct(OC,rayon.getDirect()));
        float h(dotProduct(OC,OC) - k*k);
        float radiusSquare = radius*radius ;
        if (h <= radiusSquare)
        {
            float delta = sqrt(radiusSquare-h);
            hit.setImpactPoint(rayon.getDistantPoint(k-delta));
            dist = k-delta ;
            if (dist <0)
            {
                return false ;
            }
            Vector  normal(hit.getImpactPoint()-sphereOrigin);
            normal.normalize();
            hit.setNormal(normal);
            hit.setV( (hit.getImpactPoint().z -  (sphereOrigin.z - radius)) / (2*radius) );
            Vector A (radius,0.0,0.0);
            Vector B (hit.getImpactPoint().x-sphereOrigin.x,hit.getImpactPoint().y-sphereOrigin.y,0.0);
            A.normalize();
            B.normalize();
            float cosAlpha = dotProduct(A,B) ;
            float alphaAlpha = acos(cosAlpha) ;
            float alpha ;
            if (B.getY() >0)
            {
               alpha = alphaAlpha;
            }
            else
            {
                alpha = 2*m_Pi - alphaAlpha ;
            }
            hit.setU(alpha/(2*m_Pi));
            return true;
        }
        else
        {
            return false;
        }
     }

