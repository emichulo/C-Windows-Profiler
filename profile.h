#ifndef PROFILE_H
#define PROFILE_H

#include <iostream>
#include <vector>

class Profile {
 private:
  std::string Name;
  std::vector<std::string> AppList;

 public:
  Profile();
};
#endif  // PROFILE_H