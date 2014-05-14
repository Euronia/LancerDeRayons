#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
#include "Point.h"
#include "Vector.h"


class Camera
{
public:
    Camera(const Point& point, const Vector& vec, int angA, int angB);

    virtual Rayon getRayon(float u, float v) = 0;

protected:

private:
    Point origin;
    Vector direct;
    int angleA , angleB ;

    // no code
    Camera();

};
#endif
