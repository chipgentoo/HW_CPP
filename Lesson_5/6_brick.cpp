#include <iostream>

int main()
{
    int hW, hH;     // отверстие
    int bW, bH, bL; // кирпич

    std::cout << "Введите размеры кирпича (ширина высота длина): ";
    std::cin >> bW >> bH >> bL;

    std::cout << "Введите размер отверстия (ширина высота): ";
    std::cin >> hW >> hH;

    if ((bH <= hH && bW <= hW) || (bH <= hW && bW <= hH) || // bH && bW (с поворотом)
        (bH <= hH && bL <= hW) || (bH <= hW && bL <= hH) || // bH && bD (с поворотом)
        (bL <= hH && bW <= hW) || (bL <= hW && bW <= hH))   // bD && bW (с поворотом)
    {
        std::cout << "Кирпич пройдет в отверстие";
    }
    else
    {
        std::cout << "Кирпич НЕ пройдет в отверстие";
    }
    return 0;
}