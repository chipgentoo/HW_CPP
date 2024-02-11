#include <iostream>
#include <vector>

std::vector<int> remove_firts(std::vector<int> vec)
{
    std::vector<int> vecTemp(vec.size()-1);
    for (int i = 0; i < vecTemp.size(); i++)
    {
        vecTemp[i] = vec[i]; // смещаем значения влево: 0 <- 1; 1 <- 2; 2 <- 3 и т.д.
    }
    vecTemp.resize(1);
    return vecTemp;
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
