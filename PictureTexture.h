#ifndef PICTURETEXTURE_H
#define PICTURETEXTURE_H
#include "Picture.h"
#include "Texture.h"

class PictureTexture : public Texture
{
public:
    PictureTexture(Picture fond, Color c);

protected:

private:
    Picture fond;
    Color c;
};


#endif
