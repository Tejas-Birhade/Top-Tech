// 12. WAP to accept 5 students name and store it in array 

#include <stdio.h>

#define NUM_STUDENTS 5
#define NAME_LENGTH 100

int main() {
    char students[NUM_STUDENTS][NAME_LENGTH];
    
    printf("Enter the names of %d students:\n", NUM_STUDENTS);
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(students[i], NAME_LENGTH, stdin);

        size_t length = strlen(students[i]);
        if (length > 0 && students[i][length - 1] == '\n') {
            students[i][length - 1] = '\0';
        }
    }
    
    printf("\nThe names of the students are:\n");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("Name %d: %s\n", i + 1, students[i]);
    }
    
}
