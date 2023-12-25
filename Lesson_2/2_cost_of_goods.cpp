#include <iostream>

main(){
    double costGood;
    double costDelivery;
    double discount;
    double costFull;

    std::cout << "Введите стоимость товара: ";
    std::cin >> costGood;

    std::cout << "Введите стоимость доставки: ";
    std::cin >> costDelivery;

    std::cout << "Введите размер скидки в %: ";
    std::cin >> discount;

    std::cout << "Полная стоимость товара: " << (costGood + costDelivery) - ((costGood + costDelivery) / 100) * discount << "\n";
}
