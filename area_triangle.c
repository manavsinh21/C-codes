#include<stdio.h>
int main() {
float a, b, c;  

printf("Enter base length in metres");
scanf("%f", &a);

printf("Enter height in metres");
scanf("%f", &b);

c = (a * b) * 1/2;

printf("Area of triangle in metre square is %f", c);
return 0;
}