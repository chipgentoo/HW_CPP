#include <iostream>

int main()
{
    int oneNumber;
    int twoNumber;

    std::cout << "Поиск наименьшего из двух чисел.\n";

    std::cout << "Введите первое число: ";
    std::cin >> oneNumber;

    std::cout << "Введите второе число: ";
    std::cin >> twoNumber;

    if (oneNumber = twoNumber)
    {
        std::cout << "Числа равны";
    }
    else if (oneNumber < twoNumber)
    {
        std::cout << "Наименьшее число: " << oneNumber;
    }
    else
    {
        std::cout << "Наименьшее число: " << twoNumber;
    }
    

    return 0;
}
