#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node*next;
};

void linklist(struct Node *ptr){
	
	while(ptr!=NULL){
		
		printf("%d\t",ptr->data);
		ptr = ptr->next;
	}

}
//	INSERTING FUNCTION AT THE BEGANINING

struct Node*insertatbeganing(struct Node*head,int data){
	struct Node *insert=(struct Node*)malloc(sizeof(struct Node));
	insert->next=head;
	insert->data=data;
	return insert;
	
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
	head ->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=20;
	third->next=fourth;

	fourth->data=40;
	fourth->next=NULL;
	
	//head->data=10;
	//linklist(head);
	head=insertatbeganing(head,50);
	linklist(head);
	//head->next=second
	return 0;
	
}

//linklist(head);

