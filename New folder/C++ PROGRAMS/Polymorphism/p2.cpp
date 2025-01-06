// Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;
class Matrix {
    int size;
    int arr[100];
public:
    Matrix(int s) {
        size = s;
    }
    void input() {
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void display(){
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    Matrix operator+(Matrix &m) {
        Matrix temp(size);
        for (int i = 0; i < size; i++) {
            temp.arr[i] = arr[i] + m.arr[i];
        }
        return temp;
    }
};

int main() {
    int size;
    cout << "Enter size of matrices: ";
    cin >> size;

    Matrix m1(size), m2(size);

    cout << "Enter elements for first matrix:\n";
    m1.input();
    cout << "Enter elements for second matrix:\n";
    m2.input();

    Matrix m3 = m1 + m2;

    cout << "Resultant matrix after addition:\n";
    m3.display();
}
