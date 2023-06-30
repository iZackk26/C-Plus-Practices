#include <iostream>
#include <string>
#include <vector>

int main(){
    double number{};
    short int count{};
    std::vector<double> numbers{};
    double result{};
    std::cout << "how many numbers you want to enter?\n";
    std::cin >> count;
    for(short int i = 0; i < count; i++){
        std::cin >> number;
        numbers.push_back(number);
    }
    for(auto i : numbers){
        result = result + i;
    }
    std::cout << "The average of the numbers you provided are\n" << result/count << "\n";
    return 0;
}
        


        

