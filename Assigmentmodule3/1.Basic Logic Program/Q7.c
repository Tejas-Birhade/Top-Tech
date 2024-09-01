//Find area of Rectangle Formula : A=wl

#include <stdio.h>
float calculateArea(float width, float length) {
    float area;
    area = width * length;
    return area;
}

int main() {
    float width, length;
    float area;
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    area = calculateArea(width, length);

    printf("The area of the rectangle with width %.2f and length %.2f is: %.2f\n", width, length, area);
}
