#include <stdio.h>
int main() {
float a, b, c;

printf("Enter amount in dollars");
scanf("%f", &a);

b = a * 48;

printf("Amount in rupees is = %f", b);


c = b / 70;
printf("Amount in pounds is = %f\n", c);

}