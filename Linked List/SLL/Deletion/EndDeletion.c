#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAtEnd(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
}
void deleteEnd(){
    struct node *ptr = head;
    /*Method 1: */
    // while(ptr->next->next != NULL){
    //     ptr=ptr->next;
    // }
    // ptr->next = NULL;
    /*Method 2*/
    struct node *temp = head;
    while(ptr->next != NULL){
        temp = ptr;
        ptr=ptr->next;
    }
    free(ptr);
    temp->next = NULL;
}
void traversal(){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main(){
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){
        int x;
        scanf(" %d", &x);
        insertAtEnd(x);
    }
    traversal();
    printf("\nThe linked list after deletion from the end \n");
    deleteEnd();
    traversal();
}