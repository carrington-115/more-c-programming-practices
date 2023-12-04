#include <stdio.h>


int addition(int a, int b){
    return (a + b);
}

// how ot use function pointer in c programming
int (*addFuncPtr)(int, int) = &addition;

int *createArray(int a, int b){
    int numbers[2] = {a, b};
    int *array = numbers;
    return *array;
}


int main(){
    int *null_pointer = NULL; // The null pointer
    int numbers[5] = {1, 2, 3, 4, 5}; 
    int *array = numbers; // array pointers
    int *ptr; // void pointer

    
    printf("The sum of 2 and 4 is: %d", addFuncPtr(2, 4));

    printf("\n");
    // printing addresses
    for (int i = 0; i < (sizeof(numbers)/sizeof(numbers[0])); i++){
        printf("%d ", array[i]);
    }

    // printing values
    printf("\n");
    for (int i = 0; i < (sizeof(numbers)/sizeof(numbers[0])); i++){
        printf("%d ", &array[i]);
    }

    // using array with functions
    printf("\nUsing array with functions part\n");
    int new_array = *createArray(2, 6);
    for (int i = 0; i < (sizeof(new_array)/sizeof(new_array[0])); i++){
        printf("%d ", new_array[i]);
    }


    return 0;



}