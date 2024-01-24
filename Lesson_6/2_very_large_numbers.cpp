#include <iostream>

int main()
{
    long number;
    int counter;

    std::cout << "Введите число: ";
    std::cin >> number;



    if (number == 0) {
        std::cout << "1 цифра\n";
        return 0;
    }

    if (number < 0) number = -number; // модуль числа для отрицательных
    
    if (number > 0)
    {
        counter = 0;
        while (number > 0)
        {
            number /= 10;
            counter++;
        }
    }
    std::cout << "В веденном числе содержится цифр: " << counter << "\n";
    return 0;
}