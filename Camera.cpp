#include <iostream>
#include "Camera.h"
#include "Point.h"
#include "Vector.h"

Camera::Camera(const Point& point, const Point& targettedPoint, float angA, float angB, const Vector& vertical)
:
    origin(point),
    direct(targettedPoint - point),
    angleA(angA),
    angleB(angB),
    vertical(vertical)
{
}

Camera::Camera(const Point& point, const Vector& direction, float angA, float angB, const Vector& vertical)
:
    origin(point),
    direct(direction),
    angleA(angA),
    angleB(angB),
    vertical(vertical)
{
    // normaliser direction
    // normaliser vertical
    // calculer horizontale
}


Camera::Camera(const Point& point, const Vector& direction, float angA, float angB,const Vector& vertical,const Vector& horizon)
:
    origin(point),
    direct(direction),
    angleA(angA),
    angleB(angB),
    vertical(vertical),
    horizontal(horizon)
{
    // normaliser direction
    // normaliser vertical
    // calculer horizontale
}

Camera::~Camera()
{
}
