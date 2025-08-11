#include<stdio.h>
int main() {

int a, b, c;
printf("Enter side length in metres");
scanf("%d", &a);

b = 4 * a;
c = a * a;

printf("Perimeter of square is %d\n", b);
printf("Area of square is %d\n", c);
return 0;

}