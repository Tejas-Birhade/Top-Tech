//Accept 5 employees name and salary and count average and total salary

#include <stdio.h>

int main() {
    char names[5][50]; 
    int salaries[5];   
    int total_salary = 0;
    float average_salary;

    printf("Enter the names and salaries of 5 employees:\n");
    for (int i = 0; i < 5; ++i) {
        printf("Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", names[i]);  
        printf("Salary: $");
        scanf("%d", &salaries[i]);  
        total_salary += salaries[i]; 
    }

    average_salary = (float)total_salary / 5;

    printf("\nTotal salary: $%d\n", total_salary);
    printf("Average salary: $%.2f\n", average_salary);
}
