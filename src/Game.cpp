#include "Game.h"
#include "Dog.h"
#include "Cat.h"
#include "Barnyard.h"

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game:: Execute(){
        //inicializa gerenciador de interface
        Vector2i screenDimensions(980, 540);
        Vector2i blockDimensions(125, 125);
        UImanager ui_manager;
        ui_manager.Initialize();

        //inicializa janela e sprites
        RenderWindow window(VideoMode(screenDimensions.x, screenDimensions.y, 8U), "Saltimbancos++");
        window.setKeyRepeatEnabled(false);
        Sprite background(ui_manager.background_1);

        Dog player_one(&ui_manager);
        Cat player_two(&ui_manager);
        Barnyard barnyard(&ui_manager);

        View view;
        view.reset(FloatRect(0, 0, 980, 540));
        view.setViewport(FloatRect(0, 0, 1.0f, 1.0f));

        //inicializa loop que roda o jogo
        while(window.isOpen())
        {
            Event event;

            while(window.pollEvent(event))
            {
                if(event.type == Event::Closed)
                window.close();
            }
            //set scrolling screen on player1
            view.setCenter((player_one.getPos().x + player_two.getPos().x)/2 + 120,
            (player_one.getPos().y + player_two.getPos().y)/2 - 60);
            window.setView(view);

            window.clear(Color(10, 200, 200));
            //window.draw(background);
            barnyard.Draw(&window);
            player_one.Move();
            player_two.Move();
            player_one.Draw(&window);
            player_two.Draw(&window);
            barnyard.ColliderManager(&window, &player_one);
            window.display();
        }

}
