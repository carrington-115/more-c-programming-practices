#include <stdio.h>

struct matrix
{
    int rows;
    int cols;
    int data[rows][cols];
};


int main(void)[
    // filling the matrix with elements
    matrix firstMatrix;
    firstMatrix.rows = 2;
    firstMatrix.cols = 2;
    int columnLength, rowLength;
    rowLength = columnLength = 2;
    for (int i = 0; i < rowLength; i++){
        for (int j = 0; j < columnLenth; j++){
            scanf("%d", &firstMatrix.data[i][j]);
        }
    }

    return 0;
]