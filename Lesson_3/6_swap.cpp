#include <iostream>

int main() {
    int a = 42;
    int b = 153;

    std::cout << "a: " << a << "\n"; // На экран будет выведено 42
    std::cout << "b: " << b << "\n"; // На экран будет выведено 153

    a = a + b; // a = 195, b = 153
    b = a - b; // a = 195, b = 42
    a = a - b; // a = 153, b = 42

    std::cout << "a: " << a << "\n"; // На экран будет выведено 153
    std::cout << "b: " << b << "\n"; // На экран будет выведено 42

    return 0;
}