/*
A
B C
D E F
G H I J
K L M N O
*/
#include <stdio.h>

int main() {
    int rows = 5; 
    char ch = 'A'; 

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch); 
            ch++; 
        }
        printf("\n");
    }

}
