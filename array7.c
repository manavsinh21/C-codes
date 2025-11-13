#include <stdio.h>

int main() {
    int a[4][4], b[4][4], i, j, k;
printf("enter elements of array:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("transposed matrix is:\n ");
 for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            b[j][i]=a[i][j];
        }
    }
     for(i=0;i<4;i++){
        for(j=0;j<4;j++){
           printf("%d ",b[i][j]);
        }
        printf("\n");
    }

                               
    return 0;
}