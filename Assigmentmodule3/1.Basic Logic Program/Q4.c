#include <stdio.h>

int main() {
    double sideLength, area;
    printf("Enter the side length of the square: ");
    scanf("%lf", &sideLength);
    area = sideLength * sideLength;
    printf("Area of the square with side length %.2lf units: %.2lf square units\n", sideLength, area);

}
