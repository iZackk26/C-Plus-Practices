#include <iostream>



int main(){
    int numbers [5] {};
    std::cout << "Introduce 5 numbers that will be given in a average\n";
    for (int i = 0; i < 5; i++){
        std::cin >> numbers[i];
    };
    int sum = 0;
    for(int i = 0; i < 5; i++){
        sum += numbers[i];
    };
    std::cout << "The average is: " << sum/5 << "\n";

    return 0;


}
