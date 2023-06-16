#include <iostream>

int main(){
    int option = {0};
    int var1 = {0};
    int var2 = {0};
    std::cout << "Que operacion deseas realizar?" << "\n";
    std::cout << "1. Sumar 2. Restar 3. Multiplicar 4. Dividir " << "\n";
    std::cin >> option;
    if (option == 1){
        std::cout << "Ingresa tus dos numeros: " << "\n";
        std::cin >> var1;
        std::cin >> var2;
        std::cout << "La suma de los numeros es de:" << var1 + var2;
    };
    if (option == 2){
        std::cout << "Ingresa tus dos numeros: " << "\n";
        std::cin >> var1;
        std::cin >> var2;
        std::cout << "La suma de los numeros es de:" << var1 - var2;
    return 0;

    };
    if (option == 3){
        std::cout << "Ingresa tus dos numeros: " << "\n";
        std::cin >> var1;
        std::cin >> var2;
        std::cout << "La suma de los numeros es de:" << var1 * var2;
    };
    if (option == 4){
        std::cout << "Ingresa tus dos numeros: " << "\n";
        std::cin >> var1;
        std::cin >> var2;
        std::cout << "La suma de los numeros es de:" << var1 / var2;
    };

    return 0;


}
