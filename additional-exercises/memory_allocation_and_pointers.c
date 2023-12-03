#include <stdio.h>


int addition(int a, int b){
    return (a + b);
}

// how ot use function pointer in c programming
int (*addFuncPtr)(int, int) = &addition;


int main(){
    int *null_pointer = NULL; // The null pointer
    int numbers[5] = {1, 2, 3, 4, 5}; 
    int *array = numbers; // array pointers
    int *ptr; // void pointer

    
    printf("The sum of 2 and 4 is: %d", addFuncPtr(2, 4));
    return 0;



}