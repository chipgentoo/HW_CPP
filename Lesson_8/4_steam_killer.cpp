#include <iostream>

int main()
{
    float sizeFile = 0.0f;
    float speedInet = 0.0f;

    float currentSize = 0.0f; // размер скачанного в Mb
    int currentSeconds = 0;
    int percents = 0;

    std::cout << "Введите размер файла (МБ): ";
    std::cin >> sizeFile;
    if (sizeFile <= 0)
    {
        std::cout << "Ошибка: не верный размер файла.\n";
        return 1;
    }
    
    std::cout << "Введите скорость соединения (МБ/сек): ";
    std::cin >> speedInet;
    if (speedInet <= 0)
    {
        std::cout << "Ошибка: скорость соединения не может быть меньше 0.\n";
        return 1;
    }

    while (currentSize < sizeFile)
    {
        currentSize += speedInet;
        if (currentSize > sizeFile) currentSize = sizeFile;

        percents = currentSize / (sizeFile / 100);
        currentSeconds++;
        
        std::cout << "Прошло: " << currentSeconds << " сек. " <<
                     "Скачано: " << currentSize << " из " << sizeFile << " МБ " <<
                     "(" << percents << "%)\n";
    }

    return 0;
}
