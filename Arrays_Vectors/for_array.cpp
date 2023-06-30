#include <iostream>

int main(){
    int arr[5] {1, 2, 3, 4, 5};
    for (int score: arr){
        std::cout << score << "\n";
    }
    return 0;
}
