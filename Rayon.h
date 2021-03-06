#ifndef RAYON_H
#define RAYON_H
#include "Point.h"
#include "Vector.h"
#include "Color.h"

    /*
* This class represents a ray
* It is represented by his origin point and his directional vector
*
    */

class Rayon {

public :
    Rayon(const Point& origin, const Vector& direction, const Color& colorCarried);
    Point getDistantPoint(float k) const;
    Point getOrigin() const;
    Vector getDirect() const;
protected :

private :
    Point originPoint ;
    Vector directionalVector ;
    Color colorCarried;


};

#endif
