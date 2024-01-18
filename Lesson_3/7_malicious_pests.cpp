#include <iostream>

int main()
{
    int beginHeight = 100;
    int dailyGrowth = 50;
    int nightFade = 20;
    int countDays = 0;

    std::cout << "Введите кол-во дней роста бамбука";
    std::cin >> countDays;
 
    std::cout << "Высота бомбука к середине " << countDays << "  дня составит: " << beginHeight + (dailyGrowth - nightFade) * (countDays - 1) + dailyGrowth / 2;

    return 0;
}
