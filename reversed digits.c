#include<stdio.h>
int main() {

int b, a, c ,d;
printf("Enter a three digit number: ");
scanf("%d", &a);

b = a % 10 ;
c = (a / 10) % 10 ;
d = a / 100 ;



printf("Reversed number is: %d%d%d\n", b,c,d);
return 0;

}