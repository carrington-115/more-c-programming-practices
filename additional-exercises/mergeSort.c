#include <stdio.h>
#include <math.h>

int main(void){
    // before the sorting of the array
    int numbers[] = {};
    int size_of_array = sizeof(numbers)/sizeof(numbers[0]);
    printf("\nThis is the array before the sorting: \n");

    // merge sorting process
    mergeSortAlgorithm(numbers, size);

    // after sorting the array
    printf("Sorted Array: \n");
    for (int i = 0; i < size; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}

void mergeSortAlgorithm(int array[], int size){
    int array_divisions = size / 2;
    int sub_arrays[][];
    int size_tracker = 0;

    // dividing the array ... 
    do{
        

    }while(array_divisions != 2);
}