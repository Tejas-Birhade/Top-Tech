// Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance. Using of constructor

#include<iostream>
using namespace std;

class Employee {
    private:
        string name;
        int emp_id;
        double salary;

    public:
        Employee(string empName, int empID, double salary) {
            name = empName;
            emp_id = empID;
            salary = salary;
        }

        void Performance() {
            if (salary <= 10000) {
                cout << "Performance: Poor performance" << endl;
            } else if (salary > 10000 && salary <= 20000) {
                cout << "Performance: Good performance" << endl;
            } else {
                cout << "Performance: Excellent performance" << endl;
            }
        }

        void display() {
            cout << "Name: " << name << endl;
            cout << "Employee ID: " << emp_id << endl;
            cout << "Salary: $" << salary << endl;
            Performance(); 
        }
};

int main() {
    string empName;
    int empID;
    double salary;

    cout << "Enter employee name: ";
    getline(cin, empName);
    cout << "Enter employee ID: ";
    cin >> empID;
    cout << "Enter initial salary: ";
    cin >> salary;

    Employee emp(empName, empID, salary);

    emp.display();

}
