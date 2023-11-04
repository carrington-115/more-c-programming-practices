#include <stdio.h>
#include <math.h>

int main(void){
    // getting the number
    printf("Enter the number you want to check if it's an Armstrong number:\t");
    int number;
    scanf("%d", &number);

    // extracting the digits from the number
    int numberLength, digitExtractor;
    numberLength = digitExtractor = number;
    int i = 0;
    while (numberLength != 0){
        numberLength /= 10;
        i++;
    }
    int length = i;
    int digits[i+1], digit;
    for (int i = 0; i <= length; i++){
        digit = digitExtractor % 10;
        digits[i] = digit;
        digitExtractor /= 10;

    }
    
    // checking if the number is an armstrong number
    int length = sizeof(digits) / sizeof(digits[0]);
    int armstrong_sum = 0;
    for (int i = 0; i < length; i++){
        armstrong_sum += pow(digits[i], length);
    }

    printf("\n The sum of the number digits is %d", armstrong_sum);

    if (armstrong_sum == number){
        printf("\n----- TRUE ------- \n ----- The %d is an Armstrong number -------", number);
    }
    else{
        printf("\n----- FALSE ------- \n ----- The %d is not an Armstrong number -------", number);

    }

    return 0;
}