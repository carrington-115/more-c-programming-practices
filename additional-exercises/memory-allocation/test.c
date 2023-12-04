#include <stdio.h>

int main(void){
    int a, b;
    scanf("%d%d", &a, &b);
    int result = a / b;
    printf("The division of %d / %d is %d", a, b, result);
    return 0;
}