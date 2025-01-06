// Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalen


#include <iostream>
using namespace std;

class Tri{
private:
    int side1, side2, side3;

public:
    Tri(int p, int q, int r) {
        side1 = p;
        side2 = q;
        side3 = r;
    }

    void check() {
        if (side1 == side2 && side2 == side3) {
            cout << "The triangle is equilateral." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "The triangle is isosceles." << endl;
        } else {
            cout << "The triangle is scalene." << endl;
        }
    }
};

int main() {
    int a, b, c;

    cout << "Enter the lengths of the triangle: ";
    cin >> a >> b >> c;
    
    Tri tr(a,b,c);
    tr.check();

}
