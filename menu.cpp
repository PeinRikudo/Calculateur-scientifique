#include <iostream>

void showMainMenu() {
	std::cout << "1. Electricity" << '\n';
}

int getMenuFromUser() {
	int choice{ 0 };
	std::cin >> choice;

	return choice;
}