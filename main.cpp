#include <iostream>

#include "menu.h"
#include "profile.h"

Menu menu;

void init() {
  menu.addTitle("Menu")
      .addOption("New Profile", []() { Profile::create_prof(); })
      .addOption("See Profiles", []() { Profile::show_profilers(); })
      .addOption("Run a profile", []() { std::cout << "TO DO!"; })
      .addOption("Exit", []() { std::exit(0); });
}

int main() {
  init();

  menu.run();
}