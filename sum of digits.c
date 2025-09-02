#include<stdio.h>
int main() {

int b, a, c ,d, e;
printf("Enter a three digit number: ");
scanf("%d", &a);

b = a % 10 ;
c = (a / 10) % 10 ;
d = a / 100 ;


printf("digits of the number are: %d, %d and %d", d, c, b);
e = d + c + b;
printf("\nThe sum of digits is: %d", e);
return 0;

}