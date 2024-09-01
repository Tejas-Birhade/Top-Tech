//Convert kilometers into meters

#include <stdio.h>

void kilometersToMeters() {
    float kilometers;
    printf("Enter the distance in kilometers: ");
    scanf("%f", &kilometers);
    
    float meters = kilometers * 1000;
    printf("%.2f kilometers is equal to %.2f meters.\n", kilometers, meters);
}
int main() {
    kilometersToMeters();
}
