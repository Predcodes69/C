#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insertEnd(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    if(head == NULL){
        head = temp;
        return;
    }
    struct node *ptr = head;
    while(ptr->next != NULL){
        ptr=ptr->next;
    }
    ptr->next = temp;
}
void traversal(){
    struct node *ptr = head;
    while(ptr != NULL){
        printf(" %d", ptr->data);
        ptr=ptr->next;
    }
}
void insertMiddle(int data, int pos){
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    --pos;
    while(pos != 1){
        ptr=ptr->next;
        --pos;
    }
    //ptr initially points to the element which will come after the newly inserted element
    //store the address of the new element in the ptr after storing the address of the ptr->next in the linkk of the new element
    temp->next = ptr->next;
    ptr->next = temp;
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
    printf("\n");
    int pos;
    scanf(" %d", &pos);
    int x;
    scanf(" %d", &x);
    printf("The linked list after middle insertion: \n");
    insertMiddle(x, pos);
    traversal();
}