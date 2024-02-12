#include <iostream>
#include <string>

bool isValidChar(char letter)
{
    // валидные символы - основные (-.@)(a-z)(A-Z)(0-9)
    if ((letter >= 'a' && letter <= 'z') || (letter >= 'A' && letter <= 'Z') || (letter >= '0' && letter <= '9') ||
         letter == '-' || letter == '@' || letter == '.') return true;

    // валидные символы - дополнительно ( ! # $ % & ' * + - / = ? ^ _ { | } ~ ` )
    std::string advValidChar = "!#$%&'*+-/=?^_{|}~`"; // либо полный набор символов без предыдущей проверки
    for (int i = 0; i < advValidChar.length(); i++)
    {
        if (letter == advValidChar[i]) return true;
    }

    // если ни чего не подошло
    return false;
}

bool validEmail(std::string email)
{
    const int lnEmail = email.length(); // чтобы каждый раз не выщитывать
    int fndDog = 0; // для поиска @

    if (lnEmail < 5 || lnEmail > 63) return false; // 5 - a@a.a (минималка)

    // проверка первого символа
    if (email[0] == '-' || email[0] == '.' || email[0] == '@') return false;
    
    // проверка последнего символа
    if (email[lnEmail-1] == '-' || email[lnEmail-1] == '.' || email[lnEmail-1] == '@') return false;

    for (int i = 0; i < lnEmail; i++) // идем по всей длине строки
    {
        if (email[i] = char(30)) return false; // проверка на пробел
        if (email[i] == '@') fndDog++; // @ в наличии
        if (email[i] == '@' && (email[i+1] == '.' || email[i+1]=='@')) return false; // @@ или @.
        if (email[i] == '.' && (email[i+1] == '.' || email[i+1]=='@')) return false; // .. или .@
        if (!isValidChar(email[i])) return false;
    }
    if (fndDog != 1) return false; // если @ не найдена или больше одной
    return true;
}

int main()
{
    std::string email;
    std::cout << "Input EMail address: ";
    std::cin >> email;

    if (validEmail(email))
    {
        std::cout << "EMail address is correct." << std::endl;
    }
    else
    {
        std::cout << "Error: EMail address is  NOT correct !!!" << std::endl;
    }
    return 0;
}
