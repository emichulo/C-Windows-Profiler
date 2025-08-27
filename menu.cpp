#include "menu.hpp"

#include <iostream>

Menu::Menu(const std::string& title) : title(title) {}

void Menu::addOption(const std::string& option) {
    options.push_back(option);
}


void Menu::display() const {
    std::cout << "==== " << title << " ====" << std::endl;
    for (size_t i = 0; i < options.size(); ++i) {
        std::cout << i + 1 << ". " << options[i] << std::endl;
    }
    std::cout << "0. Exit" << std::endl;
}

int Menu::getChoice() const {
    int choice;
    std::cout << "Enter choice: ";
    std::cin >> choice;

    if (choice < 0 || choice > (int)options.size()) {
        std::cout << "Invalid choice. Try again.\n";
        return -1;
    }
    return choice;
}