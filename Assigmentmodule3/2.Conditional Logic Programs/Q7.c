//Accept marks from user and check pass or fail

#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 50) {
        printf("You have passed.\n");
    } else {
        printf("You have failed.\n");
    }
}
