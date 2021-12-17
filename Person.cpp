#include "Person.hpp"


void Person::move(int direction){
    //des tests a faire ! pour verifier le coups
    std::cout << "Le bon mouvement se fait" << std::endl;
    if (direction == UP and isMove(_pos->getX(), _pos->getY()+_speed)){
        _pos->setY(_pos->getY()+_speed);
    }
    else if(direction == DOWN and isMove(_pos->getX(), _pos->getY()-_speed)){
        _pos->setY(_pos->getY()-_speed);
    }
    else if(direction == LEFT and isMove(_pos->getX()-_speed, _pos->getY())){
        _pos->setX(_pos->getX()-_speed);
    }
    else if(direction == RIGHT and isMove(_pos->getX()+_speed, _pos->getY())){
        _pos->setX(_pos->getX()+_speed);
    }
    std:: cout <<  _pos->getX() << "and " << _pos ->getY() << std::endl;
}

bool Person::isMove(int x, int y){
    // a faire !
    return true;
}