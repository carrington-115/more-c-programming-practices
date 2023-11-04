#include <stdio.h>

int add_by_ref(int a, int b){
    int *ptr_a = &a;
    int *ptr_b = &b;
    int sum = *ptr_a + *ptr_b;
    return sum;
}
int main(void){
    int a, b;
    printf("Enter the 2 numbers to add by reference:\t");
    scanf("%d%d", &a, &b);

    // getting the sum
    int sum = add_by_ref(a, b);
    printf("\nThe sum by reference of the %d and %d is %d", a, b, sum);
    return 0;
}