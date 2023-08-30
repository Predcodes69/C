/*Memory allocated during compilation time is static memory
Memory allocated during execution time is dynamic memory
In stack, memory is allocated/deallocated in a defined order
In heap, memory is allocated/deallocated without any defined order
Three functions -> malloc, calloc, realloc
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p = (int *)malloc(sizeof(int));
    *p = 10;
    printf(" %d", *p);
    free(p);    //freeing the memory allocated to the pointer
    //calloc
     int *q = (int *)calloc(5, sizeof(int)); //allocating memory to the pointer
    //calloc takes two arguments, first is the number of elements and second is the size of each element
    //calloc initializes the memory with 0
    //malloc doesn't initialize the memory
    //realloc
    int *z = (int *)malloc(sizeof(int));
    *z = 10;
    printf(" %d", *z);
    z = (int*)realloc(z, 2*sizeof(int)); //reallocating the memory to the pointer
    //realloc takes two arguments, first is the pointer and second is the new size of the memory
    //realloc doesn't initialize the memory
    //realloc can be used to increase or decrease the size of the memory
    //realloc can be used to allocate memory to a pointer which is already pointing to some memory
    //realloc can be used to free the memory as well
    //now z is an array with 2 elements.
    free(p);
    free(q);
    free(z);
    p = NULL, q  = NULL, z = NULL;
    return 0;
}