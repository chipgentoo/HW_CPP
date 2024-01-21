#include <iostream>

int main()
{
    const int banknote = 100;
    const int maxSumm = 100000;
    int userSumm;

    std::cout << "Введите сумму денег для снятия: ";
    std::cin >> userSumm;

    if (userSumm <= maxSumm)
    {
        if (userSumm % banknote == 0)
        {
            std::cout << "Выдать сумму";
        }
        else
        {
            std::cout << "Введенная сумма не корректна";
        }
    }
    else
    {
        std::cout << "Вы не можете снять такую сумму. Сумма слишком велика.";
    }
    return 0;
}