#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector <int> v;
    int n;
    std::cout << "Introduce the numbers you want to get the average of:\n";
    for(int i =0; i < 5; i ++){
        std::cin >> n;
        v.push_back(n);
    }
    int sum = 0;
    for(const auto &element : v){
        sum += element;
    }
    std::cout << "The average is: " << sum/v.size() << "\n";
    return 0;

}
