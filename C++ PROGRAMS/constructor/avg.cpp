// find avg using constructor
#include<iostream>
using namespace std;

class Average {
    private:
    int numbers[5];  
    float avg;

    public:
    Average(int n1, int n2, int n3, int n4, int n5) {
        numbers[0] = n1;
        numbers[1] = n2;
        numbers[2] = n3;
        numbers[3] = n4;
        numbers[4] = n5;
        avg = (numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4]) / 5;
    }
    void display() {
        cout << "The numbers are: ";
        for(int i = 0; i < 5; i++) {
            cout << numbers[i] << " ";
        }
        cout << endl;
        cout << "The average is: " << avg << endl;
    }
};

int main() {
    int n1, n2, n3, n4, n5;

    cout << "Enter five numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    Average avgObj(n1, n2, n3, n4, n5);

    avgObj.display();

}