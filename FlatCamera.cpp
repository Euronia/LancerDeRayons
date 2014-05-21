#include "FlatCamera.h"
#include <cmath>

FlatCamera::FlatCamera(const Point& point, const Point& targettedPoint, float angA, float angB, const Vector& vertical)
:
    Camera(point,targettedPoint,angA,angB,vertical)
{
}

FlatCamera::FlatCamera(const Point& point, const Vector& direction, float angA, float angB, const Vector& vertical)
:
  Camera(point,direction,angA,angB,vertical)
{
}


FlatCamera::FlatCamera(const Point& point, const Vector& direction, float angA, float angB,const Vector& vertical,const Vector& horizon)
:
    Camera(point,direction,angA,angB,vertical,horizon)
{
}


    Rayon FlatCamera::getRayon(float u, float v)
    {
        Vector OP(direct + horizontal*u*std::tan(angleA) + vertical*v*std::tan(angleB));
        Color carriedColor(0.0,0.0,0.0);
        OP.normalize();
        Rayon result (origin,OP,carriedColor);
        return result;
    }


    void FlatCamera::lancerRayons (Picture p,const Scene& scene)
    {
        int picWidth = p.getWidth() ;
        int picHeight = p.getHeight();
        int i,j;
        Color resultColor ;
        Color * ptrPicture = p.getPictureTab();
        float u(-1.0);
        float v(-1.0);
        for (i=0;i<picHeight;++i)
        {
         //   u = u+(1.0/(picWidth/2));
            for (j=0;j<picWidth ;++j)
            {
              // v = v+(1.0/(picHeight/2));
              u = (2.0*j + 1) / picWidth -1 ;
              v =(2.0*i+1)/picHeight -1;
               resultColor = scene.lanceRayon(this->getRayon(u,v));
               //resultColor = scene.lanceRayon(Rayon(Point(0.0,0.0,0.0),Vector(1.0,0.0,0.0),Color(1.0,1.0,1.0)));
               ptrPicture[i*picWidth+j] = resultColor ;
            }
            v = -1.0 ;
        }
        p.GenerateFile();
    }
