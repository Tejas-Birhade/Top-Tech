// Write a program to swap the two numbers using friend function without using third variable

#include <iostream>
using namespace std;

class B
{   
    public:
    int a;
    int b;

    void re() {
        cout << "Enter a & b:";
        cin >> a >> b;
    }

    friend void swap(B& obj);  
}; 

void swap(B& obj) {
    int temp = obj.a;
    obj.a = obj.b;
    obj.b = temp;
    cout << "After swap: a: " << obj.a << ", b: " << obj.b << endl;
}

int main() {
    B b;
    cout << "Before swap: ";
    b.re();
    swap(b);
}
