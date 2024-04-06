#include "Player.h"
#include "Referee.h"
#include "Computer.h"
#include "Human.h"

#include <cstdlib> 
#include <ctime>

using namespace std;

int main() {
    std::cout << std::endl;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    Referee referee;
    Human human(name);
    Computer computer;

    Player* player = referee.refGame(&human, &computer);
    
    if (player == nullptr) {
        std::cout << "It's a tie." << std::endl;
    } else {
        string name2 = player->getName();
        std::cout << name2 << " Wins." << std::endl;
    }

    std::cout << std::endl;
    return 0;
};