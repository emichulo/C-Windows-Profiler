#include "menu.hpp"
#include <iostream>

Menu menu;

void init() {
    menu.addTitle("Menu").addOption("Say Hello", []() {std::cout<<"Hello!";})
    .addOption("Exit", []() {std::exit(0);});
}

int main() {
    init();
    menu.run();
}