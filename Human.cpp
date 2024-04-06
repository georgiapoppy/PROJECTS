#include "Human.h"
#include "Player.h"
#include <string.h>

Human::Human() {
    name = "Human";
}

Human::Human(string name1) {
    name = name1;
}

char Human::makeMove() {
    char move; 
    std::cout << "Enter move: ";
    std::cin >> move;
    std::cout << std::endl;
    return move;
}

string Human::getName() {
    return name;
}