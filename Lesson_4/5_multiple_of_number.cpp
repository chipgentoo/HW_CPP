#include <iostream>

int main()
{
    int oneNumber;
    int twoNumber;

    std::cout << "Проверка кратности чисел\n";

    std::cout << "Введите первое число:";
    std::cin >> oneNumber;

    std::cout << "Введите второе число:";
    std::cin >> twoNumber;

    if (oneNumber < 0)
    {
        oneNumber = -oneNumber;
    }
    if (twoNumber < 0)
    {
        twoNumber = -twoNumber;
    }
    
    if (twoNumber != 0)
    {
        if (oneNumber % twoNumber == 0)
        {
            std::cout << "Да, " << oneNumber << " делится на " << twoNumber << " без остатка!";
        }
        else
        {
            std::cout << "Нет, " << oneNumber << " не делится на " << twoNumber << " без остатка!";
        }

    }
    else
    {
        std::cout << "На ноль делить нельзя!!!";
    }
    


    return 0;
}
