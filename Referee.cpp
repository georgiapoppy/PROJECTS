#include "Referee.h"
#include "Player.h"
#include "Human.h"
#include "Computer.h"

Referee::Referee() {};

Player* Referee::refGame(Player * player1, Player * player2) {
    string move1 = player1->makeMove();
    string move2 = player2->makeMove();
    if (move1 == move2) {
        return nullptr;
    }
    else if ((move1 == "Rock" && move2 == "Scissors") || (move1 == "Scissors" && move2 == "Paper") || (move1 == "Paper" && move2 == "Rock")) {
        return player1;
    }
    else {
        return player2;
    }
}
