#include <iostream>

int main(){
    int n1;
    int n2;
    std::cout << "Enter two numbers: \n";
    std::cin >> n1 >> n2;
    std::cout << n1 << ((n1 % 2 ==0) ? " is even" : " is odd") << "\n";
    std::cout << n2 << ((n2 % 2 ==0) ? " is even" : " is odd") << "\n";
    return 0;



}
