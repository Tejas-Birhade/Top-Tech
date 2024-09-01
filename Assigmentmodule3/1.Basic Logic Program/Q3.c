#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    printf("Area of the circle: %.2lf square units\n", area);
    printf("Circumference of the circle: %.2lf units\n", circumference);
}
