#include <iostream>
#include <vector>

int main(){
    std::vector<int> vector1;
    std::vector<int> vector2;
    std::vector<std::vector<int>> vector2d;
    vector1.push_back(10);
    vector1.push_back(20);

    std::cout << vector1.size() << "\n" <<  vector1.at(0) << "\n" << vector1.at(1) << "\n";

    vector2.push_back(100);
    vector2.push_back(200);

    std::cout << vector2.size() << "\n" <<  vector2.at(0) << "\n" << vector2.at(1) << "\n";

    vector2d.push_back(vector1);
    vector2d.push_back(vector2);
    
    std::cout << vector2d.at(0).at(0) << "\n";
    std::cout << vector2d.at(0).at(1) << "\n";

    std::cout << vector2d.at(1).at(0) << "\n";
    std::cout << vector2d.at(1).at(1) << "\n";

}
