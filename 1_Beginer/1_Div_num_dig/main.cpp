#include <iostream>
#include <string>
#include <cmath>

#include "input_int.cpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    cout << "Деление числа на разряды\n\n";
    int N = input_int("Введите число N: ");
    cout << "N = " << N << "\n";
    string str = to_string(N);
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        count = pow(10, (str.length() - i - 1));
        cout << i + 1 << " число - " << (N / count) << "\n";
        N %= count;
    }

    return 0;
}
