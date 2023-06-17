#include <iostream>
#include <vector>

int main(){
    std::vector <int> v;
    int number = 0;
    int result = 0;
    std::cout <<"Introduce 5 numbers and i will show the biggest one\n";
    for(int i = 0; i < 5; i ++){
    std::cin >> number;
    v.push_back(number);
    };
    for(const auto&element : v){
        if (element > result){
            result = element;
        };
    };
    std::cout << "The biggest number in the vector is " << result << "\n";

    return 0;

}
