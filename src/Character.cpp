#include "Character.h"

Character::Character()
{
    //ctor
}

Character::~Character()
{
    //dtor
}

Vector2i Character::getPos()
{
    return pos;
}

void Character::Draw(RenderWindow *window)
{
    window->draw(pSprite);
}

