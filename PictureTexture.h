#ifndef PICTURETEXTURE_H
#define PICTURETEXTURE_H
#include "Picture.h"
#include "Texture.h"

class PictureTexture : public Texture
{
public:
    PictureTexture(const Picture& fond, const Color &c);
    ~PictureTexture();
    Color getColor (float u,float v) const ;

protected:

private:
    Picture fond;
    Color c;
};


#endif
