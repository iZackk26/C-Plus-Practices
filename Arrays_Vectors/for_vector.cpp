#include <iostream>
#include <vector>

int main(){
    std::vector<int> v = {98,100,85,90,95};
    double sum = 0;
    double avg = 0;
    for (auto element: v){
        sum += element;
    }
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << sum/v.size() << "\n";
    return 0;
}
