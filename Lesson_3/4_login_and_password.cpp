#include <iostream>

int main()
{
    std::string login;
    std::string password;

    std::cout << "Введите логин: ";
    std::cin >> login;

    std::cout << "Введите пароль: ";
    std::cin >> password;

    std::cout << login << ", Вы успешно авторизовались!";

    return 0;
}
