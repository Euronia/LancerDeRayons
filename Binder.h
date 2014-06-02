#ifndef BINDER_H
#define BINDER_H
#include "Scene_Entity.h"
#include <memory>
#include <vector>


class Binder
{
public :

    Binder();
    virtual bool intersect (const Rayon& Ray, float minDist,float maxDist, Hit& hit) = 0 ;
    virtual bool intersect (const Rayon& Ray, float minDist,float maxDist) = 0 ;
    void setObjectTab (const std::vector<std::shared_ptr<Scene_Entity>>& objTab);
    virtual ~Binder() ;

protected :

    std::vector<std::shared_ptr<Scene_Entity>> objectsTab ;
private :


};

#endif
