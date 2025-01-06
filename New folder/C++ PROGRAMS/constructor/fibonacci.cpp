// using prameterized constructor
// parameterized constructor : constructor having parameter
#include<iostream>
using namespace std;

class Fibonacci {
    private:
    int n;

    public:
    Fibonacci(int num) {
        n = num;
    }
    void generate() {
        int a = 0, b = 1, c;
        
        cout << "Fibonacci series up to " << n << " no: " << endl;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                cout << a << " ";
            }
            if (i == 2) {
                cout << b << " ";
            }
            c = a + b;
            a = b;
            b = c;
            cout << c << " ";
        }
    }
};

int main() {
    int no;
    
    cout << "Enter the number of no: ";
    cin >> no;

    Fibonacci fib(no);
    fib.generate();

}
