#include <iostream>

int main()
{
    const int maxWeight = 1200;
    int line1, line2, line3, line4;

    std::cout << "Введите вес маштны на каждой из 4х полос: ";
    std::cin >> line1 >> line2 >> line3 >> line4;

    if (line1 > maxWeight || line2 > maxWeight || line3 > maxWeight || line4 > maxWeight)
    {
        std::cout << "На одной из полос машина с перегрузом!";
    }
    else
    {
        std::cout << "Все машины с допустимым весом. Могут ехать!";
    }

    return 0;
}