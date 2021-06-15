//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#include "position.hpp"
#include <cmath>

Position::Position(int x, int y):x(x), y(y)
{}

int Position::getX() const {
    return this->x;
}
int Position::getY() const {
    return this->y;
}

int Position::distFromPos(Position pos) const {
    // retourne la distance entre deux point arrondi au dixieme puis multiplié par dix --> sqrt(2) = 1,41421 -> 1,4 ->14
    int a = pos.getX() - this->getX(), b= pos.getY() - this->getY();
    return roundf(sqrt((a*a)+(b*b))*10);
}
