#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Person.hpp"

class Player : public Person
{
private:

public:
    // Constructeur
    //Player(double speed, int sprite):Person(speed,0,0,sprite){}
    Player(double speed,int x, int y, int sprite):Person(speed,x,y,sprite){}
    // Destructeur
    virtual ~Player(){};
};

#endif