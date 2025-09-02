#include<stdio.h>
int main(){

    int a, sum = 0;
for(a=1; a <= 100; a++)
{
    if (a % 5 ==0)
    sum = sum + a;
    
}

printf("Sum of all multiples of 5 from 1 to 100 is: %d\n", sum);

    return 0;

}




