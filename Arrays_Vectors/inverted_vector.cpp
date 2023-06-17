#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

int main(){
    vector <int> result;
    int number = 0;

    std::cout << "Introduce 5 numbers\n";
    
    for(int i =0; i < 5; i++){
        std:: cin >>  number;
    result.push_back(number);
    }
    std::cout << "The numbers in the vector are \n";
    for(const auto &element : result){
        std::cout << element << "\n";
    }
    std::reverse(result.begin(), result.end());
    std::cout << "The numbers in the vector in reverse order are \n";
    for(const auto &element : result){
        std::cout << element << "\n";
    }

    return 0;
}
