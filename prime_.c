#include <stdio.h>

int main() {
 int a, i;
 printf("enter a number");
 scanf("%d", &a);

 for(i=2; i<=(a/2); i++){
     if (a % i == 0){
    printf("Number is not prime");
    break;
     }
    }
if (i > a/2){
printf("number is prime\n");
}
     
 
 

 
    return 0;
}