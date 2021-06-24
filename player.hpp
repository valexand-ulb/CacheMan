#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Person.hpp"

class Player : public Person
{
private:

public:
    // Constructeur
    Player(double speed, int sprite);
    // Destructeur
    virtual ~Player(){};
};

#endif