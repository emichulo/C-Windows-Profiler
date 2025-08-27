#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <vector>
#include <windows.h>

class Menu {
    public:
    std::string title;
    std::vector<std::string> options;
    size_t menu_index = 0;

    Menu(const std::string& title);

    void addOption(const std::string& option);
    size_t getIndex() const;
    void print();
    void run();
    void setcolor(int k);
    size_t size() const;

};


#endif // MENU_HPP