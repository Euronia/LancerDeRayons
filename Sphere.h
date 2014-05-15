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
    Sphere(const Point& origin, float radius);
    bool pointBelongsTo (const Point& point);

protected :

private :
    Point sphereOrigin ;
    float radius ;
};


#endif // SPHERE_H

