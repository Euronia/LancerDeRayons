#ifndef TEXTURE_H
#define TEXTURE_H
#include "Color.h"
#include "Optic.h"

class Texture : public Optic
{
public :

 virtual Color getColor (float posX,float posY);

protected :

private :

};

#endif
