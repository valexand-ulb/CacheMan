#include "Person.hpp"


void Person::move(int direction){
    std::cout << "Le bon mouvement se fait" << std::endl;
    if (direction == UP and isMove(_pos->getX(), _pos->getY()+_speed)){
        _pos->setX(_pos->getX()-_speed);
    }
    else if(direction == DOWN and isMove(_pos->getX(), _pos->getY()-_speed)){
        _pos->setX(_pos->getX()+_speed);
    }
    else if(direction == LEFT and isMove(_pos->getX()-_speed, _pos->getY())){
        //_pos->setY(_pos->getY()+_speed);
        _pos->setY(_pos->getY()-_speed);
    }
    else if(direction == RIGHT and isMove(_pos->getX()+_speed, _pos->getY())){
        //_pos->setY(_pos->getY()-_speed);
        _pos->setY(_pos->getY()+_speed);
    }
    std:: cout <<  _pos->getX() << "and " << _pos ->getY() << std::endl;
}

bool Person::isMove(int x, int y){
    //std::cout << "next move will be: x = " << x << " and y = " << y << std::endl;
    // ne fonctionne pas correctement
    /*if ((x > 0 and x < 20) and (y > 0 and y < 20)) {
        return true;
    }
    else {
        return false;
    }
    */
   return true;
}