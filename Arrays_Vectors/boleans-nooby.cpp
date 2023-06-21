#include <ios>
#include <iostream>

int main(){
    int num;
    int upper{20};
    int lower{10};
    
    std::cout << "Type a number that is between this tho numbers " << upper << ":" << lower << "\n";
    std::cin >> num;

    bool result {false};
    result = (10 < num && num < 20);

    std::cout << std::boolalpha << result << "\n";
    return 0;
}

