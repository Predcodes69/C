// struct node* delete(int pos, struct node **head){
//     --pos;
//     struct node *temp = *head;
//     if(pos == 0){
//         //the head node is to be altered, the first node is to be removed
//         temp = (*head)->next;
//         free(*head);
//         return temp;    ///new head is temp, old head isn't alive anymore! RIP
//     }
//     struct node *ptr = *head;
//     while(pos != 1){
//         ptr=ptr->next;
//         --pos;
//     }
//     struct node *ptr2=ptr->next->next;
//     ptr->next = ptr2;
//     return temp;
// }