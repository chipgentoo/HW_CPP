#include <iostream>
#include <cassert>
#include <vector>

int main()
{
    std::vector<float> prices {2.5, 4.25, 3.0, 10.0}; // вектор цен
    std::vector<int> items {1, 1, 0, 3, 2, 2, 0}; // вектор покупок

    float totalCost = 0.0f;

    for (int i = 0; i < items.size(); i++)
    {
        assert (items[i] < prices.size()); // утверждаем. Возможно нужно if-else, но так короче.
        totalCost += prices[items[i]];
    }
    std::cout << "Total cost: " << totalCost << std::endl;
}
