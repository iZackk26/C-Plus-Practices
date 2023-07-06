#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
#include <algorithm>
#include <fstream>

class Person
{
    private:
        std::string name;
        int id{};
        int age{};
        std::string birthdate;
        std::string country;
        long double balance{};
        std::string email;
        long int phone{};
    public:
        void setName(std::string personName){
            name = personName;
        }

        void setId(int personId){
            id = personId;
        }

        void setAge(int personAge){
            age = personAge;
        }

        void setBirthdate(std::string personBirthdate){
            birthdate = personBirthdate;
        }

        void setCountry(std::string personCountry){
            country = personCountry;
        }
        void setBalance(long double personBalance){
            balance = personBalance;
        }

        void setEmail(std::string personEmail){
            email = personEmail;
        }
        void setPhone(long int personPhone){
            phone = personPhone;
        }
};

void menu(){
    //Variables needed to inicialize the class
    std::string name;
    int id{};
    int age{};
    std::string birthdate;
    std::string country;
    long double balance{};
    std::string email;
    long int phone{};
    //Variables needed to the menu
    int option{};
    bool exit = false;
    while(!exit){
        std::cout << "1. Add person" << std::endl;
        std::cout << "2. Delete person" << std::endl;
        std::cout << "3. Edit person" << std::endl;
        std::cout << "4. Show person" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Choose an option: ";
        std::cin >> option;
        switch(option){
            case 1:
                std::cout << "Name: ";
                std::cin >> name;
                std::cout << "Id: ";
                std::cin >> id;
                std::cout << "Age: ";
                std::cin >> age;
                std::cout << "Birthdate: mm/dd/yyyy";
                std::cin >> birthdate;
                std::cout << "Country: ";
                std::cin >> country;
                std::cout << "Balance: ";
                std::cin >> balance;
                std::cout << "Email: ";
                std::cin >> email;
                std::cout << "Phone: ";
                std::cin >> phone;
                Person person;
                person.setName(name);
                person.setId(id);
                person.setAge(age);
                person.setBirthdate(birthdate);
                person.setCountry(country);
                person.setBalance(balance);
                person.setEmail(email);
                person.setPhone(phone);

                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5: 
                exit = true;
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }

}

int main(){
    std::fstream file;
    file.open("data.txt", std::ios::in | std::ios::out | std::ios::app);
    if(file.is_open()){
        std::cout << "Openning file" << std::endl;
    }
    else{
        std::cout << "Creating file" << std::endl;
        // Here it try to create the file, where the std::ios::in is the lecture, std::ios::out is the write and std::ios::app is the append.
        file.open("data.txt", std::ios::in | std::ios::out | std::ios::app);
    }
    

}
