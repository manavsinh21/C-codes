#include<stdio.h>
int main() {

int i;
int sum = 0;

for (i=1; i<=100; i++){
    if( i % 3 == 0){
        sum = sum + i;
    }
}
    printf("Sum of all numbers divisible by 3 is: %d", sum);

}