#ifndef PROFILE_H
#define PROFILE_H

#include <iostream>
#include <vector>

#include <windows.h>

class Profile {
private:
  std::string name;
  std::vector<std::string> app_list;

public:
  static std::vector<Profile> prof_list;

  Profile();
  Profile &addName(const std::string &n);
  Profile &addApps(const std::vector<std::string> &a);
  std::string getName();
  void get_app_list();
  static void show_profilers(std::vector<Profile> v);
  static void create_prof();
};

#endif // PROFILE_H
