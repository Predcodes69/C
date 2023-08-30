#include <stdio.h>
#include <stdlib.h>
int main(){
    // int *p;
    // *p= 10; //wrong way to initialize the pointer, always initialize the address of the pointer first as it may contain some illegal memory location initially.
    //correct way would be:
    int var = 10;
    // int *p = &var;   //storing the address of any variable in a pointer is the first step to do any operations with it
    //second method could be allocating the memory to the pointer and then assigning it's value
    //int *p = (int *)malloc(sizeof(int));  //this is correct as well
    int *p = &var;
    printf(" %d", *p);
    return 0;
}