// 17.WAP to show difference between Structure and Union. 

#include <stdio.h>

struct Employee {
    int id;
    float salary;
};

union Data {
    int intValue;
    float floatValue;
};

int main() {
    struct Employee emp;
    
    emp.id = 101;
    emp.salary = 75000.50;

    printf("Structure:\n");
    printf("Employee ID: %d\n", emp.id);
    printf("Employee Salary: %.2f\n", emp.salary);

    union Data data;
    
    data.intValue = 10;
    printf("\nUnion (after setting intValue):\n");
    printf("Integer Value: %d\n", data.intValue);
    
    data.floatValue = 220.5;
    printf("Float Value: %.2f\n", data.floatValue);
    
    printf("Integer Value (may be corrupted): %d\n", data.intValue);

}
