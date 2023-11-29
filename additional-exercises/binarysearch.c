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


    ========

    the rules
    1. For variable creation we use the camelcase and the underscore format in this program
    2. 
*/

void sort_with_bubble_sort(int array[], int length);

int main(void){
    int numbers[] = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    int i, j, temp;


    sort_with_bubble_sort(numbers, length);

    // // printing the array before sorting
    // printf("Array before sorting: \n");
    // for (i = 0; i < 10; i++){
    //     printf("%d ", array[i]);
    // }
    // // sorting the array with bubble sort
    // for (i = 0; i < 10; i++){
    //     for (j = 0; j < 10; j++){
    //         if (array[j] > array[j+1]){
    //             temp = array[j];
    //             array[j] = array[j+1];
    //             array[j+1] = temp; 
    //         }
    //     }
    // }

    // // printing the arrray after sorting
    // printf("\nArray after sorting: \n");
    // for (i = 0; i < 10; i++){
    //     printf("%d ", array[i]);
    // }

    // int number;
    // printf("\nEnter the number to be searched: ");
    // scanf("%d", &number);

    // // binary searching algorithm
    
    // // getting the size of the array
    // int length = sizeof(array)/sizeof(array[0]);
    // int middle = length/2;

    // // the search algorithm
    // int middle_element = array[middle];

    // // if middle element is the search element
    // if (middle_element == number){
    //     printf("%d found at position %d", number, middle);

    // }
    // else if (middle_element < number){
    //     while (true){
    //         middle_element = array[middle]; 
    //         while(middle_element != number){
    //             if (middle_element == number){
    //                 printf("\n%d found at position %d", number, middle);
    //                 break;
    //             }
    //             else if (middle_element < number){
    //                 middle = (length - middle)/2;
    //             }
    //             else if(middle_element > number)
    //         }
            
    //     }
    // }



    return 0;
}

void sort_with_bubble_sort(int array[], int length){
    // getting the size of the array
    // int length = sizeof(array)/sizeof(array[0]);
    int i, j, swap, element, check_element;

    // array before sorting
    printf("\nArray before the Bubble sorting with length, %d\n", length);
    for (i = 0; i < length; i++){
        printf("%d ", array[i]);
    }

    // beginning the sorting algorithm
    for (i = 0; i < length; i++){
        for (j = 0; j < length; j++){
            element = array[j];
            check_element = array[j+1];
            if (element > check_element){
                swap = element;
                array[j] = check_element;
                array[j+1] = swap;
            }
        }
    }

    // array after the sorting
    printf("\nArray after sorting\n");
    for (i = 0; i < length; i++){
        printf("%d ", array[i]);
    }



}