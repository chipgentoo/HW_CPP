/* Что нужно сделать:
        На вход программе поступают десять фамилий в формате строк.
        Это фамилии жильцов квартир с первой по десятую.
        Необходимо прочитать эти фамилии и записать в одномерный массив.
        Далее пользователь вводит три номера квартир.
        Необходимо вывести в консоль фамилию жильца, проживающего в этой квартире.
        Если пользователь введёт некорректный номер квартиры, необходимо сообщить ему об этом.
*/
#include <iostream>
#include <string>

int main()
{
    std::string arrLastName[10];

    for (int i = 0; i < 10; i++)
    {
        std::cout << "Enter the last name in the " << i + 1 << "st apartment: "; // кватриры нумеруются с 1
        std::cin >> arrLastName[i];
    }
    std::cout << "=======================\n";

    int numberApartment;
    for (int i = 0; i < 3; i++) // 3 номера квартир
    {
        std::cout << "Enter apartment number: ";
        std::cin >> numberApartment;

        if (numberApartment < 1 || numberApartment > 10)
        {
            std::cout << "Error: Apartment number does not exist.";
            // return 1;
        }

        std::cout << "Lives in the apartment: " << arrLastName[numberApartment-1] << std::endl;
    }
}
