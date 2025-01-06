// Write a C++ Program to illustrates the use of Constructors in multilevel inheritance
#include <iostream>
using namespace std;

class A { //base
public:
    A() {
        cout << "A Constructor Called" << endl;
    }
};
class B : public A { //child of A
public:
    B() {
        cout << "B Constructor Called" << endl;
    }
};
class C : public B {//child of B
public:
    C() {
        cout << "C Constructor Called" << endl;
    }
};

int main() {

    C C;
}
