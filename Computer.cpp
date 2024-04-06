#include "Computer.h"
#include "Player.h"
#include <string.h>
#include <random> 

string Computer::makeMove() {
    random_device rand;
    mt19937 gen(rand());
    uniform_int_distribution<>dis(1,3);
    int random = dis(gen);
    if (random == 1) {
        return "Rock";
    } else if (random == 2) {
        return "Paper";
    } else if (random == 3) {
        return "Paper";
    }
    return "NULL";
}

string Computer::getName() {
    return "Computer";
}