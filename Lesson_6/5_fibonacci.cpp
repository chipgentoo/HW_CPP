#include <iostream>

int main()
{
    int n; // вводится пользователем
    int num1 = 0; // начальное число
    int num2 = 1; // следующее число

    std::cout << "Введите номер последовательности: ";
    std::cin >> n;
    while (n > 0)
    {
        num1 = num1 + num2;
        num2 = num1 - num2;
        n--;
    }
    std::cout << "Число в последовательности: " << num1 << "\n";
    return 0;
}