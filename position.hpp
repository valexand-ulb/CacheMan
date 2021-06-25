//
// Created by Vinovrski Alexandre on 16/06/2021.
//

#ifndef POSTION_POSITION_HPP
#define POSTION_POSITION_HPP


class Position {
private:
    int _x,_y;
public:
    Position(int x, int y);
    //getter
    int getX() const, getY() const;
    //setter
    void setX(int x); void setY(int y);
    void setPosition(int, int);
    int distFromPos(Position pos) const;
};


#endif //POSTION_POSITION_HPP
