#include <iostream>

int main()
{
    int titleWidth;     // обшая динна заголовка
    int countExcPoint;  // кол-во !

    std::cout << "Введите длину колонтитула: ";
    std::cin >> titleWidth;

    std::cout << "Введите кол-во ! знаков: ";
    std::cin >> countExcPoint;

    if (countExcPoint > titleWidth) countExcPoint = titleWidth; // не превышаем длину колонтитула. (приоритет)

    if (countExcPoint == titleWidth){
        for (int i = 0; i < countExcPoint; i++)
        {
            std::cout << "!";
        }
    } else {
        for (int i = 0; i < titleWidth - countExcPoint; i++)
        {
            if (i == (titleWidth - countExcPoint) / 2)
            {
                for (int i = 0; i < countExcPoint; i++)
                {
                    std::cout << "!";
                }
            }
            std::cout << "~";
        }

    }
    std::cout << "\n";
    return 0;
}