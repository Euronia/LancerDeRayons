#include "Binder.h"


 Binder::Binder()
 :
     objectsTab()
 {
 }

 Binder::~Binder()
 {
 }

 void Binder::setObjectTab (const std::vector<std::shared_ptr<Scene_Entity>>& objTab)
 {
    objectsTab = objTab;
 }
