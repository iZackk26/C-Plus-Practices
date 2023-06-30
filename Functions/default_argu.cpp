#include <iostream>
#include <string>

double price(int item_price, double tax = 0.05){
    return (item_price + (item_price * tax));
}

int main(){
    int product_price{};
    double tax{};
    std::cout << "Type yes if you are from the US or no if you are from another country:\n";
    std::string answer;
    std::cin >> answer;
    if (answer == "yes"){
        std::cout << "Please type the price of the product:\n";
        std::cin >> product_price;
        std::cout << "The price with tax is: " << price(product_price) << "\n";
    }
    else{
        std::cout << "Please type the price of the product:\n";
        std::cin >> product_price;
        std::cout << "Please type the tax in your country:\n";
        std::cin >> tax;
        std::cout << "The price with tax is: " << price(product_price, tax) << "\n";
    }
    return 0;
}

