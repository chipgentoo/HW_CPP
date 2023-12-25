#include <iostream>

main(){
    int costGood;
    int costDelivery;
    int discount;

    std::cout << "Введите стоимость товара: ";
    std::cin >> costGood;

    std::cout << "Введите стоимость доставки: ";
    std::cin >> costDelivery;

    std::cout << "Введите размер скидки в %: ";
    std::cin >> discount;

    std::cout << "Полная стоимость товара: " << ((costGood + costDelivery) / 100) * discount;
}
