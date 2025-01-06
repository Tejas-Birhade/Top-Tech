// Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;

class BankAccount {
    private:
        int ac_no;
        double balance;

    public:
        void setAccount(int accNo, double initialBalance) {
            ac_no = accNo;
            balance = initialBalance;
        }

        void deposit(double amount) {
            balance += amount;
        }

        void withdraw(double amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                cout << "Insufficient balance!" << endl;
            }
        }
        void display() {
            cout << "Account Number: " << ac_no << endl;
            cout << "Balance: " << balance << endl;
        }
};

int main() {
    BankAccount ac;

    ac.setAccount(12345, 1000.0); 
    ac.deposit(500.0);  
    ac.withdraw(200.0);  
    ac.display(); 

}
