// Write a program of to swap the two values using template
#include<iostream>
using namespace std;

template <class T>
class Swap { 
    public:
        T a, b, Temp; 
        Swap(T p, T q) {
            a = p;
            b = q;
        }
        void display() {
            cout << "Before swap: " << endl;
            cout << "A = " << a << "\nB = " << b << endl;

            Temp = a;
            a = b;
            b = Temp;

            cout << "After swap: " << endl;
            cout << "A = " << a << "\nB = " << b << endl;
        }
};

int main() {
    Swap<int> sw1(40, 50);  
    sw1.display(); 

}
