#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
void insertBeginning(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    temp->next = head;
    head->prev = temp;
    head = temp;
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
        insertBeginning(x);
    }
    traversal();
}