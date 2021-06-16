#ifndef DISPLAYMENU_HPP
#define DISPLAYMENU_HPP
#include <iostream>
#include <string>

class DisplayMenu{




public:
    //constructeur
    DisplayMenu() noexcept = default;



    void display(){
        std::string input;
        std::cout << "Bienvenue dans CacheMan"<< std::endl;
        std::cout << "ecrivez play pour jouer"<< std::endl;
        std::cin >> input;
        //lance le jeu
    }




};



#endif