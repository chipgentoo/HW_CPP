#include <iostream>
#include <vector>

int main()
{
    int vecSize;
    std::cout << "Input vector size: ";
    std::cin >> vecSize;

    std::vector<int> intVector(vecSize);

    for (int i = 0; i < vecSize; i++)
    {
        std::cin >> intVector[i];
    }

    // Вывод исходного
    std::cout << "Source vector:";
    for (int i = 0; i < vecSize; i++)
    {
        std::cout << " " << intVector[i] << " ";
    }
    std::cout << std::endl;


    
    
    return 0;
}
