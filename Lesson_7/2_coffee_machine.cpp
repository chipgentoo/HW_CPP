#include <iostream>

int main()
{
    int water = 0; // общий объём воды
    int milk = 0;  // общий объём молока

    int countCupAmericano = 0; // кол-во чашек с Американо
    int countCupLatte = 0;     // кол-во чашек с Латте

    int waterLatte = 30; // объём воды для Латте
    int milkLatte = 270; // объём молока для Латте

    int waterAmericano = 300; // объём воды для Американо

    int userSelection = 0; // выбор пользователя. Напиток.

    std::cout << "Введите кол-во воды в кофемашине( мл.): ";
    std::cin >> water;

    std::cout << "Введите кол-во молока в кофемашине( мл.): ";
    std::cin >> milk;

    if (water < 0 || milk < 0)
    {
        std::cout << "Значения воды и молока не могут быть отрицательные";
        return 1; // error
    }

    while (true)
    {
        std::cout << "Выберите напиток: (1 - Американо, 2 - Латте): ";
        std::cin >> userSelection;

        switch (userSelection)
        {
        case 1:
            if (water >= waterAmericano )
            {
                std::cout << "Ваш напиток готов.\n";
                water -= waterAmericano;
                countCupAmericano++;
            }
            break;

        case 2:
            if (water >= waterLatte && milk >= milkLatte)
            {
                std::cout << "Ваш напиток готов.\n";
                water -= waterLatte;
                milk -= milkLatte;
                countCupLatte++;
            }
            break;

        default:
            std::cout << "Такого напитка нет рецептах кофемашины!";
            break;
        }

        if ((water < waterLatte || milk < milkLatte) || (water < waterAmericano))
        {
            std::cout << "**** ОТЧЁТ ****\n\n";
            std::cout << "Ингридиентов осталось:";
            std::cout << "Воды: " << water << "\n";
            std::cout << "Молока: " << milk << "\n";
            std::cout << "Приготовленно чашек с Американо: " << countCupAmericano << "\n";
            std::cout << "Приготовленно чашек с Латте: " << countCupLatte << "\n";
            break; // прерывание while(true)
        }
    }
    return 0;
}
