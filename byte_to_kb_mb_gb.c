#include <stdio.h>
int main() {

float a, b, c, d, e, f;

printf("Enter amount of data in bytes");
scanf("%f", &a);

b = a / 1024;
printf("data in kilobytes is %f", b);

c = b / 1024;
printf("data in megabytes is %f" , c);

d = c / 1024;
printf("data in gigabytes is %f", d);

}