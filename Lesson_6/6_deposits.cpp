#include <iostream>

int main()
{
    int deposit;        // вклад
    int interest;       // проценты
    int accumulation;   // накопление

    int years = 0;      // кол-во лет

    std::cout << "Введите сумму вклада: ";
    std::cin >> deposit;

    std::cout << "Введите проценты по вкладу: ";
    std::cin >> interest;

    std::cout << "Введите желаемую сумму на счете: ";
    std::cin >> accumulation;
    
    while (deposit < accumulation)
    {
        deposit = (int)((deposit / 100) * interest + deposit); // приведение типа в качестве отброса дробной части
        years += 1;
    }
    
    std::cout << "Ждать придется " << years << " лет.\n";
    return 0;
}