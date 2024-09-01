//Convert minutes into seconds and hours

#include <stdio.h>

int main() {
    int minutes;
    int seconds, hours;

    printf("Enter number of minutes: ");
    scanf("%d", &minutes);

    seconds = minutes * 60; 
    hours = minutes / 60;   

    printf("%d minutes is equal to %d seconds and %d hours.\n", minutes, seconds, hours);
}
