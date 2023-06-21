#include <iostream>

int prime(int number){
    int counter{0};
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            counter ++;
        }
    }
    if (counter == 0){
        std::cout << "Is a prime number \n";

    }
    return 0;
}



int main(){
    int user_option;
    std::cout << "Type a number between 1 and 100: \n ";
    std::cin >> user_option;
    if(user_option > 100 || user_option < 1){
        std::cout << "Please type a number that is between 1 and 100: ";
        return 0;
    }
    std::cout << "The number you type in has the follow characteristics: \n";
    if(user_option % 2 == 0){
        std::cout << "Is odd \n";
    }
    else if (user_option % 3 == 0){
        std::cout << "Is even \n";
    }
    // Call the function prime
    prime(user_option);

}
