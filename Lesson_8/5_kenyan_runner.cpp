#include <iostream>
#include <cmath>

int main()
{
    int kilometers = 0;
    std::cout << "Привет, Сэм! Сколько километров ты сегодня пробежал?: ";
    std::cin >> kilometers;

    if (kilometers <= 0)
    {
        std::cout << "Надо, надо тренироваться!";
        return 0;
    }
    
    int speed[kilometers];

    for (int i = 0; i < kilometers; i++)
    {
        std::cout << "За сколько секунд ты пробежал " << i+1 << " километр: ";
        std::cin >> speed[i];
    }
    
    // выщитываем средний темп
    float temp = 0;
    for (int i = 0; i < kilometers; i++)
    {
        temp += speed[i];
    }
    temp /= kilometers;

    std::cout << "Твой средний темп за тренировку: " << (int)(temp / 60) << " мин. " << ceil(temp - floor(temp / 60) * 60) << " сек.\n";

    return 0;
    
    }