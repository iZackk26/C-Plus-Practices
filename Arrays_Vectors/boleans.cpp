#include <ios>
#include <iostream>

int main(){
    int result1;
    int result2;

    std::cout << "Introduce 2 numbers and i will show if they are equal\n";
    std::cin >> result1 >> result2;
    if(result1 == result2){
        std::cout << std::boolalpha << true << "\n";
    }
    else{
        std::cout << std::boolalpha << false << "\n";
    };
    return 0;

}
