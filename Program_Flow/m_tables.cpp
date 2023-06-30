#include <iostream>

int main(){
    std::cout << "Now i'm going to show you the multiplication tables of 1 to 9\n";
    for(int i = 1; i < 10; i++){
        for (int j = 0; j < 10; j++){
            std::cout << i << " x " << j << " = " << i * j << "\n";
        }
    std::cout << "\n";
    }
    return 0;


}
