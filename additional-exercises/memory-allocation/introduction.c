#include <stdio.h>
#include <stdlib.h>

/*
    Some important memory allocation functions in <stdlib.h>
    - mallow()
    - calloc()
    - realloc()
    - free()

*/
int main(void){
    int* number = (int*)malloc(2*sizeof(int));
    int numbers[5];
    printf("%d", number);
    return 0;
}