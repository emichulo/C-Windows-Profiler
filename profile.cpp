#include "profile.h"

std::vector<Profile> Profile::prof_list;

Profile::Profile() : name(), app_list() {};

Profile &Profile::addName(const std::string &n) {
  name = n;
  return (*this);
}

Profile &Profile::addApps(const std::vector<std::string> &a) {
  app_list = a;
  return (*this);
}

void Profile::show_profilers() {
  system("cls");
  for (int i = 0; i < Profile::prof_list.size(); i++) {
    std::cout << i << ". " << Profile::prof_list[i].getName();
    Profile::prof_list[i].get_app_list();
  }
}

void Profile::run_profile() {
  int prf;
  system("cls");
  for (int i = 0; i < Profile::prof_list.size(); i++) {
    std::cout << i << ". " << Profile::prof_list[i].getName();
    Profile::prof_list[i].get_app_list();
  }
  std::cout << "Choose a profile: ";
  std::cin >> prf;
}

std::string Profile::getName() { return name; }

void Profile::get_app_list() {
  std::cout << "\nThis profile will start the following apps: \n";
  for (int i = 0; i < app_list.size(); i++)
    std::cout << app_list[i] << '\n';
}

void Profile::create_prof() {
  Profile prof;

  std::vector<std::string> app_list;
  std::string prof_name;
  std::string app;
  int app_nr;

  std::cout << "Please type the profile name: \n";
  std::cin >> prof_name;
  std::cout << "How many apps you will have in profiler: \n";
  std::cin >> app_nr;

  for (int i = 0; i < app_nr; i++) {
    std::cout << "Give the app name: \n";
    std::cin >> app;
    app_list.push_back(app);
  }
  prof.addName(prof_name).addApps(app_list);
  prof_list.push_back(prof);
}