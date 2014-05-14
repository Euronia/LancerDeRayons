#include <iostream>
#include "Scene.h"
#include "Geometry.h"

Scene::Scene ()
:
    objectsTab()
{
}


Scene::Scene(const std::vector<std::shared_ptr<Geometry>>& tab)
:
    objectsTab(tab)
{
}
