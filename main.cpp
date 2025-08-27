#include "menu.hpp"

#include <iostream>


void sayHello() {
    //TEST
    std::cout << "Hello, User! 👋\n";
}

void showInfo() {
    //TEST
    std::cout << "This is a simple OOP-based terminal menu.\n";
}

int main() {
    Menu menu("Main Menu");
    menu.addOption("Say Hello");
    menu.addOption("Show Info");
    menu.addOption("EXIT!");

    int choice;
    menu.run();

    return 0;
}