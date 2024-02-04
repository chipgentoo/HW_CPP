#include <iostream>
#include <string>

int main()
{
    std::string text;
    std::string world;
    int countWorld = 0;

    std::cout << "Input text: ";
    std::getline(std::cin,text);

    std::cout << "Input world: ";
    std::cin >> world;

    for (int i = 0; i < text.length(); i++)
    {
        if (world[0] == text[i]) // если найдена первая буква
        {
            bool foundWorld = true; // считаем что типа нашли слово но проверяем оно ли?
            for (int j = 0; j < text.length() && j < world.length(); j++) // сначала бОльшую(text) потом меньшую (слово)
            {
                if (world[j] != text[i + j]) // если от первой буквы не все совпадают значит не оно.
                {
                    foundWorld = false;
                }
            }
            if (foundWorld) countWorld++;
        }
    }
    std::cout << "Кол-во вхождений слова в текст: " << countWorld << "\n";
    return 0;
}