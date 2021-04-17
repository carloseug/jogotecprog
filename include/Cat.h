#ifndef CAT_H
#define CAT_H

#include <Player.h>


class Cat : public Player
{
    public:
        Cat(UImanager *ui_manager);
        ~Cat();

        void Move();
        Vector2i setPos();

    protected:

};

#endif // CAT_H
