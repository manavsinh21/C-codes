#include <stdio.h>
int main() {
 
float a, b;

printf("Enter temperature in fahrenheit");
scanf("%f", &a);

b = (a - 32)*5/9;
printf("Temperature in celsius is %f", b);
return 0;

}