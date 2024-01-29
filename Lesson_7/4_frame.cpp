#include <iostream>

int main()
{
    int width;
    int height;

    std::cout << "Введите ширину и высоту рамки: ";
    std::cin >> width >> height;

    if (width < 3 || height < 3)
    {
        std::cout << "Значения должно быть >= 3";
        return 0;
    }

    for (int y = 0; y < height; y++) // сверху вниз
    {
        for (int x = 0; x < width; x++) // горизонтально
        {
            if (y == 0){ // верхняя горизонтальная
                if (x==0){ // левый
                    std::cout << "\u2554";
                } else if (x == width - 1) { // правый
                    std::cout << "\u2557";
                } else { // заполнение
                    std::cout << "\u2550";
                }
            } else if (y == height - 1){ // нижняя горизонтальная
                if (x == 0){ // левый
                    std::cout << "\u255A";
                } else if (x == width - 1) { // правый
                    std::cout << "\u255D";
                } else { // заполнение
                    std::cout << "\u2550";
                }
            } else { // заполнение
                if (x == 0 || x == width-1){ // левый или правый
                    std::cout << "\u2551";
                } else { // заполнение
                    std::cout << "*";
                }
            }
        }
        std::cout << "\n";
    }
    return 0;
}