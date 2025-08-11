#include<stdio.h>
int main() {

int a, b, c, d;
printf("Enter length in metres");
scanf("%d", &a);
printf("Enter breadth in metres");
scanf("%d", &b);

c = 2 * (a + b);
d = a * b;

printf("Perimeter of rectangle is %d\n", c);
printf("Area of rectangle is %d\n", d);
return 0;

}