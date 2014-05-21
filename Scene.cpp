#include <iostream>
#include "Scene.h"

Scene::Scene ()
:
    objectsTab()
{
}


Scene::Scene(const std::vector<std::shared_ptr<Scene_Entity>>& tab)
:
    objectsTab(tab)
{
}

void Scene::addEntity(std::shared_ptr<Scene_Entity> entity)
{
    objectsTab.push_back(entity);
}

Color Scene::lanceRayon(const Rayon& ray) const
{
    Color result(1.0,1.0,1.0);
    float minDist(1000.0) ;
    float dist (0.0) ;
    Hit hit ;

    for (std::vector<std::shared_ptr<Scene_Entity>>::const_iterator it = objectsTab.begin(); it != objectsTab.end() ; ++it)
    {
        if (it->get()->getGeometry()->intersect(ray,hit,dist))
        {
            if (dist<minDist)
            {
                minDist = dist ;
                result = it->get()->getOptic()->getColor(0.0,0.0);
            }

        }
    }

    return result;
}
