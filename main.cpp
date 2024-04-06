#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

using namespace std;

int main() {
    Referee referee;
    Human human("Georgia");
    Computer computer;

    Player * player = referee.refGame(&human, &computer);
    
    if (player == nullptr) {
        std::cout << "It's a tie." << std::endl;
    } else {
        string name = player->getName();
        std::cout << name << " Wins." << std::endl;
    }
    return 0;
};