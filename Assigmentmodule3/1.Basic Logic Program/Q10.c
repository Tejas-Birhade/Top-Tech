// 10.find the area of a rectangular prism formula : A=2(wl+hl+hw) 
#include <stdio.h>
int calculateSurfaceArea(int width, int length, int height) {
    return 2 * (width * length + length * height + height * width);
}
int main() {
    int width, length, height;
    printf("Enter the width of the rectangular prism: ");
    scanf("%d", &width);
    printf("Enter the length of the rectangular prism: ");
    scanf("%d", &length);
    printf("Enter the height of the rectangular prism: ");
    scanf("%d", &height);

    int surfaceArea = calculateSurfaceArea(width, length, height);
    printf("The surface area of the rectangular prism is: %d\n", surfaceArea);
}
