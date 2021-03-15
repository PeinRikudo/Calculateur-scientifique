#include "menu.h"
#include <iostream>

int main() {
	showMainMenu();
	int choiceMenu{ getMenuFromUser() };

	if (choiceMenu == 1) {
		showSubMenuElectricity();
		int choiceSubMenu{ getMenuFromUser() };

		if (choiceSubMenu == 1)
			showBatteryLifeCalculator();
		else if(choiceSubMenu == 2)
			showOhmsLawCalculator();

	}else
		std::cout << "Enter the number corresponding to the chapter you want to view" << '\n';

	return 0;
}