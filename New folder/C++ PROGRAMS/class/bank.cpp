// Define a class to represent a bank account. Include the following members:

#include<iostream>
using namespace std;

class bank {
    public:
    string name;
    int account_number;
    string ac_type;
    int balance;
    int deposit;
    int withdraw;
    
    public:
    void getdata() {
        cout << "Enter name of Depositor: ";
        cin >> name;
        cout << "Enter account number: ";
        cin >> account_number;
        cout << "Enter account type: ";
        cin.ignore();
        getline(cin, ac_type);
        cout << "Enter initial balance: ";
        cin >> balance;
    }
    
    void depo() {
        cout << "Enter deposit amount: ";
        cin >> deposit;
        balance = balance + deposit;
        cout << "Balance after deposit: " << balance << endl;
    }
    
    void wid() {
        cout << "Enter withdrawal amount: ";
        cin >> withdraw;
        if (withdraw <= balance) {
            balance = balance - withdraw;
            cout << "Balance after withdrawal: " << balance << endl;
        } else {
            cout << "Insufficient balance for withdrawal!" << endl;
        }
    }
    
    void displayData() {
        cout << "Name of depositor: " << name << endl;
        cout << "Account number: " << account_number << endl;
        cout << "Account type: " << ac_type << endl;
        cout << "Final balance: " << balance << endl;
    }
};

int main() {
    bank b;  
    
    b.getdata();     
    b.depo();        
    b.wid();         
    b.displayData(); 
}
