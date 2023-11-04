#include <stdio.h>

int main(void){
    float a, b, c;
    printf("Enter three numbers to find their sum:\t");
    scanf("%f%f%f", &a, &b, &c);
    float sum = a + b + c;
    float average = sum/3;

    printf("The sum and the average of %.2f, %.2f, and %.2f is %.2f and %.2f", a, b, c, sum, average);



    return 0;
}