#include <iostream>

int main()
{
    int mansCount;
    int barbersCount;

    std::cout << "Введите число мужчин в городе: ";
    std::cin >> mansCount;

    std::cout << "Сколько барберов нанято: ";
    std::cin >> barbersCount;

    int mansPerBarber = 8;

    int mansPerBarberPerMouth = mansPerBarber * 30;
    std::cout << "Один барбер стрижет столько клиентов в месяц: " << mansPerBarberPerMouth << "\n";

    int requiredBarbersCount = mansCount / mansPerBarberPerMouth;
    if (mansCount % (requiredBarbersCount * mansPerBarberPerMouth) > 0)
    {
        requiredBarbersCount += 1;
    }
    
    std::cout << "Необходимое число барберов: " << requiredBarbersCount << "\n";
    std::cout << requiredBarbersCount << " барбера могут пострич " << requiredBarbersCount * mansPerBarberPerMouth << " клиента за месяц.\n";

    if (requiredBarbersCount > barbersCount)
    {
        std::cout << "Нужно больше барберов\n";
    }
    else
    {
        std::cout << "Барберов хватает.\n";
    }

    return 0;
}
