#include <stdio.h>
#include <iostream>

int main() {
    float numero1, numero2;
    
    std::cout << "Ingresa el primer número" << std::endl;
    std::cin >> numero1;
    
    std::cout << "Ingresa el segundo número" << std::endl;
    std::cin >> numero2;
    
    std::cout << "La suma es:" << numero1 + numero2 <<std::endl;
    std::cout << "La resta es:" << numero1 - numero2 <<std::endl;
    std::cout << "La multiplicación es:" << numero1 * numero2 <<std::endl;
    
    if (numero2 != 0) {
        std::cout << "La division es:" << numero1 / numero2 <<std::endl;
    } else {
        std::cout << "No se puede dividir entre 0" << std::endl;
    }
    
    return 0;
}