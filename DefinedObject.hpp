#ifndef DEFINEDOBJECTS_HPP
#define DEFINEDOBJECTS_HPP

#include "Bonus.hpp"
#include "Ghost.hpp"


class DefinedObjects {

public:

    //PACMAN
    //static 
    //GHOST
    static Ghost* ghost(){return new Ghost(0,0);}



    //BONUS
    static Bonus* bonus_speed_up(){return new Bonus(0,1,0.2,false,false,0,false,false);}
    static Bonus* bonus_invisibility(){return new Bonus(0,1,0,true,false,0,false,false);}
    static Bonus* bonus_dash(){return new Bonus(0,1,0.2,false,true,0,false,false);}
    static Bonus* bonus_wall_breaker(){return new Bonus(0,1,0.2,false,false,1,false,false);}
    static Bonus* bonus_freeze_opponent(){return new Bonus(0,1,0.2,false,false,0,true,false);}
    static Bonus* bonus_block(){return new Bonus(0,1,0.2,false,false,0,false,true);}
};


#endif //DEFINEDOBJECTS_HPP