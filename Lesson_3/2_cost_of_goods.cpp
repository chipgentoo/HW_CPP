#include <iostream>

int main()
{
    int productCost;
    int deliveryCost;
    int discount;

    std::cout << "Расчет стоимости товара\n";
    std::cout << "=======================\n";

    std::cout << "Введите стоимость товара: ";
    std::cin >> productCost;

    std::cout << "Введите стоимость доставки: ";
    std::cin >> deliveryCost;

    std::cout << "Введите размер скидки: ";
    std::cin >> discount;

    std::cout << "\n=======================\n";

    int price = productCost + deliveryCost - discount;

    std::cout << "Стоимость товара: " << productCost << "\n";
    std::cout << "Cтоимость доставки: " << deliveryCost << "\n";
    std::cout << "Скидка: " << discount << "\n";
    std::cout << "---------\n";
    std::cout << "Итого: " << price << "\n";

    return 0;
}
