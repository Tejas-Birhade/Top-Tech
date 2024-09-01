// 6 Find area of Triangle Formula : A = 1/2 × b × h 

#include <stdio.h>


float calculateArea(float base, float height) {
    float area;
    area = 0.5 * base * height; 
    return area;
}

int main() {
    float base, height;
    float area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);
    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = calculateArea(base, height);

    printf("The area of the triangle with base %.2f and height %.2f is: %.2f\n", base, height, area);
}
