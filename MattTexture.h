#ifndef MATTTEXTURE_H
#define MATTTEXTURE_H
#include "Color.h"
#include "Texture.h"

class MattTexture : public Texture
{
public :
    MattTexture();
    MattTexture(Color c);

protected :

private :
    Color c;
};

#endif
