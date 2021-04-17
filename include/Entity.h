#ifndef ENTITY_H
#define ENTITY_H
#include "UImanager.h"


class Entity
{
    public:
        Entity();
        virtual ~Entity();

    protected:
    int x_coord, y_coord;

};

#endif // ENTITY_H
