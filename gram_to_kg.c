#include <stdio.h>
int main() {

float a, b;

printf("Enter weight in grams");
scanf("%f", &a);

b = a / 1000;
printf("Weight in kilograms is %f", b);
return 0;

}