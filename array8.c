#include <stdio.h>

int main() {
        int j,i,a[5], b[10];
        printf("Enter elements of array: \n");
         
        
        for(i=0;i<5;i++){
        scanf("%d", &a[i]);
        }
for (i = 0, j = 0; i < 5; i++, j += 2) {
    b[j] = a[i];
}
for (j = 0; j < 10; j += 2) {
    printf("%d ", b[j]);
}


    return 0;
}