#ifndef PERSON_HPP
#define PERSON_HPP

#include "entity.hpp"

class Person : public Entity{

public:
    Person(double speed, int x, int y, int sprite):Entity(speed
    ,x,y, sprite){}
    void move(int) override;
    bool isMove(int,int);
};


#endif