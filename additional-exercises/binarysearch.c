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
void binary_search_algorithm(int array[], int main_length, int search_element);

int main(void){
    int numbers[] = {5, 2, 9, 1, 7, 4, 8, 3, 6, 10, 30, 45, 200, 67, 93};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    int i, j, temp;

    // sorting with bubble sorting
    sort_with_bubble_sort(numbers, length);

    // beginning binary searching

    printf("\n");
    printf("Enter the Element you want to search in the sorted array: \n");
    for (i = 0; i < length; i++){
        printf("%d ", numbers[i]);
    }
    int search_element;
    printf("\nEnter number: ");
    scanf("%d", &search_element);

    // running the search algorithm.....
    printf("\n========  SEARCHING ........ ==========");
    binary_search_algorithm(numbers, length, search_element);

    return 0;
}

void binary_search_algorithm(int array[], int main_length, int search_element){
    int length = main_length - 1;
    int mid_point = length/2, mid_element = array[mid_point]; // getting the middle element
    // I used the do-while loop because I want the program to run the first time without checking that condition
    do {
        if (mid_element == search_element){
            printf("\nSearch element, %d, found at index, %d", search_element, mid_point);
            break;
        }
        else if (mid_element > search_element){
            mid_point /= 2;
            continue;
        }else if (mid_element < search_element){
            mid_point = mid_point + ((length - mid_point)/2);
            continue;
        }
        else{
            printf("\nElement was not found in the array");
        }
    }while (search_element !== mid_element);

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
            if (j < length-1){
                element = array[j];
                check_element = array[j+1];
                if (element > check_element){
                swap = element;
                array[j] = check_element;
                array[j+1] = swap;
                }
            }
        }
    }

    // array after the sorting
    printf("\nArray after sorting\n");
    for (i = 0; i < length; i++){
        printf("%d ", array[i]);
    }



}