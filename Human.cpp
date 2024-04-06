#include "Human.h"
#include "Player.h"
#include <string.h>

Human::Human() {
    name = "Human";
}

Human::Human(string name1) {
    name = name1;
}

string Human::makeMove() {
    string move; 
    std::cout << "Enter move (Rock, Paper, or Scissors): ";
    std::cin >> move;
    return move;
}

string Human::getName() {
    return name;
}