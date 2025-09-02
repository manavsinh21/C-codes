#include<stdio.h>
int main() {

int b, a, c ,d;
printf("Enter a three digit number: ");
scanf("%d", &a);

b = a % 10 ;
c = (a / 10) % 10 ;
d = a / 100 ;


printf("digits of the number are: %d, %d and %d", d, c, b);
return 0;

}