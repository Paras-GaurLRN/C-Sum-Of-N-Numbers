#include <stdio.h>

void main() {
int i = 0;
while (i==0){
    double num1,num2,num3;
    printf("Enter 3 Numbers with a gap in between: \n");
    scanf("%lf %lf %lf",&num1,&num2,&num3);
    printf("Sum Is: %lf\n\n",(num1+num2+num3));
}}