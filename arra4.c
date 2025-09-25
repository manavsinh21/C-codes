#include <stdio.h>

int main() {
 int i, note[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
int amount, count[9]={0};
    printf("Enter amount:");
    scanf("%d", &amount);
    for(i=0;i<=9;i++){
        if(amount>=note[i]){
            count[i]=amount/note[i];
            amount=amount%note[i];
        } 
        if(count[i] == 0){
            continue;
        }  
        printf("%d notes of %d\n", count[i], note[i]);
        if(amount==0){
            break;
        }

    }

 
 
    return 0;
}