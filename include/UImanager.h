#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <SFML/Graphics.hpp>
#include <vector>
#include <new>
#include <string>
#include <iostream>
#include <fstream>
#include <cctype>
#include <ctime>
#include <cstdlib>

using namespace sf;
using namespace std;

class UImanager
{
    public:
        //Textures background fases
        Texture background_1, background_2;
        //Textures jogadores
        Texture dog, dog_jump, dog_walk, dog_walk2, dog_fall, dog_die;
        Texture cat, cat_jump, cat_walk, cat_walk2, cat_fall, cat_die;
        //Textures inimigos
        Texture pigeon, wagon, baron;
        //Textures obstaculos
        Texture cage, trap, trash;
        //Textures Map
        Texture block0, block1, block2, block3, block4;

        UImanager();
        virtual ~UImanager();
        void Initialize();



};

#endif // UIMANAGER_H
