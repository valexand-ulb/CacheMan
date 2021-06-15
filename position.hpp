//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#ifndef POSTION_POSITION_HPP
#define POSTION_POSITION_HPP


class Position {
private:
    int x,y;
public:
    Position(int x, int y);
    int getX() const, getY() const;
    int distFromPos(Position pos) const;
};


#endif //POSTION_POSITION_HPP
