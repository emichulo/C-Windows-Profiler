#include "menu.h"

Menu::Menu() : title(), Options() {};

Menu& Menu::addTitle(const std::string& t) {
  title = t;
  return *this;
}

Menu& Menu::addOption(std::string opt, std::function<void()> fnct) {
  std::pair<std::string, std::function<void()>> p;
  p.first = opt;
  p.second = fnct;
  Options.push_back(p);
  return *this;
}

size_t Menu::getIndex() const { return menu_index; }

Menu& Menu::operator++() {
  if (getIndex() == this->size() - 1)
    menu_index = 0;
  else
    ++menu_index;

  return *this;
}

Menu& Menu::operator--() {
  if (getIndex() == 0)
    menu_index = this->size() - 1;
  else
    --menu_index;

  return *this;
}

void Menu::setcolor(int k) {
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

size_t Menu::size() const { return Options.vector::size(); }

void Menu::print() {
  system("cls");
  std::cout << " ====  " << title << "  ==== \n";
  for (size_t i = 0; i < size(); ++i) {
    if (i == getIndex())
      setcolor(3);
    else
      setcolor(7);
    std::cout << i << "." << Options[i].first << "\n";
  }
  setcolor(7);
}

void Menu::run() {
  print();

  while (true) {
    if (GetAsyncKeyState(VK_LSHIFT)) {
      --(*this);
      Sleep(200);
      print();
    }
    if (GetAsyncKeyState(VK_RSHIFT)) {
      ++(*this);
      Sleep(200);
      print();
    }
    if (GetAsyncKeyState(VK_CONTROL)) {
      Sleep(200);
      Options[getIndex()].second();
      Sleep(2000);
    }
  }
}
