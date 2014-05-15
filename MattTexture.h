#ifndef MATTTEXTURE_H
#define MATTTEXTURE_H
#include "Color.h"
#include "Texture.h"

class MattTexture : public Texture
{
public :
    MattTexture();
    ~MattTexture();
    MattTexture(const Color& c);
    Color getColor (float posX,float posY);

protected :

private :
    Color c;
};

#endif
