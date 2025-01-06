// Write a C++ Program display Student Mark sheet using Multiple inheritance
#include <iostream>
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        int rollNumber;

    public:
        void get_data() {
            cout << "Enter name: ";
            getline(cin, name);
            cin.ignore(); 
            cout << "Enter roll number: ";
            cin >> rollNumber;  
        }
        void display() {
            cout << "Name: " << name << endl;
            cout << "Roll Number: " << rollNumber << endl;
        }
};

class Student : public Person {
    public:
        void inputStudentData() {
            get_data(); 
        }

        void displayStudentData() {
            display();
        }
};

class Marks : public Student {
    private:
        float subject1;
        float subject2;
        float subject3;
        float total;
        float average;

    public:
        // Function to input marks
        void inputMarks() {
            cout << "Enter marks for Subject 1: ";
            cin >> subject1;
            cout << "Enter marks for Subject 2: ";
            cin >> subject2;
            cout << "Enter marks for Subject 3: ";
            cin >> subject3;
        }

        void avg_total() {
            total = subject1 + subject2 + subject3;
            average = total / 3;
        }

        void displayMarks() {
            displayStudentData(); 
            cout << "Marks in Subject 1: " << subject1 << endl;
            cout << "Marks in Subject 2: " << subject2 << endl;
            cout << "Marks in Subject 3: " << subject3 << endl;
            cout << "Total Marks: " << total << endl;
            cout << "Average Marks: " << average << endl;
        }
};

int main() {
    Marks marks;

    cout << "Enter Student Details:\n";
    marks.inputStudentData();
    marks.inputMarks();

    marks.avg_total();

    cout << "\nMark Sheet:\n";
    marks.displayMarks();

}
