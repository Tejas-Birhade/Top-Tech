// Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>
using namespace std;
class Person {
    protected:
        string name;
        int age;

    public:
        void getdata() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter age: ";
            cin >> age;
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person {
    private:
        float percentage;

    public:
        void get_std_data() {
            getdata(); 
            cout << "Enter percentage: ";
            cin >> percentage;
            cin.ignore(); 
        }

        void set_std_data() {
            display(); 
            cout << "Percentage: " << percentage << "%" << endl;
        }
};

class Teacher : public Person {
    private:
        double salary;

    public:
        void get_tec_data() {
            getdata(); 
            cout << "Enter salary: ";
            cin >> salary;
            cin.ignore(); 
        }

        void set_tec_data() {
            display(); 
            cout << "Salary: " << salary << endl;
        }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter Student Details:\n";
    student.get_std_data();

    cout << "\nEnter Teacher Details:\n";
    teacher.get_tec_data();

    cout << "\nStudent Details:\n";
    student.set_std_data();

    cout << "\nTeacher Details:\n";
    teacher.set_tec_data();

}
