#ifndef SPHERE_H
#define SPHERE_H
#include "Point.h"
#include "Geometry.h"
    /*
*  This class represent a sphere
*  It herits from the Geometry class
    */

class Sphere : public Geometry
{
public :
    Sphere();
    ~Sphere();
    Sphere(const Point& origin, float radius);
    bool intersect(const Rayon &rayon, float dist) const ;
    bool intersect(const Rayon &rayon, Hit &hit, float dist) const ;


protected :

private :
    Point sphereOrigin ;
    float radius ;
};


#endif // SPHERE_H

