#include <stdio.h>

int main() {
    int i, n;

    printf("Enter a number: ");
    scanf("%d", &i);

  
    for (; i > 0; i = i / 10) {
        n = i % 10;
        printf("%d\n", n);
    }

    return 0;
}
