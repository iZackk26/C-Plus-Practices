#include <iostream>
#include <cmath>
#include <typeinfo>

int main(){
    double const value{-2.3}; //This returns the downgrade of the value, that means that in the case of 3.2, it will return the 3 int, for the negatives it's the same
    std::cout << std::floor(value) << "\n";
    return 0;

}
