#include <iostream>
#include <cmath>

int main()
{
    float health;       // здоровье орка
    float protection;   // Защита от магии
    float fireBall;     // мощность шара

    std::cout << "Введите кол-во здоровья орка (0.0 - 1.0): ";
    std::cin >> health;
    if (health < 0.f || health > 1.f)
    {
        std::cout << "Не верные параметры здоровья.";
        return 1;
    }
    
    std::cout << "Введите уровень защиты от магии (0.0 - 1.0): ";
    std::cin >> protection;
    if (protection < 0.f || protection > 1.f)
    {
        std::cout << "Не верные параметры защиты от магии.";
        return 1;
    }
    
    do
    { /* кидаем в орка огненный шар */
        
        // std::cout << "Введите мощность огненного шара (0.0 - 1.0): ";
        // std::cin >> fireBall;
        // if (fireBall < 0.f || fireBall > 1.f)
        // {
        //     std::cout << "Ошибка: не верно указана мощность огненного шара.";
        //     fireBall = 0.f;
        // }
        
        // леньво набивать шары руками
        fireBall = (float)(rand()) / (float)(RAND_MAX);

        std::cout << "В орка прилетел шар мощностью: " << fireBall << "\n";
        if (fireBall > protection) // если шар мощнее защиты
        {
            health -= (fireBall - protection);
        }
        std::cout << "ОРК: Жизнь: " << health << ", Защита: " << protection << "\n";

    } while (health > 0.f);
        
    std::cout << "Вы победили! Орк мертв.\n";

    return 0;
}
