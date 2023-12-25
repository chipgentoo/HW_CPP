#include <iostream>

main()
{
    int invoiceReceipt;
    int quantityPorch;
    int quantityApartment;

    std::cout << "Сумма, указанная в квитанции: ";
    std::cin >> invoiceReceipt;

    std::cout << "Сколько подъездов в вашем доме?: ";
    std::cin >> quantityPorch;

    std::cout << "Сколько квартир в каждом подъезде?: ";
    std::cin >> quantityApartment;

    std::cout << "----Считаем-----\n";
    std::cout << "Каждая квартира должна платить по " << invoiceReceipt / (quantityPorch * quantityApartment) << " руб.\n";
}
