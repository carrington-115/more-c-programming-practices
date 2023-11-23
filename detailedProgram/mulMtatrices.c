#include <stdio.h>

int matrixProduct(int mat1[][], int mat2[][], int rowLength, int columnLength){
    int productOfMatrices[rowLength][columnLength];
    int product;
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            productOfMatrices[i][j] = (mat1[i][i] * mat2[j][j]) + (mat1[i][i+1] * mat2[j+1][j]);
        }
    }

    return productOfMatrices;
    
}

int fillMatrix(int rowLength, int columnLength){
    int matrix[rowLength][columnLength]; 
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLength; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    return matrix;
}

int main(void){
    printf("Enter the two matrices: \n");
    int rowLength, columnLength;
    rowLength = columnLength = 2;
    // fill the first and second matrices
    int matrixOne = fillMatrix(rowLength, columnLength);
    int matrixTwo = fillMatrix(rowLength, columnLength);

    // print the values of matrix 1 and 2
    printf("\n");
    for (int i = 0; i <= rowLength; i++){
        for (int j = 0; j <= columnLength; j++){
            printf("%d ", matrixOne[i][j]);
        }
        printf("\n");
    }

    

    return 0;
}