#include <stdio.h>


void fibonacciSequence(int n){
    int sequence[n]; 
    int i = n;
    // since every fibonacci starts with 1
    int number = 0, j = 0;
    while (j < n){
        number = fibonacci(i);
        sequence[j] = number;
        i = number;  // this is a non-tail recursion algorithm
        j++;
    }

    printf("\nThis is the fibonacci sequence of %d elements: ", n);
    for (int i = n-1; i >= 0; i--){
        printf("\t%d,\t", sequence[i]);
    }

}

int main(void){
    int number;
    pritnf("\nEnter the number you want to generate it's fibonacci sequence:\t");    
    scanf("%d", &number);
    printf("\n\n");

    // generate the fibonacci sequence
    fibonacciSequence(number);

    return 0;
}