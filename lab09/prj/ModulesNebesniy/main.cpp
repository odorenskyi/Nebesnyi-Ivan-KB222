
#include <iostream>
#include <windows.h>
#define MODULESNEBESNIY_H_INCLUDED

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double waveHeight;
    std::cout << "¬вед≥ть висоту хвиль, м: ";
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

