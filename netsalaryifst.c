#include<stdio.h>
int main() {

float a, b, c, d;

printf("Enter gross salary");
scanf("%f", &a);


if (a>10000){
b = a/10;
c = a * 0.03;
}

else if (a > 5000){
b = a * 0.07;
c = a * 0.02;
}
else {
    b = 0;
    c = 0;
}

d = a + b - c;
printf("%f", d);

return 0;

}
