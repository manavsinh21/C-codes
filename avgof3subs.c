#include <stdio.h>
int main () {

float a, b, c, d, e;

printf("Enter marks of subject 1");
scanf("%f", &a);

printf("Enter marks of subject 2");
scanf("%f", &b);

printf("Enter marks of subject 3");
scanf("%f", &c);

d = a + b + c;
printf("Total marks of 3 subjects are: %f\n", d);

e = (a + b + c)/3;
printf("Average of the three subjects is: %f\n", e);

if ( e >= 70){
    printf("You have secured A grade");
}
if ( e >= 60){
    printf("You have secured B grade");
}
if ( e >= 50){
    printf("You have secured C grade");
}
if ( e >= 35){
    printf("You have secured D grade");
}
else {
    printf("You have failed in the examination");
} 

return 0;

}