#include <stdio.h>
int main() {
 
float a, b;

printf("Enter temperature in celsius");
scanf("%f", &a);

b = 9*a/5 + 32;
printf("Temperature in fahrenheit is %f", b);
return 0;

}