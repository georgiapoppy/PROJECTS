#include <iostream>
#include <string.h>
#include "Player.h"

#ifndef COMPUTER_H
#define COMPUTER_H

using namespace std;

class Computer : public Player {
       public:
            char makeMove() override;
            string getName() override;
};

#endif