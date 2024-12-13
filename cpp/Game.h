//
// Created by Yunyi Gao on 12/12/24.
//

#ifndef GAME_H
#define GAME_H

#include "Player.h"
#include "Board.h"


class Game {

private:
    Player * playeB;
    Player * playerW;
    Board * board;


public:
    Game(Player * playerB, Player * playerW, Board * board);
    void start();
};



#endif //GAME_H
