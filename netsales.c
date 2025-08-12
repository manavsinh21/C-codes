#include<stdio.h>
int main() {

float a, b, c;

printf("Enter gross sales: ");
scanf("%f", &a);

b = a / 10;

c = a - b;

printf("Net sales is %f", c);
return 0;

}