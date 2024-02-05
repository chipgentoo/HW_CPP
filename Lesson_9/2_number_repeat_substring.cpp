#include <iostream>
#include <string>

int main()
{
    std::string str;
    std::string repWord = "";
    bool isRep = false;

    std::cout << "Input string: ";
    std::cin >> str;

    int curPos = 0;

    for (int i = 1; i < str.length(); i++) // с первой позиции (нулевой незачем сравнивать)
    {
        if (str[curPos] == str[i]) // если символ в текущей позиции совпадает c любым из оставшихся
        {
            repWord += str[i]; // добавляем букву в повторяющееся слово
            curPos++; // сменили позицию на следующую
        }
        else // совпадений не найдено
        {
            curPos = 0; // обнуляем
            repWord = ""; // обнуляем
        }
    }

    std::cout << "Repeat word: " << repWord << "\n";
    isRep = true;

    for(int i = 0, j = 0; i < str.length(); ++i, ++j)
    {
        if(j == repWord.length()) j = 0;
        if(str[i] != repWord[j])
        {
            isRep = false;
            break;
        }
    }

    if(isRep) {
        std::cout << "Yes\n";
    }
    else
    {
        std::cout << "No\n";
    }
    return 0;
}
