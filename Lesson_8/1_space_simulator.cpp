#include <iostream>
#include <cmath>

int main()
{
    float weight;   // масса корабля
    float traction; // сила тяги
    float seconds;  // секунды

    float distance = 0; // расстояние

    std::cout << "Введите массу корабля: ";
    std::cin >> weight;
    if (weight <= 0) {
        std::cout << "Обибка: масса корябля не может быть отрицательной.";
        return 1;
    }
    
    std::cout << "Введите силу тяги двигателя: ";
    std::cin >> traction;
    if (traction <= 0) {
        std::cout << "Обибка: силя тяги не может быть отрицательной.";
        return 1;
    }

    std::cout << "Введите время тяги в секундах: ";
    std::cin >> seconds;
    if (seconds <= 0) {
        std::cout << "Обибка: время не может быть отрицательным.";
        return 1;
    }

    // (a * t^2) / 2 , где a = F/m
    // ((traction / weight) * pow(seconds,2)) / 2
    // ((200 / 1000) * 200^2) / 2 = 4000
    // ((30 / 500) * 256^2) / 2 = 1966.08

    distance = ((traction / weight) * std::pow(seconds,2)) / 2;

    std::cout << "Рсстояние, пройденное кораблем: " << distance << "\n";

    return 0;
}
