#include<stdio.h>
int main() {
    float a, b;

    printf("Enter time in hours");
    scanf("%f", &a);

    b = a * 60;

    printf("Time in minutes = %f\n", b);
    return 0;
}