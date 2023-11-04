#include <stdio.h>

int main(void){

    // getting the number from the user
    printf("\nEnter the digit to extract it's numbers and get it's sum:\t");
    int number, lengthNumber, extractNumber, i = 0, digit;
    scanf("%d", &number);
    lengthNumber = number;
    while (lengthNumber != 0){
        digit = lengthNumber % 10;
        lengthNumber = lengthNumber / 10;
        i++;
    }

    // extracting the digits from the number

    int length = i;
    int digits[length], storage;
    for (int i = 0; i < length; i++){
        storage = extractNumber % 10;
        digits[i] = storage;
        extractNumber = extractNumber / 10;
    }

    // summing the digits
    int sum = 0;
    for (int i = 0; i < length; i++){
        sum = sum + digits[i];
    }

    printf("\nThe sum of %d is %d", number, sum);
}