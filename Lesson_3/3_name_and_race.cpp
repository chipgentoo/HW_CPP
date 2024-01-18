#include <iostream>

int main()
{
    std::string namePerson;
    std::string racePerson;

    std::cout << "Введите имя персонажа: ";
    std::cin >> namePerson;

    std::cout << "Введите расу персонажа: ";
    std::cin >> racePerson;

    std::cout << "Родился новый " << racePerson << ", его зовут " << namePerson << ". Добро пожаловать в этот суровый мир!";

    return 0;
}
