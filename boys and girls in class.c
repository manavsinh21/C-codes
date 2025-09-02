#include <stdio.h>

int main() {
    int i, code;
    int boys = 0, girls = 0;

 
    for (i = 1; i <= 50; i++) {
        printf("Enter sex code for student %d (1=Boy, 2=Girl): ", i);
        scanf("%d", &code);

        if (code == 1) {
            boys++;
        } else if (code == 2) {
            girls++;
        } else {
            printf("Invalid code! Please enter 1 or 2.\n");
            i--; 
        }
    }

    
    printf("\nTotal Boys = %d", boys);
    printf("\nTotal Girls = %d\n", girls);

    return 0;
}
