#include <iostream>

void showMainMenu() {
	std::cout << "*********** CHAPTER **********" << '\n';
	std::cout << "1. Electricity" << '\n';
}

int getMenuFromUser() {
	int choice{ 0 };
	std::cin >> choice;

	return choice;
}

void showSubMenuElectricity() {
	std::cout << "********** SUB-CHAPTER **********" << '\n';
	std::cout << "1. Battery life" << '\n';
}