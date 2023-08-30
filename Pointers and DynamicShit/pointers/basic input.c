#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf(" %d", &n);
    int *ptr = (int*)malloc(n*sizeof(int));
    int *ptr2 = (int*)malloc(n*sizeof(int));
    if(ptr == NULL){
        printf("Memory not available");
        return 0;
    }
    else{
        //way one ptr is the starting address, 
        //ptr + i is the address of the successive elements of the array with a difference of 4.
        //deferencing ptr + i like this ==> *(ptr + i) will give the element of the array
        for(int i = 0; i < n; i++){
            scanf(" %d", ptr + i);
        }
        //alternative way to take input:
        for(int i = 0; i < n; i++){
            scanf(" %d", &ptr2[i]);
        }
        printf("The array1 address: ");
        for(int i = 0; i < n; i++){
            printf(" %d", ptr + i); //this will print the address of the array elements(the address changes on each compilation).
        }
        printf("\n");
        printf("The array elements: ");
        for(int i = 0; i < n; i++){
            printf(" %d", *(ptr + i)); //this will print the address of the array elements
        }
        printf("\n");
        printf("The array2 address: ");
        for(int i = 0; i < n; i++){
            printf(" %d", &ptr2[i]); //this will print the address of the array elements(the address changes on each compilation).
        }
        printf("\n");
        printf("The array2 elements: ");
        for(int i = 0; i < n; i++){
            printf(" %d", ptr2[i]); //this will print the address of the array elements
        }
        free(ptr);
        free(ptr2);
        ptr = NULL;
        ptr2 = NULL; //assigning the value of NULL else it will be a dangling pointer
    }
}