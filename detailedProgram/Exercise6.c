#include <stdio.h>

// Exercise 6 is to be done the last
// exercise 7 and 8 is already done

// factorial of a number using recursive algorithm

int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(void){
    int number;
    printf("Enter the number to Get its factorial:\t");
    scanf("%d", &number);

    // getting the factorial
    int getFactorial = factorial(number);
    printf("=== THE FACTORIAL ====== \n\n%d! is: %d", number, getFactorial);

}