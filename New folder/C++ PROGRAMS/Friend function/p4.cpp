// Write a program to find the max number from given two numbers using friend function
#include<iostream>
using namespace std;

class num1; 

class num2 {
    private:
        int no = 10;
    public:
        friend int max(num2, num1);
};

class num1 {
    private:
        int no = 20;
    public:
        friend int max(num2, num1);
};

int max(num2 n2, num1 n1) {
    if(n2.no > n1.no)
        return n2.no;
    else
        return n1.no;
}

int main() {
    num2 tt;
    num1 mm;
    cout << "Max = " << max(tt, mm) << endl;
}
