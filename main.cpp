#include "menu.h"
#include <iostream>

int main() {
	showMainMenu();

	if (getMenuFromUser() == 1) {
		showSubMenuElectricity();

		if (getMenuFromUser() == 1) {
			showBatteryLifeCalculator();

		}
	}else
		std::cout << "Enter the number corresponding to the chapter you want to view" << '\n';
}