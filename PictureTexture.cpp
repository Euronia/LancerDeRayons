#include <iostream>
#include "PictureTexture.h"
#include "Color.h"
#include "Picture.h"

PictureTexture::PictureTexture(const Picture& pict, const Color& color)
:
    fond(pict),
     c(color)
{
}

PictureTexture::~PictureTexture()
{
}
