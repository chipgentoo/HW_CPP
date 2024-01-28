#include <iostream>

int main()
{
    int buckwheat;
    int consumption;
    int month = 0;

    std::cout << "Введите запас гречки: ";
    std::cin >> buckwheat;

    std::cout << "Введите потребление гречки в месяц: ";
    std::cin >> consumption;

    if (buckwheat <= consumption)
    {
        std::cout << "При таком расходе гречки Вам не хватит для выживания.";
        return 0;
    }
    
    int endMonth = buckwheat / consumption;

    for (int i = buckwheat - consumption; i >= consumption ; i -= consumption)
    {
        month++;
        std::cout << "В конце " << month << " месяза запас гречки составит " << i << " кг.\n";
    }

    std::cout << "В конце " << month + 1 << " месяза запас гречки закончится.\n";

    return 0;
}