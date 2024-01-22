#include <iostream>

int main()
{
    int a, b, c;

    std::cout << "Задайте стороны треугольника: ";
    std::cin >> a >> b >> c;

    if ((a + b) < c || (b + c) < a || (a + c) < b)
    {
        std::cout << "Треугольник возможен";
    }
    else
    {
        std::cout << "Треугольник НЕ возможен";
    }

    return 0;
}