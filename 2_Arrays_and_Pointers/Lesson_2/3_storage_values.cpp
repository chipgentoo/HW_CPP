#include <iostream>
#include <vector>

int main()
{
    std::vector<int> db(20);
    int inNumber;
    int count = 0;

    while (count < 20)
    {
        std::cout << "Input number: ";
        std::cin >> inNumber;

        if (inNumber != -1)
        {
            db[count] = inNumber;
            count++;
        }
        else
        {
            for (int i = 0; i < count; i++)
            {
                std::cout << " " << db[i] << " ";
            }
            std::cout << std::endl;
        }
    }
}
