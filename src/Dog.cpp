#include "Dog.h"

Dog::Dog(UImanager *ui_manager)
{

    this->ui_manager = ui_manager;
    pSprite.setTexture(ui_manager->dog);
    setPos();
}

Dog::~Dog()
{
    //dtor
}

Vector2i Dog::setPos()
{
    pSprite.setPosition(pos.x, pos.y);
}

void Dog::Move()
{
    if(pos.y <= 120)
        aux = 1;

    if (pos.y == 320)
    {
        aux = 0;
        pSprite.setTexture(ui_manager->dog);
    }

    if(pos.y < 320)
    {
        pos.y += 1;
        pSprite.setTexture(ui_manager->dog_fall);
    }

    if(Keyboard::isKeyPressed(Keyboard::Left))
    {
        pos.x -= 1;
        aux2++;
        if(aux2 % 4 == 0)
            pSprite.setTexture(ui_manager->dog_walk);
        else
            pSprite.setTexture(ui_manager->dog_walk2);
    }

    if(Keyboard::isKeyPressed(Keyboard::Right))
    {
        pos.x += 1;
        aux2++;
        if(aux2 % 4 == 0)
            pSprite.setTexture(ui_manager->dog_walk);
        else
            pSprite.setTexture(ui_manager->dog_walk2);
    }

    if(Keyboard::isKeyPressed(Keyboard::Up) && aux == 0)
    {
        pSprite.setTexture(ui_manager->dog_jump);
        pos.y -= 2.2;
    }

    setPos();
}

