#include <iostream>
#include <cmath>

int main()
{
    float width  = 0; // ш
    float height = 0; // в
    float length = 0; // д

    const int sizeSide = 5;         // размер стороны кубика в мм.
    const int minSizeBigCube = 2;   // мин. размер сборного куба в исх. кубиках
    int sizeBigCube = 0;            // размер сборного куба в исх. кубиках

    int numCubW;  // по ширине
    int numCubH;  // по высоте
    int numCubL;  // по длине

    int numberOfCubes; // общее кол-во кубиков из доски

    std::cout << "Введите размеры бруска (ширина высота длина): ";
    std::cin >> width >> height >> length;

    // если хотя бы одна из сторон бруска меньше сторны кубика
    if (width < sizeSide || height < sizeSide || length < sizeSide)
    {
        std::cout << "Из такого бруска кубиков не получится. Минимальный размер 5х5х5.\n ";
        return 1;
    }

    numCubW = width / sizeSide;
    numCubH = height / sizeSide;
    numCubL = length / sizeSide;

    numberOfCubes = numCubW * numCubH * numCubL;    // общ. кол-во кубиков
    sizeBigCube = cbrt(numberOfCubes);              // размер стороны сборного куба

    std::cout << "Общее кол-во кубиков из этого бруска: " << numberOfCubes << "\n";
    if (sizeBigCube < 2) // меньше мимального собираемого куба 2х2х2
    {
        std::cout << "Из " << numberOfCubes << " кубиков набора не получится.\n";
        return 1;
    }
 
    std::cout << "Размер набора: " << sizeBigCube << "x" << sizeBigCube << "x" << sizeBigCube << "\n";
    std::cout << "В наборе " << std::pow( sizeBigCube, 3 ) << " кубиков\n";

    return 0;
}