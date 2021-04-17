#include "Cat.h"

Cat::Cat(UImanager *ui_manager)
{
    this->ui_manager = ui_manager;
    pSprite.setTexture(ui_manager->cat);
    setPos();
}

Cat::~Cat()
{
    //dtor
}

Vector2i Cat::setPos()
{
    pSprite.setPosition(pos.x + 60, pos.y);
}

void Cat::Move()
{
    if(pos.y <= 120)
        aux = 1;

    if(pos.y < 320)
    {
        pos.y += 1;
        pSprite.setTexture(ui_manager->cat_fall);
    }

    if (pos.y == 320)
    {
        aux = 0;
        pSprite.setTexture(ui_manager->cat);
    }

    if(Keyboard::isKeyPressed(Keyboard::A))
    {
        pos.x -= 1;
        aux2++;
        if(aux2 % 4 == 0)
            pSprite.setTexture(ui_manager->cat_walk);
        else
            pSprite.setTexture(ui_manager->cat_walk2);
    }

    if(Keyboard::isKeyPressed(Keyboard::D))
    {
        pos.x += 1;
        aux2++;
        if(aux2 % 4 == 0)
            pSprite.setTexture(ui_manager->cat_walk);
        else
            pSprite.setTexture(ui_manager->cat_walk2);
    }

    if(Keyboard::isKeyPressed(Keyboard::W) && aux == 0)
    {
        pos.y -= 2.2;
        pSprite.setTexture(ui_manager->cat_jump);
    }

    setPos();
}
