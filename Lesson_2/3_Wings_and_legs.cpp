#include <iostream>

main(){
    int minShiftLength;   // Длительность смены в минутах
    int minOrderClient;   // Сколько минут клиент делает заказ
    int minOrderAssembly; // Сколько минут кассир собирает заказ

    std::cout << "Длительность смены в минутах: ";
    std::cin >> minShiftLength;

    std::cout << "Сколько минут клиент делает заказ: ";
    std::cin >> minOrderClient;

    std::cout << "Длительность смены в минутах: ";
    std::cin >> minOrderAssembly;

    std::cout << "-----Считаем-----\n";
    std::cout << "За смену длиной " << minShiftLength << " мин. кассир успеет обслужить " << minShiftLength / (minOrderClient + minOrderAssembly) << " клиентов.\n";
}