#include <iostream>
#include <string>

class BankAccount
{
    private:
        int id{};
        double balance{};
        std::string password;
    public:
        std::string name;
        void depositMoney(double amount){
            balance += amount;
        }
        void withdrawMoney(double amount){
            std::cout << "Withdrawing " << amount << " from " << name << "'s account." << std::endl;
            balance -= amount;
            std::cout << "Your new balance is " << balance << std::endl;
        }
        void printBalance(){
            std::cout << "Your balance is " << balance << std::endl;
        }
        void setPassword(int pass);
};


void BankAccount::setPassword(int passw){
    password = passw;
}


int main(){
    std::string name;
    int money{};
    int password{};
    std::cout << "Enter your name: \n";
    std::cin >> name;
    std::cout << "Enter your password: \n";
    std::cin >> password;
    std::cout << "Enter your initial balance: \n";
    std::cin >> money;
    BankAccount account;
    account.setPassword(password);
    account.name = name;
    account.depositMoney(money);
    account.printBalance();
    std::string next {"yes"};
    std::cout << "Would you like to withdraw money? (yes/no): \n";
    std::cin >> next;
    if(next == "yes"){
        std::cout << "How much would you like to withdraw? \n";
        std::cin >> money;
        account.withdrawMoney(money);
    }

}




