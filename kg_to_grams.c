#include <stdio.h>
int main() {

float a, b;

printf("Enter weight in kg");
scanf("%f", &a);

b = a * 1000;
printf("Weight in grams is %f", b);
return 0;

}