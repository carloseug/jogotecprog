#ifndef GAMEMAPS_H
#define GAMEMAPS_H

#include "Entity.h"

class GameMaps
{
    public:
        GameMaps();
        virtual ~GameMaps();

        void Initialize();
        void Draw(RenderWindow *window);
        void ColliderManager();

    protected:
        UImanager *ui_manager;
        Sprite sprite_block;
        Sprite background;
        Vector2i _map[100][100];

        int x = 0, y = 0;
        char c;

    private:
};

#endif // GAMEMAPS_H
