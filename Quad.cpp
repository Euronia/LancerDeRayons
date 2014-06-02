#include <iostream>
#include <cmath>
#include "Quad.h"
#include "Hit.h"

using namespace std;

Quad::Quad(const Point& a, const Point& b, const Point& c, const Point& d)
:
    a(a),
    b(b),
    c(c),
    d(d)
{
}

bool Quad::intersect(const Rayon &rayon, float& dist) const
{
    return true;
}

bool Quad::intersect(const Rayon& rayon, Hit& hit, float& dist) const
{
    Vector OA(a.x-rayon.getOrigin().x, a.y-rayon.getOrigin().y,a.z-rayon.getOrigin().z);
    Vector OP;
    Vector ab(this->b.x-this->a.x, this->b.y-this->a.y, this->b.z-this->a.z);
    Vector ad(this->d.x-this->a.x, this->d.y-this->a.y, this->d.z-this->a.z);
    hit.setNormal(crossProduct(ab,ad));
    OP = rayon.getDirect()*(dotProduct(OA, hit.getNormal())/dotProduct(rayon.getDirect(), hit.getNormal()));
    Point p = rayon.getDistantPoint(OP.getNorm());
    Vector bc(this->c.x-this->b.x, this->c.y-this->b.y, this->c.z-this->b.z);
    Vector cd(this->d.x-this->c.x, this->d.y-this->c.y, this->d.z-this->c.z);
    Vector da(this->a.x-this->d.x, this->a.y-this->d.y, this->a.z-this->d.z);
    Vector ap(p.x-this->a.x, p.y-this->a.y, p.z-this->a.z);
    Vector bp(p.x-this->b.x, p.y-this->b.y, p.z-this->b.z);
    Vector cp(p.x-this->c.x, p.y-this->c.y, p.z-this->c.z);
    Vector dp(p.x-this->d.x, p.y-this->d.y, p.z-this->d.z);

    if (abs(dotProduct(crossProduct(ab,ap),crossProduct(bc,bp))) == crossProduct(ab,ap).getNorm()*crossProduct(bc,bp).getNorm() &&
        abs(dotProduct(crossProduct(bc,bp),crossProduct(cd,cp))) == crossProduct(bc,bp).getNorm()*crossProduct(cd,cp).getNorm() &&
        abs(dotProduct(crossProduct(cd,cp),crossProduct(da,dp))) == crossProduct(cd,cp).getNorm()*crossProduct(da,dp).getNorm())
    {
        hit.setU(0.5);
        hit.setV(0.5);
        return true;
    }

    return false;
}

Quad::~Quad()
{

}
