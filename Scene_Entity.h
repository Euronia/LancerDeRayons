#ifndef SCENE_ENTITY_H
#define SCENE_ENTITY_H
#include <memory>
#include "Geometry.h"
class Geometry;

class Scene_Entity
{
public :
    Scene_Entity(const std::shared_ptr<Geometry> & geom,const std::shared_ptr<Optic>& opti);
    ~Scene_Entity();
    std::shared_ptr<Geometry> getGeometry() const;
    std::shared_ptr<Optic> getOptic() const ;

protected:

private:

    std::shared_ptr<Geometry> geometry;
    std::shared_ptr<Optic> optic ;
};

#endif
