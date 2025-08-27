#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <vector>

class Menu {
    public:
    std::string title;
    std::vector<std::string> options;

    Menu(const std::string& title);

    void addOption(const std::string& option);
    void display() const;
    int getChoice() const;

};


#endif // MENU_HPP