#include <iostream>

int main(){
    int num{};
    do{
        std::cout << "Type a number between 1 and 9: \n";
        std::cin >> num;
    }
    while(num < 1 || num > 9);
    std::cout << "Thanks!" << "\n";
    return 0;

}
