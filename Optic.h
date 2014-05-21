#ifndef OPTIC_H
#define OPTIC_H
#include "Color.h"

class Optic
{

public :
    Optic();
    virtual ~Optic();
    virtual Color getColor (float posX,float posY) const = 0;

protected :

private :
};

#endif
