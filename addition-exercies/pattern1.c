#include <stdio.h>
#include <string.h>

int main(void){
    printf("Enter the size of the pyramid to print:\t");
    int size;
    scanf("%d", &size);
    printf("\nPrinting with characters: \n");
    printPyramidWithCharacters(size);

    printf("\n\nPrinting with numbers: \n");
    printingThePyramidWithNumbers(size);

    return 0;
}


// in c '' should be used when dealing with single characters and "" when dealing with a string

void printPyramidWithCharacters(int size){ 
    char element = '*';
    char pyramid[size][size];

    for (int i = 0; i < size; i++){
        for (int j = 0; j <= i+1; j++){
            pyramid[i][j] = element;
        }
    }

    for (int i = 0; i < size; i++){
        printf("\n");
        for(int j = 0; j <= i; j++){
            printf("%c ", pyramid[i][j]);
        }
    }
}


void printingThePyramidWithNumbers(int size){
    int pyramid[size][size];
    for (int i = 0; i < size; i++){
        for (int j = 0; j < i+1; j++){
            int element = j+1;
            pyramid[i][j] = element;
        }
    }
    // printing the pyramid of numbers
    for (int i = 0; i < size; i++){
        printf("\n");
        for (int j = 0; j < i+1; j++){
            printf("%d ", pyramid[i][j]);
        }
    }
}


// program for other types patterns