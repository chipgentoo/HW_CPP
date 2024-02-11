#include <iostream>
#include <vector>

std::vector<int> remove_firts(std::vector<int> oldVector)
{
    int size = oldVector.size();
    std::vector<int> newVector(size);
    for (int i = 0; i < size - 1; i++)
    {   // смещаем значения влево: 0 <- 1; 1 <- 2; 2 <- 3 и т.д.
        newVector[i] = oldVector[i+1];
    }
    return newVector;
}

int main()
{
    std::vector<int> db(20);
    int inNumber;
    int count = 0;

    std::cout << "Input number (-1: show, -2: exit): ";
    std::cin >> inNumber;

    while (inNumber != -2)
    {
        if (inNumber != -1)
        {
            if (count >= db.size())
            {
                db = remove_firts(db);
                db[db.size()-1] = inNumber;
            }
            else
            {
                db[count] = inNumber;
            }
            count++;
        }
        else
        {
            if (count >= db.size()) count = db.size();
            for (int i = 0; i < count; i++)
            {
                std::cout << db[i] << " ";
            }
            std::cout << std::endl;
        }

        std::cout << "Input number: ";
        std::cin >> inNumber;
    }
}
