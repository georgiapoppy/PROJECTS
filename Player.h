#include <iostream>
#include <string.h>

#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class Player {
    public:
        virtual string makeMove() = 0;
        virtual string getName() = 0;
};

#endif