#include "menu.hpp"

#include <iostream>


void sayHello() {
    std::cout << "Hello, User! 👋\n";
}

void showInfo() {
    std::cout << "This is a simple OOP-based terminal menu.\n";
}

int main() {
    Menu menu("Main Menu");
    menu.addOption("Say Hello");
    menu.addOption("Show Info");

    int choice;
    do {
        menu.display();
        choice = menu.getChoice();

        switch (choice) {
            case 1:
                sayHello();
                break;
            case 2:
                showInfo();
                break;
            case 0:
                std::cout << "Exiting... Goodbye!\n";
                break;
            case -1:
                // invalid, ignore
                break;
        }

        std::cout << std::endl;
    } while (choice != 0);

    return 0;
}