#include <iostream>

#include "menu.h"
#include "profile.h"

Menu menu;

void init() {
  menu.addTitle("Menu")
      .addOption("New Profile", []() { std::cout << "TO DO!"; })
      .addOption("See Profiles", []() { std::cout << "TO DO!"; })
      .addOption("Exit", []() { std::exit(0); });
}

int main() {
  init();

  menu.run();
}