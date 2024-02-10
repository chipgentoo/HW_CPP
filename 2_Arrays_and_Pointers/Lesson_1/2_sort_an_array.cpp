#include <iostream>
#include <cmath>

int main()
{
    int szArray;
    std::cout << "Enter array size: ";
    std::cin >> szArray;

    // Генерация массива float
    float* flArray = new float[szArray];
    for (int i = 0; i < szArray; i++)
    {
        flArray[i] = (rand()%10000) / 1000.f;
    }
    
    // Вывод исходного массива
    std::cout << "Source array:";
    for (int i = 0; i < szArray; i++)
    {
        std::cout << "  " << flArray[i];
    }
    std::cout << std::endl;

    // Cортировка массива перестановкой ( On^2 )
    for (int i = 0; i < szArray-1; i++)
    {
        for (int j = i+1; j < szArray; j++)
        {
            if (flArray[i] > flArray[j])
            {
                std::swap(flArray[i],flArray[j]);
            }
        }
    }

    // Вывод исходного массива
    std::cout << "Sorted array:";
    for (int i = 0; i < szArray; i++)
    {
        std::cout << "  " << flArray[i];
    }
    std::cout << std::endl;
}