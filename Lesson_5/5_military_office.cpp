#include <iostream>

int main()
{
    int height;     // Рост
    int weight;     // Вес
    int numHands;   // Кол-во рук
    int numLegs;    // Кол-во ног
    int hoursFly;   // Кол-во нелетанных часов
    std::string eyesColor; // Цвет глаз

    std::cout << "Введите данные призывника:\n";
    std::cout << "Рост: ";
    std::cin >> height;
    std::cout << "Вес: ";
    std::cin >> weight;
    std::cout << "Кол-во рук: ";
    std::cin >> numHands;
    std::cout << "Кол-во ног: ";
    std::cin >> numLegs;
    std::cout << "Налётанные часы: ";
    std::cin >> hoursFly;
    std::cout << "Цвет глаз: ";
    std::cin >> eyesColor;

    if ((numHands == 2 && numLegs == 2) && (height >=145 && height <= 165) && (weight >= 45 && weight <=65) && hoursFly >= 1000)
    {
        if (eyesColor != "Green" || eyesColor != "Зеленые")
        {
            std::cout << "Принят в комманду летчиков.";
            return 0;
        }
        std::cout << "У Вас глаза зеленые. Мы подумаем и Вам перезвоним ))";
    }
    else
    {
        std::cout << "Не годен к полетам";
    }

    return 0;
}