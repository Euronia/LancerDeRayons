#include "BasicBinder.h"

 BasicBinder::BasicBinder()
 {
 }

 bool BasicBinder::intersect (const Rayon& ray, float minDist,float maxDist, Hit& hit)
  {
     float dist ;
     float minimum(1000.0) ;
     Hit tmp ;
     bool isHit(false) ;
     for (std::vector<std::shared_ptr<Scene_Entity>>::const_iterator it = objectsTab.begin(); it != objectsTab.end() ; ++it)
        {
            if (it->get()->getGeometry()->intersect(ray,tmp,dist))
            {
                if (dist<minimum && dist>minDist && dist<maxDist )
                {
                    minimum = dist ;
                    maxDist = dist ;
                    hit = tmp ;
                    hit.setObject(*(it->get()));
                    isHit = true ;
                }

            }
        }
    return isHit ;
  }

  BasicBinder::~BasicBinder()
  {
  }

   bool BasicBinder::intersect(const Rayon& ray, float minDist, float maxDist)
   {
       Hit tmp ;
       float dist(0.0) ;
         for (std::vector<std::shared_ptr<Scene_Entity>>::const_iterator it = objectsTab.begin(); it != objectsTab.end() ; ++it)
        {
            if (it->get()->getGeometry()->intersect(ray,tmp,dist))
            {
                if (dist<maxDist && dist>minDist)
                {
                return true ;
                }
            }
        }
        return false;
   }
