#include "menu.hpp"

Menu::Menu(const std::string& title) : title(title) {}

void Menu::addOption(const std::string& option) {
    options.push_back(option);
}

size_t Menu::getIndex() const {
    return menu_index;
}

void Menu::setcolor(int k) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), k);
}

size_t Menu::size() const {
    return options.vector::size();
}

void Menu::print() {
    system("cls");
		for (size_t i = 0; i < this->size(); ++i) {
			if (i == this->getIndex())
				setcolor(3);
			else
				setcolor(7);
			std::cout << i << "." << options[i] << "\n";
		}
		setcolor(7);
	}

void Menu::run() {
    this->print();

    		while (true) {
			if (GetAsyncKeyState(VK_LSHIFT)) {
				if(this->getIndex() == 0)
                    this->menu_index = this->size() - 1;
                else
                    -- this->menu_index;
				Sleep(200);
				this->print();
			}
			if (GetAsyncKeyState(VK_RSHIFT)) {
				if(this->getIndex() == this->size() - 1)
                    this->menu_index = 0;
                else
                    ++ this->menu_index;
				Sleep(200);
				this->print();
			}
			if (GetAsyncKeyState(VK_CONTROL)) {
				Sleep(200);
				std::cout<<"HAHA!";
			}
		}
}
