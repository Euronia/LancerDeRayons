#ifndef HIT_H
#define HIT_H
#include "Vector.h"
#include "Point.h"
#include "Scene_Entity.h"

class Scene_Entity;

class Hit
{

public:
    Hit();
    Hit(const Point& impactPoint, const Vector& normal, float u, float v);
    Point getImpactPoint() const;
    float getU() const;
    float getV() const;
    std::shared_ptr<Scene_Entity> getObject() const ;
    Vector getNormal() const;
    void setImpactPoint(const Point& impact);
    void setNormal(const Vector& normal);
    void setU(float u);
    void setV(float v);
    void setObject (const Scene_Entity& object);

protected:

private:
    Point impactPoint;
    Vector normal;
    std::shared_ptr<Scene_Entity> objectHitted ;
    float u;
    float v;
};

#endif
