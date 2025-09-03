#ifndef MENU_H
#define MENU_H

#include <windows.h>

#include <functional>
#include <iostream>
#include <vector>

class Menu {
 private:
  std::string title;
  std::vector<std::pair<std::string, std::function<void()>>> Options;

 public:
  std::vector<std::string> options;
  size_t menu_index = 0;

  Menu();

  Menu& addTitle(const std::string& t);
  Menu& addOption(std::string opt, std::function<void()> fnct);
  size_t getIndex() const;
  Menu& operator++();
  Menu& operator--();
  void print();
  void run();
  void setcolor(int k);
  size_t size() const;
};

#endif  // MENU_H