#include <iostream>
#include <string>

using std::string;

void pass_by_reef(string &s){
    s = "Changed";
}

int main(){
    string value;
    std::cout << "Please type a string\n";
    std::cin >> value;
    std::cout << "The string" << value << "now is";
    pass_by_reef(value);
    std::cout << value << "\n";

    return 0;
}
