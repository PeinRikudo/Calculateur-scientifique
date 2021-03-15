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
	std::cout << '\n' << "********** SUB-CHAPTER **********" << '\n';
	std::cout << "1. Battery life" << '\n';
}

void showBatteryLifeCalculator() {
	std::cout << '\n' << "********** BATTERY LIFE **********" << '\n';
	std::cout << "Please enter the battery capacity in Ah: ";
	
	float batteryCapacity{ 0 };
	std::cin >> batteryCapacity;

	std::cout << "Please enter the consumption in A: ";

	float consumption{ 0 };
	std::cin >> consumption;

	std::cout << "Your battery will last for: " << batteryCapacity / consumption << " hours or " << batteryCapacity / consumption * 60 << " minutes";
}