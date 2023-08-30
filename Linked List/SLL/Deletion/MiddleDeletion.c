#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insert(int data){
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
        printf("%d ", ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}
void deleteMiddle(int pos){ //not valid for the first node, (even though valid for the last node)
    struct node *ptr = head;
    --pos;
    while(pos != 1){
        ptr = ptr->next;
        --pos;
    }
    struct node *temp = ptr->next->next;
    ptr->next = temp;
}
int main(){
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){
        int x;
        scanf(" %d", &x);
        insert(x);
    }
    traversal();
    
    int pos;
    scanf(" %d", &pos);
    deleteMiddle(pos);
    traversal();
}