// 9. Find circumference of Triangle formula : triangle = a + b + c 

#include <stdio.h>

int calculatePerimeter(int a, int b, int c) {
    return a + b + c;
}
int main() {
    int a, b, c;

    printf("Enter the length of side a: ");
    scanf("%d", &a);
    printf("Enter the length of side b: ");
    scanf("%d", &b);
    printf("Enter the length of side c: ");
    scanf("%d", &c);

    int perimeter = calculatePerimeter(a, b, c);

    printf("The perimeter of the triangle is: %d\n", perimeter);
}
