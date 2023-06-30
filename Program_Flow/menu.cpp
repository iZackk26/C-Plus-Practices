#include <iostream>
#include <string>
#include <vector>

int prime(int number){
    int i;
    for(i = 2; i < number; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;
}

int palindrome(int number){
    int result = 0;
    int temp = number;
    while(temp != 0){
        result = result * 10 + temp % 10;
        temp /= 10;
    }
    if(result == number){
        return 1;
    }
    return 0;
}

int main(){
    std::string continue_op = "n";
    do{
    int number = {};
    std::cout << "Welcome to Check the number program" << "\n";
    std::cout << "Please enter a number: ";
    std::cin >> number;
    if(prime(number) == 1){
        std::cout << number << " is a prime number" << "\n";
    }
    else{
        std::cout << number << " is not a prime number" << "\n";
    }
    if(palindrome(number) == 1){
        std::cout << number << " is a palindrome number" << "\n";
    }
    else{
        std::cout << number << " is not a palindrome number" << "\n";
    std::cout <<" Do you want to continue? (y/n): ";
    std::cin >> continue_op;
    }
    }while(continue_op == "y");
    std::cout << "Thank you for using the program" << "\n";
    return 0;
}




