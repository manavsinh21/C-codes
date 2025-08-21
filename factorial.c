#include <stdio.h>
int main(){
    int n, i;
    int sum = 1;
    printf("Enter a number");
    scanf("%d", &n); 
for (int i = 1;  i <= n; i++ )
{
    sum = sum * i; 
}
	{printf(" Factorial: %d\n", sum);}





    return 0;

}