#include "UImanager.h"

UImanager::UImanager()
{
   Initialize();
}

UImanager::~UImanager()
{
    //dtor
}

void UImanager::Initialize()
{
    //INICIALIZA TODAS AS TEXTURAS
    //backgrounds
    background_1.loadFromFile("img/png/BG/BG.png");

    //dog
    dog.loadFromFile("img/png/Tiles/dog/dog.png");
    dog_jump.loadFromFile("img/png/Tiles/dog/jump.png");
    dog_walk.loadFromFile("img/png/Tiles/dog/walk1.png");
    dog_walk2.loadFromFile("img/png/Tiles/dog/walk2.png");
    dog_fall.loadFromFile("img/png/Tiles/dog/fall.png");
    dog_die.loadFromFile("img/png/Tiles/dog/die.png");

    //cat
    cat.loadFromFile("img/png/Tiles/cat/cat.png");
    cat_jump.loadFromFile("img/png/Tiles/cat/jump.png");
    cat_walk.loadFromFile("img/png/Tiles/cat/walk1.png");
    cat_walk2.loadFromFile("img/png/Tiles/cat/walk2.png");
    cat_fall.loadFromFile("img/png/Tiles/cat/fall.png");
    cat_die.loadFromFile("img/png/Tiles/cat/die.png");

    //map1 blocks
    block0.loadFromFile("img/png/Tiles/0.png");
    block1.loadFromFile("img/png/Tiles/1.png");
    block2.loadFromFile("img/png/Tiles/2.png");
    block3.loadFromFile("img/png/Tiles/3.png");
    block4.loadFromFile("img/png/Tiles/4.png");
}
