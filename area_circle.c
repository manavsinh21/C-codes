#include<stdio.h>
int main() {
float a, b;  

printf("Enter radius in metres");
scanf("%f", &a);

b = 22*(a * a)/7;

printf("Area of circle in metre square is %f", b);
return 0;
}