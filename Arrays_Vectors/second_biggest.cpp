#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector <int> v;
    int number;
    int checker = 0;
    std::cout << "Introduce 5 numbers and i will display the second biggest number\n";
    for(int n = 0; n <5; n++){
        std::cin >> number;
        v.push_back(number);
    }

    auto max = std::max_element(v.begin(), v.end());
    for(const auto&element: v){
        if (element > checker && element < *max){
                checker = element;
        }

    }
    std::cout <<"The second biggest number is: " << checker << "\n";
    return 0;
}

