#ifndef GAME_H
#define GAME_H

#include "UImanager.h"
#include <iostream>

using namespace std;
using namespace sf;


class Game
{
    public:
        Game();
        virtual ~Game();

        void Execute();

    protected:

    private:
};

#endif // GAME_H
