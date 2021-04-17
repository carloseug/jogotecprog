#ifndef BARNYARD_H
#define BARNYARD_H


#include <GameMaps.h>
#include "Dog.h"
#include "Cat.h"

class Barnyard : public GameMaps
{
    public:
        Barnyard(UImanager *ui_manager);
        virtual ~Barnyard();

        void Initialize();
        void SetColMap();
        void Draw(RenderWindow *window);
        void ColliderManager(RenderWindow *window, Dog *player1);


    protected:
    int colmap[100][100];

    private:
};

#endif // BARNYARD_H
