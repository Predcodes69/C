#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertAtEnd(int data){
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    if(head == NULL){
        head = new;
    }else{
        struct node *temp = head;
        while(temp->next != NULL){
            temp=temp->next;
        }
        temp->next = new;
    }
}//time complexity of the function = O(length of the linked list at insertion time)
void traversal(){
    struct node *temp = head;
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
struct node *Reversal(){
    struct node *prev = NULL;
    struct node *temp = NULL;
    while(head != NULL){
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    head = prev;
    return head;
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
    head = Reversal();
    traversal();
}