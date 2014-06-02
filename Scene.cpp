#include <iostream>
#include "Scene.h"

Scene::Scene (const std::shared_ptr<Binder> binde)
:
    binder(binde),
    objectsTab(),
    lightsTab()
{
}


Scene::Scene(const std::shared_ptr<Binder> binde, const std::vector<std::shared_ptr<Scene_Entity>>& entityTab, const std::vector<std::shared_ptr<LightSource>>& lightTab)
:
    binder(binde),
    objectsTab(entityTab),
    lightsTab(lightTab)
{
}

void Scene::addEntity(std::shared_ptr<Scene_Entity> entity)
{
    objectsTab.push_back(entity);
}

void Scene::addLight(std::shared_ptr<LightSource> light)
{
    lightsTab.push_back(light);
}

void Scene::addObjectsTabToBinder() const
{
    binder->setObjectTab(objectsTab) ;
}

std::vector<std::shared_ptr<LightSource>> Scene::getLight () const
{
    return lightsTab ;
}

Color Scene::lanceRayon(const Rayon& ray, int iteration) const
{
    this->addObjectsTabToBinder();
    Color result(0.0,0.0,0.0);
    float minDist(1000.0) ;
    float dist (0.0) ;
    Hit hit ;

    if (binder->intersect(ray,0.0,100.0,hit))
    {
        //result = hit.getObject()->getOptic()->getColor(hit.getU(),hit.getV());
        //result = hit.getObject()->getOptic()->getColor(0.5,0.5);


    Color coulObj(hit.getObject()->getOptic()->getColor(hit.getU(),hit.getV()));
    for ( std::vector<std::shared_ptr<LightSource>>::const_iterator it = lightsTab.begin(); it != lightsTab.end() ; ++it)
   // pour chaque source
    {

        //d = calcul distance point intersection source
        Vector directi(it->get()->getOrigin()-hit.getImpactPoint());
        float distInterSource = directi.getNorm() ;
        directi.normalize();
        //initialiser Ray : point intersect, direction(point intersect, source), couleur = on s'en fout
        Color c(0.0,0.0,0.0);
        Color resultNorm(0.0,0.0,0.0);
        Rayon ray(hit.getImpactPoint(),directi,c);

        if (! binder->intersect(ray, 0, distInterSource))
        {
            Color diff(it->get()->getColor()*coulObj*(dotProduct(hit.getNormal(),ray.getDirect())));
            Vector moinsV(-directi.getX(),-directi.getY(),-directi.getZ());
            Vector miroirV(moinsV + hit.getNormal()*(2*(dotProduct(directi,hit.getNormal()))));
            //Vmir = V symétrique par rapport à N
            //spec = coulspec(obj)* (tronquerAZero(RayS.Vmir))^n * coul(source)
            Color spec(it->get()->getColor()*coulObj*dotProduct(ray.getDirect(),miroirV));
             resultNorm = diff + spec ;
             if ( iteration < 2)
             {
               //Res2 = influence rayon réfléchi
                Rayon reflected(hit.getImpactPoint(),miroirV,c);
                Color reflectedColor(0.0,0.0,0.0);
                reflectedColor = this->lanceRayon(reflected,iteration+1);
                //return pourcent1*Res + ourcent2*Res2
                result = resultNorm*0.8 + reflectedColor*0.2 ;
             }
             else
             {
                 result = resultNorm ;
             }

        }

    }
    }
    return result;
}



