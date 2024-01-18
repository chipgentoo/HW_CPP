#include <iostream>

int main(){

    int number;
    int squareNumber;
    std::cout << "Программа вычисления квадрата числа.\n";
    std::cout << "Введите число: ";
    std::cin >> number;
    std:: cout << "Вычисляем ...";
    squareNumber = number * number;
    std::cout << "Квадрат числа " << number << " равен " << squareNumber;

    return 0;
}