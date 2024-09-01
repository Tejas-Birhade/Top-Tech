//Write a program to make Simple calculator (to make addition, subtraction,//\\
multiplication, division and modulo)
#include <stdio.h>
int main () {
    int a,b,c;
    printf("\n enter numbers");
    scanf("%d %d" ,&a,&b);
    c=a+b;
    printf("\n addition =%d",c); 
    c=a-b;
    printf("\n subtraction =%d",c);
    c=a*b;
    printf("\n multiplication =%d",c);
        if (b != 0) 
        {
            c=a / b;
         printf("\n Division: =%d",c);
        }

    printf("\n modulo =%d",c);
    c=a%b;

    }