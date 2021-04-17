#ifndef TILE_H
#define TILE_H

#include <UImanager.h>


class Tile
{
    public:
        Tile(int x, int y, Color color);
        ~Tile();

        int x, y;
        Color color;

    private:
};

#endif // TILE_H
