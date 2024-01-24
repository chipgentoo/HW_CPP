#include <iostream>

int main()
{
    int hour = 12;

    std::cout << "Введите, который час (0-24): "; // в сутках 24 часа
    std::cin >> hour;

    if (hour == 0 || hour == 24) hour = 12; // полдень / полночь

    while (hour >= 1 && hour <= 24)
    {
        if (hour > 12) hour -= 12;  // циферблат только до 12
        std::cout << hour << " - Ку-ку\n";
        hour--;
    }
    return 0;
}