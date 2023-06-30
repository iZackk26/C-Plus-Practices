#include <iostream>
#include <string>

class Person{
    public:
        //Atributes
        int id{};
        std::string name;
        int age{};
        std::string gender;

        //Methods
        void show_information(){
            std::cout << id << " " << name << " " << age << " " << gender << "\n";
        }

        int show_balance(int);
};

int main(){
    Person izack;
    izack.id = 23723193;
    izack.name = "iZack";
    izack.age = 18;
    izack.gender = "Male";
    izack.show_information();
}
