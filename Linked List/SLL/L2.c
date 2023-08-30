//Creating a single linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};  //creating the node structure of the list
int main(){
    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> next = NULL;
    //Adding second node to the linked list
    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> next = NULL;
    head -> next = current;
    // //Adding third node to the linked list
    // struct node *current1 = malloc(sizeof(struct node));
    // current1 -> data = 198;
    // current1 -> next = NULL;
    // current -> next = current1;
    //Method 2:
    //Efficient One
    current = malloc(sizeof(struct node));
    current -> data = 100;
    current->next = NULL;
    head->next->next = current;
}