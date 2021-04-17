#ifndef CHARACTER_H
#define CHARACTER_H

#include <Entity.h>


class Character : public Entity
{
    public:
        int life_number;

        Character();
        virtual ~Character();
        virtual void Move() = 0;
        void Draw(RenderWindow *window);

        Vector2i getPos();
        virtual Vector2i setPos() = 0;

    protected:
        UImanager *ui_manager;
        Sprite pSprite;
        Vector2i pos = Vector2i(90, 100);
        int aux = 0, aux2 = 0;

};

#endif // CHARACTER_H
