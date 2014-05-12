#ifndef OPTIC_H
#define OPTIC_H
#include "Texture.h"

class Optic
{

public :
    Optic();
    Optic(const Texture& t, int bright);

protected :

private :
    Texture t;
    int bright;
};

#endif
