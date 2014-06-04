#include <cmath>
#include "Quad.h"
#include "Hit.h"


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
    Vector OA(this->a.x-rayon.getOrigin().x, this->a.y-rayon.getOrigin().y, this->a.z-rayon.getOrigin().z);
    Vector OP;
    Vector ab(this->b.x-this->a.x, this->b.y-this->a.y, this->b.z-this->a.z);
    Vector ad(this->d.x-this->a.x, this->d.y-this->a.y, this->d.z-this->a.z);
    Vector norm(crossProduct(ab,ad));
    norm.normalize();
    hit.setNormal(norm);
    OP = rayon.getDirect()*(dotProduct(OA, hit.getNormal())/dotProduct(rayon.getDirect(), hit.getNormal()));
    Point p = rayon.getDistantPoint(OP.getNorm());
    Vector bc(this->c.x-this->b.x, this->c.y-this->b.y, this->c.z-this->b.z);
    Vector cd(this->d.x-this->c.x, this->d.y-this->c.y, this->d.z-this->c.z);
    Vector da(this->a.x-this->d.x, this->a.y-this->d.y, this->a.z-this->d.z);
    Vector ap(p.x-this->a.x, p.y-this->a.y, p.z-this->a.z);
    Vector bp(p.x-this->b.x, p.y-this->b.y, p.z-this->b.z);
    Vector cp(p.x-this->c.x, p.y-this->c.y, p.z-this->c.z);
    Vector dp(p.x-this->d.x, p.y-this->d.y, p.z-this->d.z);
    Vector AB_AP = crossProduct(ab,ap);
    Vector BC_BP = crossProduct(bc,bp);
    Vector CD_CP = crossProduct(cd,cp);
    Vector DA_DP = crossProduct(da,dp);
    float PSB = dotProduct(AB_AP,BC_BP);
    float PSC = dotProduct(BC_BP,CD_CP);
    float PSD = dotProduct(CD_CP,DA_DP);

    if (PSB*PSC >= 0 && PSC*PSD >=0)
    {
        hit.setImpactPoint(p);
        hit.setU(0.5);
        hit.setV(0.5);
        return true;
    }

    return false;
}

Quad::~Quad()
{

}
