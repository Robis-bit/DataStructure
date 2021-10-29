#include<stdio.h>
#include<stdlib.h>
 
struct Node
{
    int data;
    struct Node *next;
};
 
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
 
// struct Node * insertAtFirst(struct Node *head, int data){
//     struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
//     ptr->data = data;
 
//     struct Node * p = head->next;
//     while(p->next != head){
//         p = p->next;
//     }
//     // At this point p points to the last node of this circular linked list
 
//     p->next = ptr;
//     ptr->next = head;
//     head = ptr;
//     return head;
 
// }
struct Node * insertAtBet(struct Node *head, int data,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    int i=0;
    while(i!=index-1){
        p = p->next;
        i++;
    }
    // At this point p points to the last node of this circular linked list
 
    ptr->next = p->next;
  p->next=  ptr;
    
    return head;
 
}
 
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
       printf("*** Circular linkList before deletion***");
    linkedListTraversal(head);
     head=insertAtBet(head,45,2);
     printf("*** circular linkList after deletion***");
     linkedListTraversal(head);
 
    return 0;
}
