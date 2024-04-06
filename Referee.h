#include <iostream>
#include "Player.h"
#include "Human.h"
#include "Computer.h"

#ifndef REFEREE_H
#define REFEREE_H

using namespace std;

class Referee {
    public:
        Referee();
        Player * refGame(Player * player1, Player * player2);
};

#endif