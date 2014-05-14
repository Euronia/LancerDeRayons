#include <iostream>
#include "Rayon.h"

 Rayon::Rayon()
 :
     directionalVector(),
     originPoint()
     {
     }

 Rayon::Rayon(const Vector& vec, const Point& point)
 :
     directionalVector(vec) ,
     originPoint(point)
    {
    }
