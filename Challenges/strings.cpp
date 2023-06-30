#include <iostream>
#include <string>

int main(){
    std::string output;
    std::cout << "Please introduce a string\n";
    std::cin >> output;

    int length = output.length();

    for(int i = 0; i < length; i ++){

        // This display the element in the left, for example in the string ABC, it will display A, then AB, then ABC
        for(int j = 0; j <= i; j ++){
            std::cout << output[j];
        }
        
        //This is for the right side, each lap the in the for cicle it will display in the string the character that was before
        for(int j = i - 1 ; j >=0; j --){
            std::cout << output[j];
        }


        std::cout << "\n";



    }
}

