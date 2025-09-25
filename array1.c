#include <stdio.h>

int main()
{
    int i, arr[5];
    printf("Enter 5 values");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nThe values you entered are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}