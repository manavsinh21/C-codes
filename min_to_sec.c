#include<stdio.h>
int main() {
    float a, b;

    printf("Enter time in minutes");
    scanf("%f", &a);

    b = a * 60;

    printf("Time in seconds = %f\n", b);
    return 0;
}