#include <stdio.h>


// this program is th for the binary seraching algorithm
/*
    1. sort the array
    2. find the middle element
    3. compare the middle element with the element to be searched
    4. if the middle element is greater than the element to be searched, 
    then the element to be searched is in the left half of the array
    5. if the middle element is less than the element to be searched, 
    then the element to be searched is in the right half of the array
    6. if the middle element is equal to the element to be searched, 
    then the element to be searched is found
*/

void sort_with_linear_sort(int array[], int length);

int main(void){
    int array[10] = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10};
    int i, j, temp;

    // printing the array before sorting
    printf("Array before sorting: \n");
    for (i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    // sorting the array with bubble sort
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }
    }

    // printing the arrray after sorting
    printf("\nArray after sorting: \n");
    for (i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    int number;
    printf("\nEnter the number to be searched: ");
    scanf("%d", &number);

    // binary searching algorithm
    
    // getting the size of the array
    int length = sizeof(array)/sizeof(array[0]);
    int middle = length/2;

    // the search algorithm

    while (true){
        int middle_element = array[middle];
        if (number == middle_element){
            printf("%d found at position %d", number, middle);
            break;
        }
        if (middle_element < number){
            for (int i = middle_element; i < length; i++){
                if (array[i] == number){
                    printf("%d found at position %d", number, i);
                    break;
                }
                else if (array[i] < number)
            }
        }
    }



    return 0;
}