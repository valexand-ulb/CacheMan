#ifndef PERSON_HPP
#define PERSON_HPP

#include "entity.hpp"

class Person : public Entity{

public:
    void move(int) override;
};


#endif