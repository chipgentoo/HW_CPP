#include <iostream>
#include <cmath>

int main()
{
    float width;  // ш
    float height; // в
    float length; // д

    const int sizeSide = 5; // размер стороны кубика
    int sizeBigCube;        // размер складываемого кобика

    int numCubW;  // по ширине
    int numCubH;  // по высоте
    int numCubL;  // по длине

    int numberOfCubes; // общее кол-во кубиков из доски

    std::cout << "Введите размеры бруска (ширина высота длина): ";
    std::cin >> width >> height >> length;

    // если одна из сторон доски < сторны кубика
    if (width < (float)sizeSide || height < (float)sizeSide || length < (float)sizeSide)
    {
        std::cout << "Из такого бруска кубиков не получится. Минимальный размер 5х5х5.\n ";
        return 1;
    }
    
    numCubW = width / sizeSide;
    numCubH = height / sizeSide;
    numCubL = length / sizeSide;

    numberOfCubes = numCubW * numCubH * numCubL;

    std::cout << "Общее кол-во кубиков из этого бруска: " << numberOfCubes << "\n";
    if (cbrt(numberOfCubes) < 2)
    {
        std::cout << "Из " << numberOfCubes << " кубиков набора не получится.\n";
        return 1;
    }
    
    sizeBigCube = cbrt(numberOfCubes);

    std::cout << "Размер набора: " << sizeBigCube << "x" << sizeBigCube << "x" << sizeBigCube << "\n";
    std::cout << "В наборе " << std::pow(sizeBigCube,3) << " кубиков\n";

    return 0;
}
