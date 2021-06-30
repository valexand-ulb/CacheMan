//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#ifndef POSTION_POSITION_HPP
#define POSTION_POSITION_HPP
#include <tuple>

class Position {
private:
    int x,y;
    const std::tuple[4] <signed int,signed int> deplacement = {std::make_tuple(0,1),std::make_tuple(0,-1),
                                                               std::make_tuple(1,0),std::make_tuple(-1,0)};
public:
    Position(int x, int y);
    int getX() const, getY() const;
    int distFromPos(Position pos) const;
};


#endif //POSTION_POSITION_HPP
