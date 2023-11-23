#include <stdio.h>

struct matrix
{
    int rows;
    int cols;
    int data;

};


int main(void){
    // filling the matrix with elements
    struct matrix firstMatrix;
    struct matrix secondMatrix;
    firstMatrix.rows = secondMatrix.rows = 2;
    firstMatrix.cols = secondMatrix.cols = 2;
    int firstMatrixData[firstMatrix.rows][firstMatrix.cols];
    int secondMatrixData[secondMatrix.rows][secondMatrix.cols];

    int columnLength, rowLength;
    rowLength = columnLength = 2;

    printf("\nEnter the values of Matrix one: \n");

    // filling the matrix one
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            scanf("%d", &firstMatrixData[i][j]);
        }
    }

    printf("\nEnter the values of Matrix two: \n");
    // filling the matrix two
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            scanf("%d", &secondMatrixData[i][j]);
        }
    }

    // printing the matrix one
    printf("\n");
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            printf("%d ", firstMatrixData[i][j]);
        }
        printf("\n");
    }

    // printing the matrix two
    printf("\n");
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            printf("%d ", secondMatrixData[i][j]);
        }
        printf("\n");
    }

    // matrix addition
    int sumMatrix[rowLength][columnLength];
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            sumMatrix[i][j] = firstMatrixData[i][j] + secondMatrixData[i][j];
        }
        printf("\n");
    }

    // printing the sum matrix
    printf("\n");
    printf("The sum of the two matrices is: \n");
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            printf("%d ", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}