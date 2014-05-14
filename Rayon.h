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
    Rayon();
    Rayon(const Vector& direction, const Point& origin);

protected :

private :
    Point originPoint ;
    Vector directionalVector ;

};

#endif
