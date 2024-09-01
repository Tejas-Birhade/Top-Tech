// 8. Find circumference of Rectangle formula : C = 4 * a 

#include <stdio.h>

int calculatePerimeter(int length, int width) {
    return 2 * (length + width);
}

int main() {
    int length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);
    
    int perimeter = calculatePerimeter(length, width);

    printf("The perimeter of the rectangle is: %d\n", perimeter);
}
