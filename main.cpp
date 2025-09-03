#include <iostream>

#include "menu.h"
#include "profile.h"

Menu menu;
Profile gaming;

std::vector<Profile> v1;

void initProfilers() {
  gaming.addName("gaming").addApp("Discord").addApp("opera");
  v1.push_back(gaming);
}

void init() {
  menu.addTitle("Menu")
      .addOption("New Profile", []() { std::cout << "TO DO!"; })
      .addOption("See Profiles", []() { Profile::show_profilers(v1); })
      .addOption("Exit", []() { std::exit(0); });
}

int main() {
  initProfilers();
  init();

  menu.run();
}