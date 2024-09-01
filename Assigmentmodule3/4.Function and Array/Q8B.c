// WAP to reverse a string and check that the string is palindrome or not 
// Write a program of structure employee that provides the following 
// b. Write a program of structure for five employee that 
// provides the following information -print and display 
// empno, empname, address andage 
#include <stdio.h>

struct Employee {
    int empno;
    char empname[100];
    char address[200];
    int age;
};

void inputEmployee(struct Employee *e);
void printEmployee(const struct Employee *e);

int main() {
    struct Employee employees[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter information for employee %d:\n", i + 1);
        inputEmployee(&employees[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("\nInformation for employee %d:\n", i + 1);
        printEmployee(&employees[i]);
    }
    
    return 0;
}

void inputEmployee(struct Employee *e) {
    printf("Enter employee number: ");
    scanf("%d", &e->empno);
    getchar(); 
    
    printf("Enter employee name: ");
    fgets(e->empname, sizeof(e->empname), stdin);
    e->empname[strcspn(e->empname, "\n")] = '\0'; 
    
    printf("Enter employee address: ");
    fgets(e->address, sizeof(e->address), stdin);
    e->address[strcspn(e->address, "\n")] = '\0'; 
    
    printf("Enter employee age: ");
    scanf("%d", &e->age);
}

void printEmployee(const struct Employee *e) {
    printf("Employee Number: %d\n", e->empno);
    printf("Employee Name: %s\n", e->empname);
    printf("Employee Address: %s\n", e->address);
    printf("Employee Age: %d\n", e->age);
}
