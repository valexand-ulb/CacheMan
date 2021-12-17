#include "Variable.hpp"
#include "Display.hpp"


#define EMPTY 0
#define WALL 1
#define PLAYER 2
#define GHOST 3


void Display::display_terminal(int size,int** map, Entity* player1, Entity* ghost1){
    //std::system("clear");
    for (int i = 0; i < size ; i++){
        for (int j = 0 ; j < size ;j++){
            if (map[i][j] == WALL){std::cout << "X";} 
            else if (player1->get_X() == i and player1->get_Y() == j) 
            {std::cout << "O";}
            else if (ghost1->get_X() == i and ghost1->get_Y() == j) 
            {std::cout << "&";}
            else if (map[i][j] == EMPTY){std::cout << ".";}
        }
        std::cout << std::endl;
    }
}


void Display::display_window(Entity* entities[]){
    /***
     * Voir ce qu'on va utiliser mais je pense SFML
     * ***/
}