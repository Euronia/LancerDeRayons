#include <iostream>
#include "Scene.h"
#include "Geometry.h"

Scene::Scene ()
:
    objectsTab()
{
}


Scene::Scene(const std::vector<Geometry>& tab)
:
    objectsTab(tab)
{
}
