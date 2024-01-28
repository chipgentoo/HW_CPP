#include <iostream>

int main()
{
    // размеры комнаты
    int roomLenght = 0;
    int roomWidth = 0;

    std::cout << "Введите размеры комнаты для теста марсохода (x y): ";
    std::cin >> roomLenght >> roomWidth;

    // для возможности движения минимальные размеры комнаты 2х2
    // 0,0 0,1
    // 1,0 1,1
    if (roomLenght < 1 || roomWidth < 1)
    {
        std::cout << "Не приемлемые размеры комнаты.\n Минимально допустимые размеры 2х2\n";
        return 0; // выход
    }

    // центр комнаты ( начальные координаты марсохода)
    int marsX = roomLenght / 2;
    int marsY = roomWidth / 2;

    // ASWD - управление, X - выход
    char route;

    std::cout << "Управление марсоходом a-Влево, d-Вправо, w-Вперед, s-Назад, x-Выход\n";
    while (true)
    {
        std::cout << "Марсоход находится на позиции " << marsX << ", " << marsY << "\n";
        std::cout << "Оператор: ";
        std::cin >> route;

        switch (route)
        {
        case 'a': // Влево
            if (marsX > 0) marsX -= 1;
            break;
        
        case 'd': // Вправо
            if (marsX < roomLenght) marsX += 1;
            break;
        
        case 'w': // Вперед
            if (marsY < roomWidth) marsY += 1;
            break;
        
        case 's': // Назад
            if (marsY > 0) marsY -= 1;
            break;
        
        case 'x': // Выход
            return 0;

        default :
            std::cout << "Ошибка! Нажата НЕ клавиша управления.\n";
        }
    }
    return 0;
}