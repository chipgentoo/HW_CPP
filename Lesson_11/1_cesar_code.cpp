#include <iostream>
#include <string>

const int ABCSize = 26; // Размер алфавита

std::string cryptText(std::string srcStr, int shift)
{
    std::string outStr = ""; // строка для формирования сконвертарованного текста
    int letter = 0; // код буквы для конвертации
    bool Ok = true; // метка о конвертации

    if (shift == 0) return srcStr;

    for (int i = 0; i < srcStr.length(); i++)
    {
        if (srcStr[i] == ' ') {
            outStr += ' ';
            continue;
        }
        
        if (srcStr[i] >= 'A' && srcStr[i] <= 'Z') // Upper A-Z (65-90)
        {
            letter =  (int)srcStr[i] + shift; // код символа + смещение
            if (letter > (int)'Z') letter -= ABCSize;
            if (letter < (int)'A') letter += ABCSize;
            outStr += char(letter);
            continue;
        }

        if (srcStr[i] >= 'a' && srcStr[i] <= 'z') // Lower a-z (97-122)
        {
            letter =  (int)srcStr[i] + shift; // код символа + смещение
            if (letter > (int)'z') letter -= ABCSize;
            if (letter < (int)'a') letter += ABCSize;
            outStr += char(letter);
        }
    }
    return outStr;
}

std::string decryptText(std::string dcrStr, int shift)
{
    return cryptText(dcrStr, -shift);
}

int main()
{
    std::string srcStr, crStr, dcrStr; // source, crypt, decrypt
    int shift; // смещение

    std::cout << "Input source word or string: ";
    std::getline(std::cin, srcStr);

    std::cout << "Input shift: ";
    std::cin >> shift;

    std::cout << "Source text: " << srcStr << "\n" << std::endl;
    
    crStr = cryptText(srcStr, shift);
    std::cout << "Crypted text: " << crStr << "\n" << std::endl;

    dcrStr = decryptText(crStr, shift);
    std::cout << "Decrypted text: " << dcrStr << "\n" << std::endl;

}
