#include <iostream>

#ifdef _WIN32
	#include "windows.h"
#endif

int main()
{
#ifdef _WIN32
	SetConsoleCP(1251);
#endif

	setlocale(LC_ALL, "Russian");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;
	return 0;
}