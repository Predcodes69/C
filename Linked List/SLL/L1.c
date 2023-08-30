#include <stdio.h>
#include <stdlib.h> 
//A SLL is different from an array since it contains two attributes at a memory location, i.e the data and the linking pointer, each memory location is referred to as the node.
//The first node is called the head node, the last node is called the tail node, the tail node points to NULL.
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head = NULL;
    head = (struct node*) malloc(sizeof(struct node));
    //struct node *head = (struct node*) malloc(sizeof(struct node)); //also works
    head -> data = 45;
    head -> next = NULL;
    printf(" %d", head->data);
}