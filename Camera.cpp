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
   direct.normalize();
   this->vertical.normalize();
   horizontal = crossProduct(direct,vertical);
}


Camera::Camera(const Point& point, const Vector& direction, float angA, float angB,const Vector& vertical,const Vector& horizon)
:
    origin(point),
    direct(direction),
    angleA(angA/360*2*3.14159),
    angleB(angB/360*2*3.14159),
    vertical(vertical),
    horizontal(horizon)
{
   direct.normalize();
   this->vertical.normalize();
   this->horizontal.normalize();
}

Camera::~Camera()
{
}
