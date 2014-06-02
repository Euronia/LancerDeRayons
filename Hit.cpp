#include <iostream>
#include "Hit.h"
#include "Point.h"
#include "Vector.h"

Hit::Hit()
:
    impactPoint(),
    normal(),
    u(-1),
    v(-1)
{

}

Hit::Hit(const Point& impactPoint, const Vector& normal, float u, float v)
:
    impactPoint(impactPoint),
    normal(normal),
    u(u),
    v(v)
    {

    }

    Point Hit::getImpactPoint() const
    {
        return impactPoint;
    }

    float Hit::getU() const
    {
        return u;
    }

    float Hit::getV() const
    {
        return v;
    }

    Vector Hit::getNormal() const
    {
        return normal;
    }

    std::shared_ptr<Scene_Entity> Hit::getObject() const
    {
        return objectHitted ;
    }

    void Hit::setImpactPoint(const Point& impact)
    {
        impactPoint = impact ;
    }

    void Hit::setNormal(const Vector& normal)
    {
        this->normal = normal ;
    }

    void Hit::setU(float u)
    {
        this->u = u ;
    }

    void Hit::setV(float v)
    {
        this->v = v ;
    }

    void Hit::setObject(const Scene_Entity& object)
    {
        std::shared_ptr<Scene_Entity> obj(std::make_shared<Scene_Entity>(object));
        objectHitted = obj ;
    }
