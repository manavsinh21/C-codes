#include <stdio.h>
int main(){
    int n, i;
    int sum = 0;
    printf("Enter a number");
    scanf("%d", &n); 
for (int i = 0;  i <= n; i+=2 )
{
    sum = sum + i; 
}
	{printf(" Sum: %d\n", sum);}





    return 0;

}