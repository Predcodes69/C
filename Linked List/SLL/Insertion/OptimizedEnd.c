#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node* insertEndOptimized(struct node *ptr, int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return temp;
}
int main(){
    int n;
    scanf("%d", &n);
    //inserting the first element manually:
    struct node *head = malloc(sizeof(struct node));
    struct node *ptr = NULL;
    for(int i = 0; i < n; i++)
    {
        int x;
        scanf(" %d", &x);
        if(ptr == NULL){
            head->data = x;
            head->next = NULL;
            ptr = head;
        }else
        ptr = insertEndOptimized(ptr, x);
    }
    //traversing the list:
    ptr = head;
    printf("The linked list: \n");
    while(ptr!= NULL){
        printf(" %d", ptr->data);
        ptr=ptr->next;
    }
}