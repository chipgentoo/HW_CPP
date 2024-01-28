#include <iostream>

int main()
{
    // размеры комнаты
    int roomLenght = 20;
    int roomWidth = 15;

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
        }
    }
    return 0;
}