#include <stdio.h>

/*
    * THE INSERTION SORTING ALGORITHM STRUCTURE
    * First take the array and dividing it into 2 parts
    * During the begining of the sorting, the first element is assumed to be the sorted part of the array
    * Then as the sorting proceeds, the first part keeps sorting

*/


void insertion_sort_algorithm(int array[], int main_length);

int main(void){
    int numbers[] = {24, 32, 1, 10, 23, 55, 39, 100};
    int i, j;
    int length = sizeof(numbers)/sizeof(numbers[0]);
    printf("Array before insertion sorting: \t");
    for (i = 0; i < length; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n\nArray after sorting: ");


    // 

    return 0;
}

/*
    * When the program begins, the first element is considered to be the sorted part of the array
    * All other elements are then compared with the sorted part of the array and if smaller, they are swapped
    * Then this continues till the array is finally sorted

*/
void insertion_sort_algorithm(int array[], int main_length){
    int length = main_length;
    int sorted = 0, unsorted = 0;
    while (sorted < length){
        while ()
    }

}