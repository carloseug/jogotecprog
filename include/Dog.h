#ifndef DOG_H
#define DOG_H

#include <Player.h>


class Dog : public Player
{
    public:
        Dog(UImanager *ui_manager);
        ~Dog();

        void Move();
        Vector2i setPos();

    protected:

};

#endif // DOG_H
