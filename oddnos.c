#include <stdio.h>
int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
for (int i; i < n; i+=2 ) 
	{printf("%d\n",i);}
return 0;
}