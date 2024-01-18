#include <iostream>

int main()
{
    int exp;
    int lvl;

    std::cout << "Введите кол-во опыта: ";
    std::cin >> exp;

    if (exp < 1000)
    {
        lvl = 1;
    }
    else if (exp >= 5000)
    {
        lvl = 4;
    }
    else if (exp >= 2500)
    {
        lvl = 3;
    }
    else
    {
        lvl = 2;
    }

    std::cout << "Ваш уровень: " << lvl << "\n";
    return 0;
}
