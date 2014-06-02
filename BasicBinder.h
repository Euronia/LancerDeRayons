#ifndef BASICBINDER_H
#define BASICBINDER_H
#include "Binder.h"
#include "Hit.h"


class BasicBinder : public Binder
{
public :

    BasicBinder();
    virtual bool intersect (const Rayon& Ray, float minDist,float maxDist, Hit& hit);
    virtual bool intersect (const Rayon& Ray, float minDist,float maxDist) ;
    virtual ~BasicBinder() ;

protected :
private :


};

#endif // BASICBINDER_H
