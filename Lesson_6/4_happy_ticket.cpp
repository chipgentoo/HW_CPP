#include <iostream>

int main()
{
    int ticket;
    int ls, rs; // left && right summ

    std::cout << "Введите номер билета: ";
    std::cin >> ticket;

    if (ticket >= 100000 && ticket <=999999)
    {
        int lt = ticket / 1000;
        int rt = ticket % 1000;

        while (lt != 0) // расчет левой суммы (по хорошему отдельной функцией)
        {
            ls += lt % 10;
            lt /= 10;
        }

        while (rt != 0) // расчет правой суммы (по хорошему отдельной функцией)
        {
            rs += rt % 10;
            rt /= 10;
        }

        if (ls == rs)
        {
            std::cout << "Этот билет счастливый\n";
        }
        else
        {
            std::cout << "Повезёт в следующий раз!\n";
        }
    }
    else
    {
        std::cout << "Введен не верный номер билета.\n";
    }
    return 0;
}