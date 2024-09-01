// 9. WAP to show difference between Structure and Union. 

#include <stdio.h>

struct Employee {
    int empno;
    char empname[100];
    char address[200];
    int age;
};

union Data {
    int i;
    float f;
    char str[100];
};

int main() {
    struct Employee emp1;
    emp1.empno = 123;
    snprintf(emp1.empname, sizeof(emp1.empname), "John Doe");
    snprintf(emp1.address, sizeof(emp1.address), "1234 Elm Street, Anytown, USA");
    emp1.age = 30;
    
    union Data data1;
    data1.i = 10;
    
    printf("Structure Employee:\n");
    printf("Employee Number: %d\n", emp1.empno);
    printf("Employee Name: %s\n", emp1.empname);
    printf("Employee Address: %s\n", emp1.address);
    printf("Employee Age: %d\n", emp1.age);
    
    printf("\nUnion Data:\n");
    printf("Data (int): %d\n", data1.i);
    
    data1.f = 5.5;
    printf("Data (float): %.2f\n", data1.f);
    
    snprintf(data1.str, sizeof(data1.str), "Hello, Union!");
    printf("Data (string): %s\n", data1.str);
    
}
