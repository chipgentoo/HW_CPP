#include <iostream>

int main()
{
    int inputNumber;

    std::cout << "Проверка на чётное число";
    std::cout << "Введите число: ";
    std::cin >> inputNumber;

    if (inputNumber < 0)
    {
        inputNumber = -inputNumber; // инверсия знака при вводе отрицательного
    }

    if ((inputNumber % 2) != 0)
    {
        std::cout << "Число " << inputNumber << " - четное";
    }
    else
    {
        std::cout << "Число " << inputNumber << " - не четное";
    }

    return 0;
}
