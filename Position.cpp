//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#include "Position.hpp"
#include <cmath>

Position::Position(int x, int y):_x(x),_y(y)
{}

int Position::getX() const {
    return this->_x;
}
void Position::setX(int x){
    this->_x = x;
}

int Position::getY() const {
    return this->_y;
}
void Position::setY(int y){
    this->_y = y;
}

void Position::setPosition(int x, int y){
    setX(x);setY(y);
}

int Position::distFromPos(Position pos) const {
    // retourne la distance entre deux point arrondi au dixieme puis multiplié par dix --> sqrt(2) = 1,41421 -> 1,4 ->14
    int a = pos.getX() - this->getX(), b= pos.getY() - this->getY();
    return roundf(sqrt((a*a)+(b*b))*10);
}
