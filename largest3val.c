#include <stdio.h>
int main() {
int a,b,c;
printf("Enter a");
scanf("%d", &a);

printf("Enter b");
scanf("%d", &b);

printf("Enter c");
scanf("%d", &c);

if (a>b && a>c){
printf("a is greatest of all");
}
else if (b>a && b>c) {
printf("b is greatest of all");
}
else{
printf("c is largest");
}

  if (a<b && a<c){
    printf("a is smallest");
  }
  else if (b<a && b<c){
    printf("b is smallest of all");
  }
  else {
    printf("c is smallest of all");
  }
  
return 0;
}
}

