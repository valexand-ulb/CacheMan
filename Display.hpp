#ifndef DISPLAY_HPP
#define DISPLAY_HPP

#include "Entity.hpp"

class Display{



public:
    Display() noexcept = default;
    static void display_terminal(int size,int** map, Entity* player1, Entity* ghost1);
    void display_window(Entity* entities[]);
};


#endif