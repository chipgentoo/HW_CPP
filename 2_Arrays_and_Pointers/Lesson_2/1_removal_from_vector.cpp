#include <iostream>
#include <vector>

int main()
{
    int vecSize;
    std::cout << "Input vector size: ";
    std::cin >> vecSize;

    std::vector<int> intVector(vecSize);

    std::cout << "Input numbers: ";
    for (int i = 0; i < vecSize; i++)
    {
        std::cin >> intVector[i];
    }

    int numDel;
    std::cout << "Input number to delete: ";
    std::cin >> numDel;

    // Вывод исходного вектора
    std::cout << "Source vector:";
    for (int i = 0; i < vecSize; i++)
    {
        std::cout << " " << intVector[i] << " ";
    }
    std::cout << std::endl;

    // заполнение результирующего вектора
    std::vector<int> resVector;
    for (int i = 0; i < intVector.size(); i++)
    {
        if (intVector[i] != numDel)
        {
            resVector.push_back(intVector[i]);
        }
        continue;
    }

    // вывод результирующего вектора
    std::cout << "Result vector:";
    for (int i = 0; i < resVector.size(); i++)
    {
        std::cout << " " << resVector[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
