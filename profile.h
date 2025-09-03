#ifndef PROFILE_H
#define PROFILE_H

#include <iostream>
#include <vector>

class Profile {
 private:
  std::string name;
  std::vector<std::string> app_list;

 public:
  Profile();
  Profile& addName(const std::string& n);
  Profile& addApp(const std::string& v);
  std::string getName();
  static void show_profilers(std::vector<Profile> v);
};
#endif  // PROFILE_H