#include "profile.h"

Profile::Profile() : name(), app_list() {};

Profile& Profile::addName(const std::string& n) {
  name = n;
  return (*this);
}
Profile& Profile::addApp(const std::string& v) {
  app_list.push_back(v);
  return (*this);
}
void Profile::show_profilers(std::vector<Profile> v) {
  for (int i = 0; i < v.size(); i++)
    std::cout << " ---" << i << ". " << v[i].getName();
}

std::string Profile::getName() { return name; }