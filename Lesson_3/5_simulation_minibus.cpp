#include <iostream>

int main()
{
    int countStopBus;

    int fare;   // плата за проезд
    int mony;   // общая сумма денег

    int countPeople = 0;    // начальное значение кол-ва пассажиров
    int inPeople;           // вошедшие
    int outPeople;          // вышедшие

    double wage = 0;    // Заработная плата водителя
    double fuel = 0;    // Расходы на топливо
    double tax = 0;     // Налог
    double repair = 0;  // Расходы на ремонт машины

    double profit = 0;  // Прибыль

    std::cout << "Симулятор маршрутки\n";
    std::cout << "===================\n";

    std::cout << "Введите кол-во остановок маршрутки: ";
    std::cin >> countStopBus;

    std::cout << "Введите стоимость проезда: ";
    std::cin >> fare;

    for (int i = 1; i <= countStopBus; i++)
    {
        std::cout << "Прибываем на остановку № " << i << "\n";
        std::cout << "==========================\n" << i;

        if (countPeople > 0) // если пассажиры есть
        {
            std::cout << "Сколько пассажиров вышло?: ";
            std::cin >> outPeople;

            if (outPeople > countPeople) // если вышло больше чем есть в наличии то приравниваем.
            {
                outPeople = countPeople;
            }
            
            countPeople -= outPeople; // выходим
        }
        std::cout << "Сколько пассажиров вошло?: ";
        std::cin >> inPeople;
        
        countPeople += inPeople; // входим
        mony = mony + (fare * inPeople); // деньги = деньги + плата за проезд с каждого вошедшего.

        if (i = countStopBus)
        {
            std::cout << "===== Конец маршрута =====\n\n";
        }
    } // end for
    
    std::cout << "========== ИТОГО =========\n";
    std::cout << "Общая сумма денег: " << mony << "\n";

    wage = (mony / 100) * 25;   // 1/4 или 25%
    std::cout << "Зарплата водителя: " << wage << "\n";

    fuel = (mony / 100) * 20;   // 1/5 или 20%
    std::cout << "Расходы на топливо: " << fuel << "\n";

    tax = (mony / 100) * 20;    // 1/5 или 20%
    std::cout << "Налог" << tax << "\n";

    repair = (mony / 100) * 20; // 1/5 или 20%
    std::cout << "Расходы на ремонт: " << repair << "\n";

    profit = mony - wage - fuel - tax - repair;
    std::cout << "==========================\n";
    std::cout << "Итого заработано: " << profit << "\n";

    return 0;
}
