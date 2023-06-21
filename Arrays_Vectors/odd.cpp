#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector <int> v;
    int number;
    std::vector <int> result;

    std::cout << "Type 5 numbers and i will show the odd ones\n";
    
    for(int i = 0; i < 5; i ++){
        std::cin >> number;
        v.push_back(number);

    }
    for(const auto&element; v){
        if (element % 2 == 0){
            result.push_back(element);
        }
    }
    
}
