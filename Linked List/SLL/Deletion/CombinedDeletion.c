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
struct node* delete(int pos){
    --pos;
    struct node *temp = head;
    if(pos == 0){
        //the head node is to be altered, the first node is to be removed
        temp = head->next;
        free(head);
        return temp;    ///new head is temp, old head isn't alive anymore! RIP
    }
    struct node *ptr = head;
    while(pos != 1){
        ptr=ptr->next;
        --pos;
    }
    struct node *ptr2 = ptr->next->next;
    ptr->next = ptr2;
    return temp;
}
//Another alternative can be to use 2 different functions for the cause(Naive way).
int main(){
    int n;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++){
        int x;
        scanf(" %d", &x);
        insert(x);
    }
    traversal();
    int no_of_nodes_to_be_fucked;
    scanf(" %d", &no_of_nodes_to_be_fucked);
    for(int i = 0; i < no_of_nodes_to_be_fucked; i++){
        int pos;
        scanf(" %d", &pos);
        if(i){  //since if a node is already deleted, the size of the linked list is already decremented by 1!
            head = delete(pos - 1);
        }else{
            head = delete(pos);
        }
    }
    traversal();
}