#include<stdio.h>
int main() {

float a, b, c, d;

printf("Enter gross salary");
scanf("%f", &a);

b = a / 10;

c = (a * 3)/100;
d = a + b - c;

printf("Netsalary is %f", d);
return 0;

}