/*Write a C program to check whether a triangle can be formed with the given
values for the angles*/

#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter the first angle: ");
    scanf("%f", &angle1);

    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    printf("Enter the third angle: ");
    scanf("%f", &angle3);
    if (angle1 > 0 && angle2 > 0 && angle3 > 0 && (angle1 + angle2 + angle3 == 180)) {
        printf("The angles can form a triangle.\n");
    } else {
        printf("The angles cannot form a triangle.\n");
    }
}
