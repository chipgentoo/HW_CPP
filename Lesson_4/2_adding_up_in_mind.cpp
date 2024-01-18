#include <iostream>

int main()
{
    int oneNumber;
    int twoNumber;
    int summa;
    int summaUser;

    std::cout << "Сложение в уме.\n";

    std::cout << "Введите первое число: ";
    std::cin >> oneNumber;

    std::cout << "Введите второе число: ";
    std::cin >> twoNumber;

    summa = oneNumber + twoNumber;

    std::cout << "Введите сумму чисел: ";
    std::cin >> summaUser;

    std::cout << "-----Проверяем-----";

    if (summaUser == summa)
    {
        std::cout << "Верно!!!";
    }
    else
    {
        std::cout << "Вы ошиблись! Верный результат: " << summa;
    }
    
    return 0;
}
