#include <iostream>
#include <fstream>
#include <math.h>
#include "Color.h"
#include "Picture.h"

using namespace std;

Picture::Picture(int x, int y)
:
   width(x),
   height(y)
{
   pictureTab = new Color[width*height];
}

Picture::~Picture()
{
    delete[] pictureTab;
}

void Picture::GenerateFile()
{
    ofstream myStream("picture.ppm");
    if(!myStream)
    {
        cout << "No such file or directory" << endl;
    }
    else
    {
        myStream << "P3" << endl;
        myStream << this->width << " " << this->height << endl;
        myStream << 255 << endl;
        for(int i=0; i<this->height; i++)
        {
            for(int j=0; j<this->width; j++)
            {
                myStream << round(this->pictureTab[i*this->height+j].r*255) << " " << round(this->pictureTab[i*this->height+j].g*255)<< " " << round(this->pictureTab[i*this->height+j].b*255) << " ";
            }
            myStream << endl;
        }
    }

}

Color * Picture::getPictureTab()
{
    return(this->pictureTab);
}
