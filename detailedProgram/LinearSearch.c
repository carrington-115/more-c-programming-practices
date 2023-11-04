#include <stdio.h>

void linearSearch(int length, int arr[], int element){
    printf("\nlength: %d", length);
    int i = 0;
    for(i = 0; i < length; i++){
        if(element == arr[i]){
            printf("\n\nElement, %d found at position, %d", element, i+1);
            break;
        }
        else if(i == length-1 && arr[i] != element){
            printf("\n\nElement not found in array");
        }
    }
}

int main(void){
    // this is a linear search algorithm
    printf("Enter the number to Search in the array of numbers from 1 to 100:\t");
    int number;
    scanf("%d", &number);
    int numbers[100];
    for (int i = 0; i < 100; i++){
        numbers[i] = i+1;
    }
    printf("\nSearching in Array\n ");
    for(int i = 0; i < 100; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n\nstarting......");
    int length = 100;
    linearSearch(length, numbers, number); 

    return 0;
}