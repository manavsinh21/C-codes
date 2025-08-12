#include<stdio.h>
int main() {

float a, b, temp;

printf("Enter number 1: ");
scanf("%f", &a);

printf("Enter number 2: ");
scanf("%f", &b);

temp = a;
a = b;
b = temp;

printf("The value of number 1 is %.1f\n", a);
printf("The value of number 2 is %.1f\n", b);

return 0;

}