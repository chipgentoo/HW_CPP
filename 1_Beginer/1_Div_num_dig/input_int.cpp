#include <iostream>
#include <string>

using namespace std;

int input_int(string description)
{
    string str;
    cout << description;
    cin >> str;
    int res;
    try
    {
        res = stoi(str);
    }
    catch (invalid_argument e)
    {
        cout << "Ошибка: Введено не числовое значение!\n";
    }
    return res;
}