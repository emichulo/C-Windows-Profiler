#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <vector>
#include <functional>
#include <windows.h>

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
    void print();
    void run();
    void setcolor(int k);
    size_t size() const;

};


#endif // MENU_HPP