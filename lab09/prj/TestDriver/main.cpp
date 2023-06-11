//task 9.1

#include <iostream>
#include <windows.h>
#define MODULESNEBESNIY_H_INCLUDED

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double waveHeight;
    std::cout << "Введіть висоту хвиль, м: ";
    std::cin >> waveHeight;

    if (waveHeight < 1) {
        std::cout << "CALM-RIPPLED" << std::endl;
    } else if (waveHeight >= 1 && waveHeight < 2) {
        std::cout << "SMOOTH-WAVELET" << std::endl;
    } else if (waveHeight >= 2 && waveHeight < 3) {
        std::cout << "SLIGHT" << std::endl;
    } else if (waveHeight >= 3 && waveHeight < 4) {
        std::cout << "MODERATE" << std::endl;
    } else if (waveHeight >= 4 && waveHeight < 5){
        std::cout << "ROUGH" << std::endl;
    }   else if (waveHeight >= 5 && waveHeight < 6){
        std::cout << "VERY ROUGH" << std::endl;
    }  else if (waveHeight >= 6 && waveHeight < 7){
        std::cout << "HIGH" << std::endl;
    }    else if (waveHeight >= 7 && waveHeight < 8){
        std::cout << "VERY HIGH" << std::endl;
    }    else if (waveHeight >= 8 && waveHeight < 9){
        std::cout << "PHENOMENAL" << std::endl;
    }

    return 0;
}

//task 9.2

#include <iostream>

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    double fahrenheit;
    std::cout << "Введіть температуру за шкалою Фаренгейта: ";
    std::cin >> fahrenheit;

    double celsius = fahrenheitToCelsius(fahrenheit);
    std::cout << "Температура у шкалі Цельсія: " << celsius << " °C" << std::endl;

    return 0;
}

//task 9.3

#include <iostream>

int countZeros(int num) {
    int zeroCount = 0;
    while (num != 0) {
        if ((num & 1) == 0) {
            zeroCount++;
        }
        num >>= 1;
    }
    return zeroCount;
}

int main() {
    int N;
    std::cout << "Введіть натуральне число N (від 0 до 65535): ";
    std::cin >> N;

    int bitD1 = (N >> 1) & 1;

    int zeroCount = countZeros(N);

    std::cout << "Кількість двійкових нулів у числі N: " << zeroCount << std::endl;
    std::cout << "Значення біту D1: " << bitD1 << std::endl;

    return 0;
}


