// 11.Find circumference of square formula : C = 4 * a 
#include <stdio.h>

int calculatePerimeter(int sideLength) {
    return 4 * sideLength;
}
int main() {
    int sideLength;

    printf("Enter the side length of the square: ");
    scanf("%d", &sideLength);

    int perimeter = calculatePerimeter(sideLength);
    printf("The perimeter of the square is: %d\n", perimeter);
}
