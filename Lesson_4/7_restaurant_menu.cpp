#include <iostream>

int main()
{
    int numberDay;
    const std::string baseMenu = "Комплексный обед";
    std::string extendedMenu;
    std::string fullMenu;

    std::cout << "Введите день недели (1 .. 7): ";
    std::cin >> numberDay;

    std::cout << "Меню на сегодня ";

    switch (numberDay)
    {
    case 1:
        std::cout << "(Понедельник)\n";
        extendedMenu = "Плюшка к чаю";
        break;
    case 2:
        std::cout << "(Вторник)\n";
        extendedMenu = "Ватрушка с творогом";
        break;
    case 3:
        std::cout << "(Среда)\n";
        extendedMenu = "Мини тортик";
        break;
    case 4:
        std::cout << "(Четверг)\n";
        extendedMenu = "Печеньки";
        break;
    case 5:
        std::cout << "(Пятница)\n";
        extendedMenu = "Сушки / Баранки";
        break;
    case 6:
        std::cout << "(Суббота)\n";
        extendedMenu = "Варенье (2 ст. ложки)";
        break;
    case 7:
        std::cout << "(Воскресение)\n";
        extendedMenu = "Сгущенка";
        break;
    }

    fullMenu = baseMenu + "\n" + extendedMenu + "\n";

    if (numberDay < 1 || numberDay > 7)
    {
        std::cout << "Не верный день недели.";
    }
    else
    {
        std::cout << fullMenu;
    }

    return 0;
}
