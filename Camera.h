#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
#include "Point.h"
#include "Vector.h"
#include "Rayon.h"
#include "Picture.h"
#include "Scene.h"



class Camera
{
public:
    Camera(const Point& point, const Point& targettedPoint, float angA, float angB, const Vector& vertical);
    Camera(const Point& point, const Vector& direction, float angA, float angB, const Vector& vertical);
    Camera(const Point& point, const Vector& direction, float angA, float angB,const Vector& vertical,const Vector& horizon);
    ~Camera();
    virtual Rayon getRayon(float u, float v) = 0;
    virtual void lancerRayons (Picture& p, const Scene& scene) = 0;

protected:

    Point origin;
    Vector direct;
    float angleA , angleB ;
    Vector vertical;
    Vector horizontal;

private:

    // no code
    Camera();

};
#endif
