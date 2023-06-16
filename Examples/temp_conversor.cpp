// This is an scrip that converts Celsius a grados Fahrenheit

#include <iostream>

int main(){
    int celsius{0};
    int fahrenheit{0};
    int option{0};
    std::cout << "Temperature Converter" << "\n";
    std::cout << "1. Celsius to Fahrenheit  2. Fahrenheit to Celsius" << "\n";
    std::cin >> option;
    if (option == 1){
        std::cin >> celsius;
        std::cout << (celsius * 9/5) + 32<< " es el equivalente en fahrenheit" << "\n";
    }
    if (option == 2){
        std::cin >> fahrenheit;
        std::cout << (fahrenheit - 32) * 5/9<< " es el equivalente en celsius" << "\n";

    }    
    return 0;
}

