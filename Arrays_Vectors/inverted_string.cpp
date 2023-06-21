#include <iostream>
#include <string>

int main(){
    std::string word;
    std::string inverted_word;
    std::cout << "Enter a word:\n";
    std::cin >> word;
    for (int i = word.length(); i >= 0; i--){
        inverted_word += word[i];
    }
    std::cout << "Inverted word: " << inverted_word << "\n";
    return 0;
}
