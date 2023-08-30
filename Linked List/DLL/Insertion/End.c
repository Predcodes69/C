#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void insertEnd(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    temp->prev = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    ptr->next = temp;
    temp->prev = ptr;
}
void traversal(){
    struct node *ptr = head;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){
        int x;
        scanf(" %d", &x);
        insertEnd(x);
    }
    traversal();
}