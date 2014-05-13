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
    Sphere(const Optic& o) ;
    Sphere(const Optic& o, const Point& origin, float diamet);
    bool pointBelongsTo (Point point);

protected :

private :
    Point sphereOrigin ;
    float diameter ;
};


#endif // SPHERE_H

