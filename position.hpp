//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#ifndef POSTION_POSITION_HPP
#define POSTION_POSITION_HPP

#include <tuple>

class Position {
private:
    int x,y;    // position
    std::tuple<int,int> vectors[4] = {{0,-1},{0,1},{-1,0},{1,0}};

public:
    Position(int x, int y);
    int getX() const, getY() const;
    int distFromPos(Position pos) const;

};


#endif //POSTION_POSITION_HPP
