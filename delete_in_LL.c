#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node*ptr;
};
int i;
void linklist(struct Node *next){
	
	while(next!=NULL){
		
		printf("%d\t",next->data);
		next = next->ptr;
	}}

struct Node*delete_first (struct Node*head){
	struct Node*p=head;
	head=head->ptr;
	free(p);
	return head;
}

void deleteAtIndex(struct Node** head, int index) {
    if (*head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* temp = *head;

    if (index == 0) {
        *head = temp->ptr;
        free(temp);
        return;
    }

    for (i = 0; temp != NULL && i < index - 1; i++) {
        temp = temp->ptr;
    }

    if (temp == NULL || temp->ptr == NULL) {
        printf("Index out of bounds.\n");
        return;
    }

    struct Node* toDelete = temp->ptr;

    temp->ptr= toDelete->ptr;

    free(toDelete);
}

int main()
	{
	
	struct Node*head;
	struct Node*first;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head ->ptr=second;
	
	second->data=20;
	second->ptr=third;
	
	third->data=30;
	third->ptr=fourth;
	
	fourth->data=40;
	fourth->ptr=NULL;
	
	linklist(head);
//	head=delete_first(head);
	printf("\n");
	linklist(head);
 deleteAtIndex(&head,1);
	linklist(head);
	return 0;
	
}

//linklist(head);

