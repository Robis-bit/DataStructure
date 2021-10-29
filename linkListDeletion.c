#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedListTraversal(struct node *ptr){
    while (ptr!=NULL)
    {
          printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}
// struct node*deletionAtFirst(struct node*head)
// {
//     struct node*ptr=head;
//     head=head->next;
//     free(ptr);
//     return head;
// }
// struct node*deletionAtIndex(struct node *head, int index)
// {
//     struct node*q=head;
//     int i=0;
//     struct node*p=head->next;
//     while(i!=index-1)
//     {
//         q=q->next;
//         p=p->next;
//         i++;
//     }

// q->next=p->next;
// free(p);
// return head;
// }
// struct node*deletionAtEnd(struct node *head)
// {
//     struct node*q=head;
//     int i=0;
//     struct node*p=head->next;
//     while(p->next!=NULL)
//     {    p=p->next;
//         q=q->next;
        
//         i++;
//     }

// q->next=NULL;
// free(p);
// return head;
// }
struct node * deletionAtValue(struct node * head, int value){
    struct node *q = head;
    struct node *p = head->next;
    while(p->data!=value && p->next!= NULL)
    {
        q = q->next;
        p = p->next;
    }
    
    if(p->data == value){
        q->next = p->next;
        free(p);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 23;
    head->next = second;
    second->data = 45;
    second->next = third;
    third->data = 21;
    third->next = fourth;
    fourth->data = 78;
    fourth->next = NULL;
    printf("***linkList before deletion***");
    linkedListTraversal(head);
    //  head=deletionAtFirst(head);
    //  printf("***linkList after deletion***");
    //  linkedListTraversal(head);
    //  head=deletionAtIndex(head,2);
    //   printf("***linkList after deletion***");
    //   linkedListTraversal(head);
    //    head=deletionAtEnd(head);
    //   printf("***linkList after deletion***");
    //   linkedListTraversal(head);
      head=deletionAtValue(head,45);
      printf("***linkList after deletion***");
      linkedListTraversal(head);
    return 0;
}