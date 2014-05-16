#ifndef RAYON_H
#define RAYON_H
#include "Point.h"
#include "Vector.h"

    /*
* This class represents a ray
* It is represented by his origin point and his directional vector
*
    */

class Rayon {

public :
    Rayon(const Point& origin, const Vector& direction);

protected :

private :
    Point originPoint ;
    Vector directionalVector ;

};

#endif
