#ifndef FLATCAMERA
#define FLATCAMERA
#include "Camera.h"
#include "Scene.h"

class FlatCamera : public Camera
{
public :
    FlatCamera(const Point& point, const Point& targettedPoint, float angA, float angB, const Vector& vertical);
    FlatCamera(const Point& point, const Vector& direction, float angA, float angB, const Vector& vertical);
    FlatCamera(const Point& point, const Vector& direction, float angA, float angB,const Vector& vertical,const Vector& horizon);
    Rayon getRayon(float u, float v);
    void lancerRayons (Picture& p, const Scene& scene);

protected :

private :

};

#endif // FLATCAMERA
