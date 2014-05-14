#include <iostream>
#include "Camera.h"
#include "Point.h"
#include "Vector.h"

Camera::Camera()
:
    origin(),
    direct(),
    angleA(0),
    angleB(0)
{
}


Camera::Camera(const Point& point, const Vector& vec, int angA, int angB)
:
    origin(point),
    direct(vec),
    angleA(angA),
    angleB(angB)
{
    // normaliser direction
    // normaliser vertical
    // calculer horizontale
}
