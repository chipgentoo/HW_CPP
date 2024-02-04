#include <iostream>
#include <cmath>

int main()
{
    const float attenuation = 8.4;  // затухание
    float startAmp = 0;             // стартовая амплитуда
    float currentAmp = 0;           // текущая амплитуда
    float stopAmp = 0;              // амплитуда останова
    int countAtt = 0;               // кол-во затуханий

    std::cout << "Введите начальную амплитуду маятника: ";
    std::cin >> startAmp;

    std::cout << "Введите амплитуду, считающуюся остановом маятника: ";
    std::cin >> stopAmp;

    if (startAmp <=0 || stopAmp < 0 || stopAmp >= startAmp)
    {
        std::cout << "Амплитуды не должны быть отрицательными и амплитуда останова не должна превышать стартовую амплитуду.";
        return 1;
    }
    
    currentAmp = startAmp;
    while (currentAmp > stopAmp)
    {
        std::cout << "Затухание " << countAtt + 1 << ", амплитуда: " << currentAmp << "\n";
        currentAmp -= (currentAmp / 100) * attenuation;
        countAtt++;
    }

    std::cout << "Маятник считается остановленным за " << countAtt << " качаний";

    return 0;
}
