#ifndef OPTIC_H
#define OPTIC_H
#include "Texture.h"

class Optic
{

public :
    Optic();
    Optic(const Texture& t, int bright);
    Color getColor (float posX,float posY);

protected :

private :
    Texture t;
    int bright;
};

#endif
