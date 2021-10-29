#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
 
 

void Print(struct node*ptr) {
	
	printf("Forward: ");
	while(ptr != NULL) {
		printf("%d ",ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}

void Reverse(struct node* ptr ) {
 
	if(ptr == NULL) return; 
	
	while(ptr->next != NULL) {
		ptr = ptr->next;
	}
	
	printf("Reverse: ");
	while(ptr != NULL) {
		printf("%d", ptr->data);
		ptr = ptr->prev;
	}
	printf("\t");
}

	
int main()
{
     struct node *head;
    struct node *second ;
    struct node *third; 
    struct node *fourth; 
    head = (struct node *)malloc(sizeof(struct node ));
    second = (struct node *)malloc(sizeof(struct node ));
    third = (struct node *)malloc(sizeof(struct node ));
    fourth= (struct node *)malloc(sizeof(struct node ));
   


    head->data=45;
    head->prev=NULL;
    head->next=second;

    second->data=23;
    second->prev=head;
    second->next=third;

    third->data=67;
    third->prev=second;
    third->next=fourth;

    fourth->data=21;
    fourth->prev=third;
    fourth->next=NULL;
    
Print(head);
Reverse(head);
    
}
