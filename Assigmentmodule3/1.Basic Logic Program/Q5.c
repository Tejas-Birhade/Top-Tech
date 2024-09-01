// 5 Find Area of Cube formula : a = 6a2 

#include <stdio.h>

int main() {
    double sideLength, surfaceArea;

    printf("Enter the side length of the cube: ");
    scanf("%lf", &sideLength);

    surfaceArea = 6 * sideLength * sideLength;
    printf("Surface area of the cube with side length %.2lf units: %.2lf square units\n", sideLength, surfaceArea);
}
