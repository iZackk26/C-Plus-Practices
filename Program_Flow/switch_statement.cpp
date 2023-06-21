#include <iostream>

int main(){
    int option;
    std::cout << "Type an option from 1 to 3 \n";
    std::cin >> option;
    switch(option){
        case 1: std::cout << "Option 1 is selected \n";
                break;
        case 2: std::cout << "Option 2 is selected \n";
                break;
        case 3: std::cout << "Option 3 is selected \n";
                break;
        default: std::cout << "Invalid option \n";
    }
    return 0;

}
