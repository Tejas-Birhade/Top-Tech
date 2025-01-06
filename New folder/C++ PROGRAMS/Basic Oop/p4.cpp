// WAP to create simple calculator using class

#include<iostream>
using namespace std;

class Calculator {
    public:
    int a, b;
    void number() {
        cout << "Enter number 1: ";
        cin >> a;
        cout << "Enter number 2: ";
        cin >> b;
    }
    void add() {
        int res = a + b;
        cout << "Addition is: " << res << endl;
    }
    void sub() {
        int res = a - b;
        cout << "Subtraction is: " << res << endl;
    }
    void mul() {
        int res = a * b;
        cout << "Multiplication is: " << res << endl;
    }
    void div() {
        if (b == 0) {
            cout << "Error: Division by zero!" << endl;
            return;
        }
        int res = a / b;
        cout << "Division is: " << res << endl;
    }
};

int main() {
    Calculator c;
    char ch;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> ch;

    switch (ch) {
        case '+':
            c.number();
            c.add();
            break;
        case '-':
            c.number();
            c.sub();
            break;
        case '*':
            c.number();
            c.mul();
            break;
        case '/':   
            c.number();
            c.div();
            break;
        default:
            cout << "Invalid operator entered" << endl;
    }

}
