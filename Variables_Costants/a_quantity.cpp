#include <iostream>
#include <string>

using std::string;

int main(){
    string sentence;
    char letter = 'a';
    std::cout << "Type a sentence\n";
    std::cin >> sentence;
    
    int count = 0;
    for(size_t i = 0; i < sentence.size(); i++){
        if(sentence[i] == letter){
            count ++;
        };
    };
    std::cout << "La palabra introducida tiene un total de " << count << " letras a\n";

    return 0;

}

