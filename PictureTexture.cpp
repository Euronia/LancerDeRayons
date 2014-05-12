#include <iostream>
#include "PictureTexture.h"
#include "Color.h"
#include "Picture.h"

PictureTexture::PictureTexture(Picture pict, Color color)
:
    c(color),
    fond(pict)
{

}


