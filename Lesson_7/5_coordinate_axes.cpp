#include <iostream>

int main()
{
    int sizeX, sizeY;
    int coordX, coordY;
    std::cout << "Введите размеры координатной сетки (X Y): ";
    std::cin >> sizeX >> sizeY;

    if (sizeX < 1 || sizeY < 1)
    {
        std::cout << "Ошибка! Размеры координатной сетки не могут быть отрицательными или нулевыми.";
        return 1; // error
    }

    coordX = sizeX / 2;
    coordY = sizeY / 2;

    for (int y = coordY; y >= -coordY; y--)
    {
        for (int x = -coordX; x <= coordX; x++)
        {
            if (x == 0){ // X граница
                if (y == coordY) {
                    std::cout << "\u25B2"; // ^
                } else if (y == 0) {
                    std::cout << "\u253C"; // +
                } else {
                    std::cout << "\u2502"; // |
                }
            } else if (y == 0) { // Y граница
                if(x == coordX){
                    std::cout << "\u25B6"; // >
                }else{
                    std::cout << "\u2500"; // -
                }
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
    
    return 0;
}
