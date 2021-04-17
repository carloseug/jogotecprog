#include "Barnyard.h"

Barnyard::Barnyard(UImanager *ui_manager)
{
    this->ui_manager = ui_manager;
    Initialize();
    //SetColMap();
}

Barnyard::~Barnyard()
{
    //dtor
}

void Barnyard::Initialize()
{
    //Setup _map with -1
    for(int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
            _map[i][j] = Vector2i (-1, -1);
    }

    //Read map.txt and setup block positions
    ifstream map1("Map1.txt");
    if(map1.is_open())
    {
        while(map1.get(c))
        {
            if(c == 'x')
                x++;

            else if(c == '\n')
            {
                x = 0;
                y++;
            }

            else if (c == '0')
            {
                _map[x][y] = Vector2i (0, 0);
                x++;
            }
            else if (c == '1')
            {
                _map[x][y] = Vector2i (1, 1);
                x++;
            }
            else if (c == '2')
            {
                _map[x][y] = Vector2i (2, 2);
                x++;
            }
            else if (c == '3')
            {
                _map[x][y] = Vector2i (3, 3);
                x++;
            }
            else if (c == '4')
            {
                _map[x][y] = Vector2i (4, 4);
                x++;
            }
        }
    }

    else cout << "Unable to open file" << endl;
}

void Barnyard::SetColMap()
{

}

void Barnyard::Draw(RenderWindow *window)
{
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if(_map[i][j] == Vector2i(0, 0))
            {
                sprite_block.setTexture(ui_manager->block0);
                sprite_block.setPosition(i* 128, j*48);
                window->draw(sprite_block);
            }
            else if(_map[i][j] == Vector2i(1, 1))
            {
                sprite_block.setTexture(ui_manager->block1);
                sprite_block.setPosition(i* 128, j*48);
                window->draw(sprite_block);
            }
            else if(_map[i][j] == Vector2i(2, 2))
            {
                sprite_block.setTexture(ui_manager->block2);
                sprite_block.setPosition(i* 128, j*48);
                window->draw(sprite_block);
            }
            else if(_map[i][j] == Vector2i(3, 3))
            {
                sprite_block.setTexture(ui_manager->block3);
                sprite_block.setPosition(i* 128, j*48);
                window->draw(sprite_block);
            }
            else if(_map[i][j] == Vector2i(4, 4))
            {
                sprite_block.setTexture(ui_manager->block4);
                sprite_block.setPosition(i* 128, j*48);
                window->draw(sprite_block);
            }
        }
    }

}

void Barnyard::ColliderManager(RenderWindow *window, Dog *player1)
{

}
